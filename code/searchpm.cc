#include <list>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h>
#include <gmpxx.h>
#include <gmp.h>
#define basemax 50
#define sizek   25

// code base lgmin@lgmax 
// explores families of numbers (on the standard input file) of kind s1{d}s2
// to find primes of length between lgmin and lgmax
// found (probably) primes are sent to the standard error file
// families where nothing is found are sent to a newleft file
// details of the exploration are sent to the standard output

using namespace std;
using sint=long unsigned int; // std::vector<std::__cxx11::basic_string<char> >::size_type;

char tr[128]; int w[128];
sint b,i,lgmin,lgmax,nbcurl,nbcurlmin,nbcurlmax;
vector<string> found; string covering; bool newl;
struct elem{string p;string s1;string s2;string s;sint y;mpz_class z1,z2,bx; bool finished;}; 
elem pi; vector <elem> vpi;
ifstream kern; ofstream result;

bool cover(string  el) 
// checks if some member of found is a substring of el
 {sint i,j,it; 
  for(it=0;it!=found.size();it++)
     {if(el==found[it]){covering=found[it];return true;}
      if(el.length()<found[it].length())continue;
      i=0;j=0;
      while(i<el.length())
       {if(el[i]==(found[it])[j])
        {i++;j++;if(j>=(found[it]).length()){covering=found[it];return true;}
         if(i>=el.length())break;
        }
        else {i++;if(i>=el.length())break;}
       }
     }
  return false;
 }

int main(int argc, char *argv[])
{string p,ms,prefms,s,s1,s2,ss,sss; sint i,lg,l1,l2,y,rpr; mpz_class z,z1,z2,bx;
 ms=argv[1];b=stoi(argv[1]);
 prefms="kernel"+ms;kern.open(prefms.c_str());
 prefms="newleft"+ms;result.open(prefms.c_str());
 while(kern>>p) {found.push_back(p); }
 if(argc>2){s=argv[2]; for(i=0;i<s.length();i++)if(s[i]=='@')break; 
            ss=s.substr(0,i);lgmin=stoi(ss);
            if(i!=s.length()){sss=s.substr(i+1,s.length());lgmax=stoi(sss);} else {lgmax=lgmin;lgmin=2;}}
           else {lgmax=100000;lgmin=2;}
 cout<<"search for primes in base "<<b<<"; lgmin="<<lgmin<<", lgmax="<<lgmax<<"\n";
 if(b>basemax){cerr<<"base too large\n";return 1;}
 for(char c='0';c<='9';c++){w[c]=0+c-'0';tr[0+c-'0']=c;}
 for(char c='A';c<='Z';c++){w[c]=10+c-'A';tr[10+c-'A']=c;}
 for(char c='a';c<='z';c++){w[c]=36+c-'a';tr[36+c-'a']=c;}
 while(cin>>p)
  {z1=0;l1=0;s1="";s2="";
    for(i=0;i<p.length();i++)
       {if(p[i]=='{')break;
        if(w[p[i]]>=b){cout<<p<<" is illed formed1";abort();}
        s1+=p[i];z1=z1*b+w[p[i]];l1++;
       }
    if(p[i+2]!='}'){cout<<p<<" is illed formed2";abort();}
    s=p[i+1];y=w[s[0]];if(y>=b){cout<<p<<" is illed formed3";abort();}
    z2=0;bx=1;l2=0;
    for(i=i+3;i<p.length();i++)
       {if(w[p[i]]>=b){cout<<p<<" is illed formed4";abort();}
        bx=bx*b;s2+=p[i];z2=z2*b+w[p[i]];l2++;
       }
    while(l1+l2<lgmin){z1=z1*b+y;s1+=s;l1++;}
    if(cover(s1+s2))cout<<p<<" is covered by "<<covering<<" at length "<<lgmin<<"\n"; else
      {pi.s1=s1;pi.s2=s2;pi.s=s;pi.z1=z1;pi.z2=z2;pi.p=p;pi.finished=false;pi.y=y;pi.bx=bx;
      vpi.push_back(pi);}
  }
 lg=lgmin;
 while(lg<=lgmax)
  {if(lg%1000==0){cout<<lg<<" length\n";cout.flush();}
   for(i=0;i<vpi.size();i++)if(!vpi[i].finished)
     {if(lg%1000==0)if(cover(vpi[i].s1+vpi[i].s2))
        {cout<<vpi[i].p<<" is covered by "<<covering<<" at length "<<lg<<"\n";vpi[i].finished=true;}
      z=vpi[i].z1*vpi[i].bx+vpi[i].z2;
      rpr=mpz_probab_prime_p(z.get_mpz_t(),50); 
      if(rpr==2){
         cerr<<vpi[i].s1+vpi[i].s2<<"\n";cout<<vpi[i].p<<" is PRIME at length "<<lg<<"\n";
         found.push_back(vpi[i].s1+vpi[i].s2);vpi[i].finished=true;}
      if(rpr==1){cerr<<vpi[i].s1+vpi[i].s2<<"\n";
        cout<<vpi[i].p<<" is probably PRIME at length "<<lg<<"\n";
        found.push_back(vpi[i].s1+vpi[i].s2);vpi[i].finished=true;}
      vpi[i].z1=vpi[i].z1*b+vpi[i].y;vpi[i].s1=vpi[i].s1+vpi[i].s;
     }
   lg++;
  }
 for(i=0;i<vpi.size();i++)if(!vpi[i].finished)result<<vpi[i].p<<"\n";
} // end main
