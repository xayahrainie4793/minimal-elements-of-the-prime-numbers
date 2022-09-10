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
using namespace std;

// code base lgmin@lgmax [lgmin [lgmax]]
// explores a sigle family of numbers (on the standard input file) of kind s1{d}s2
// to find the first prime of length between lgmin and lgmax
// if found the (probably) prime is sent to the standard error file
// details of the exploration are sent to the standard output

using sint=long unsigned int; // std::vector<std::__cxx11::basic_string<char> >::size_type;


char tr[128]; sint w[128];
sint b,i,lgmin,lgmax,nbcurl,nbcurlmin,nbcurlmax;
vector<string> found; string covering; bool newl;
ifstream kern; ofstream result;


int main(int argc, char *argv[])
{string p,ms,prefms,s,ss,sss; sint i,l1,l2,y,rpr; mpz_class z,z1,z2,bx;
 ms=argv[1];b=stoi(argv[1]);
 if(argc>2){s=argv[2]; for(i=0;i<s.length();i++)if(s[i]=='@')break; 
            ss=s.substr(0,i);lgmin=stoi(ss);
            if(i!=s.length()){sss=s.substr(i+1,s.length());lgmax=stoi(sss);} else {lgmax=lgmin;lgmin=2;}}
           else {lgmax=100000;lgmin=2;}
 cout<<"search for primes in base "<<b<<"; lgmin="<<lgmin<<", lgmax="<<lgmax<<"\n";
 if(b>basemax){cerr<<"base trop grande\n";return 1;}
 for(char c='0';c<='9';c++){w[c]=0+c-'0';tr[0+c-'0']=c;}
 for(char c='A';c<='Z';c++){w[c]=10+c-'A';tr[10+c-'A']=c;}
 for(char c='a';c<='z';c++){w[c]=36+c-'a';tr[36+c-'a']=c;}
 cin>>p;z1=0;l1=0;
    cout<<p<<":\n";
    for(i=0;i<p.length();i++)
       {if(p[i]=='{')break;
        if(w[p[i]]>=b)abort();
        z1=z1*b+w[p[i]];l1++;
       }
    if(p[i+2]!='}')abort();
    y=w[p[i+1]];if(y>=b)abort();
    z2=0;bx=1;l2=0;
    for(i=i+3;i<p.length();i++)
       {if(w[p[i]]>=b)abort();
        bx=bx*b;z2=z2*b+w[p[i]];l2++;
       }
    while(l1+l2<lgmin){z1=z1*b+y;l1++;}
    while(l1+l2<=lgmax)
     {z=z1*bx+z2;if((l1+l2)%1000==0){cout<<l1+l2<<" length\n";cout.flush();}
      rpr=mpz_probab_prime_p(z.get_mpz_t(),50); 
      if(rpr==2){cerr<<l1+l2<<"\n";cout<<"PRIME:"<<l1+l2<<"\n";exit(1);}
      if(rpr==1){cerr<<l1+l2<<"\n";cout<<"probably PRIME:"<<l1+l2<<"\n";exit(2);}
      z1=z1*b+y;l1++;
     }
} // fin main
