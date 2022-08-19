#include <list>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h>
#include <gmpxx.h>
#include <gmp.h>
// #include <assert.h>
// #include <limits.h>
// #include "big.h"   /* include MIRACL system */
#define basemax 50
#define sizek   25

// code base lgmin@lgmax n@m
// explores families of numbers (on the standard input file)
// to find primes of length between lgmin and lgmax, with a number of repetitions between n and m
// (if a repetition contains several digits, they are considered as a block)
// found (probably) primes are sent to the standard error file
// families where nothing is found are sent to a newleft file
// details of the exploration are sent to the standard output

using namespace std;
using sint=long unsigned int; // std::vector<std::__cxx11::basic_string<char> >::size_type;

char tr[128]; int w[128];
sint b,i,lgmin,lgmax,nbcurl,nbcurlmin,nbcurlmax;
vector<string> found; string covering; bool newl;
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

string stripf(string p)
{string s=""; sint i,j;
 for(i=0;i<p.size();i++)if(p[i]!='{')s=s+p[i]; else
    {for(j=i+1;j<p.size();j++)if(p[j]=='}'){i=j;break;}}
 return s;
}

bool expand(string p)
{mpz_class n1; 
 string pp,ppp,p1,p2,pr,str; sint rpr,nbcurl; 
 p1="";pp="";p2="";nbcurl=0;
 for(i=0;i<p.length();i++)if(p[i]=='{')nbcurl++;  
 str=stripf(p); if(str.length()>lgmax){cout<<" too LONG\n";return false;}
 if(cover(str)){cout<<p<<" is covered by "<<covering<<"\n";return false;}
 for(i=0;i<p.length();i++)if(p[i]!='{')p1=p1+p[i];else break;
 for(i=i+1;i<p.length();i++)if(p[i]!='}')pp=pp+p[i];else break;
 for(i=i+1;i<p.length();i++) p2=p2+p[i];
  if(nbcurl==0)
   {if(p1.length()<lgmin)return false;
    if(p1.length()%1000==0){cout<<p1.length()<<" length\n";cout.flush();}
    if(cover(p1)){cout<<p<<" is covered by "<<covering<<"\n";return false;}
    n1=0;for(i=0;i<p1.length();i++)n1=n1*b+w[p1[i]];
    rpr=mpz_probab_prime_p(n1.get_mpz_t(),50); 
    if(rpr==2){cerr<<p1<<"\n";cout<<"PRIME\n";found.push_back(p1);return true;}
    if(rpr==1){cerr<<p1<<"\n";cout<<"probably PRIME\n";found.push_back(p1);return true;}
    return false;
   } else
   {ppp="";pr=p1+p2;cout<<"\n"<<p1<<"{"<<pp<<"}"<<p2<<"=>";
    while(pr.length()<=lgmax)
       {str=stripf(pr);if(cover(str)){cout<<pr<<" is covered by "<<covering<<"\n";return true;}
        if(nbcurl==1){if(expand(pr))return false;else{ppp+=pp;pr=p1+ppp+p2;continue;}}
        expand(pr);ppp+=pp;pr=p1+ppp+p2;
       }
    if(pr.length()>lgmax)newl=true;
    return false;
   }
}
 
int main(int argc, char *argv[])
{string p,ms,prefms,s,ss,sss; sint i;
 ms=argv[1];b=stoi(argv[1]);
 prefms="kernel"+ms;kern.open(prefms.c_str());
 prefms="newleft"+ms; result.open(prefms.c_str(),ios::out);
 while(kern>>p) {found.push_back(p); }
 if(argc>2){s=argv[2]; for(i=0;i<s.length();i++)if(s[i]=='@')break; 
            ss=s.substr(0,i);lgmin=stoi(ss);
            if(i!=s.length()){sss=s.substr(i+1,s.length());lgmax=stoi(sss);} else {lgmax=lgmin;lgmin=2;}}
           else {lgmax=10000;lgmin=2;}
 if(argc>3){s=argv[3]; for(i=0;i<s.length();i++)if(s[i]=='@')break;
            ss=s.substr(0,i);nbcurlmin=stoi(ss);
            if(i!=s.length()){sss=s.substr(i+1,s.length());nbcurlmax=stoi(sss);} else {nbcurlmax=nbcurlmin;}}
           else {nbcurlmin=0;nbcurlmax=1000;}
 cout<<"search for primes in base "<<b<<"; lgmin="<<lgmin<<", lgmax="<<lgmax<<"; nbcurlmin="<<nbcurlmin<<", nbcurlmax="<<nbcurlmax<<"\n";
 if(b>basemax){cerr<<"base too large\n";return 1;}
 for(char c='0';c<='9';c++){w[c]=0+c-'0';tr[0+c-'0']=c;}
 for(char c='A';c<='Z';c++){w[c]=10+c-'A';tr[10+c-'A']=c;}
 for(char c='a';c<='z';c++){w[c]=36+c-'a';tr[36+c-'a']=c;}
 while(cin>>p)
   {cout<<p<<":\n"; nbcurl=0;
    for(i=0;i<p.length();i++){if(p[i]=='{')nbcurl++;if(p[i]!='{'&&p[i]!='}'&&w[p[i]]>=b)abort();}  
    if(nbcurl<nbcurlmin||nbcurl>nbcurlmax)
      {result<<p<<"\n";result.flush();cout<<"\n====================\n";continue;}
    newl=false;expand(p);if(newl)result<<p<<"\n";result.flush();cout<<"\n====================\n";}
} // end main
