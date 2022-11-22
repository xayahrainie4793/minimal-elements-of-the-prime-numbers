//   searchLLR b n1@n2 <source
//   b is the base, source provides a series of linear families, n1 is the first exponent, n2 the last one
//   the program creates a sieve of exponents to analyse, 
//   then calls llr64; results are sent to lresu<b>00.txt
#include <list>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <time.h>
#include <sstream>
#include <stdlib.h>
#define factl 100000
using namespace std;
using sint=long int; // std::vector<std::__cxx11::basic_string<char> >::size_type;

string p,p1,p2,pp,s,ss,sss,lru,pref;
sint b,j,lgmin,lgmax,x1,x2,b1,b2,k,k1,k2,lg,lg1;
vector <sint> fact,listn; 
char tr[128]; int w[128];
ofstream result,lresult; 

void buildfact()
 {sint kk,n,nn,n1; bool ok; 
  fact.push_back(2);fact.push_back(3);fact.push_back(5);
  nn=1;n1=factl;
  for(lg1=0;nn<n1;lg1++){nn=nn*b;}
  lg1=2*lg1;
  for(n=7;true;n++)
   {ok=true;for(kk=0;fact[kk]*fact[kk]<=n;kk++)if(n%fact[kk]==0){ok=false;break;}
    if(ok){fact.push_back(n);if(n>nn)break;}
   }
 }

bool ok(unsigned long long int n) // is prime?
 {sint kk;
 if (n<2) return false;
 for (kk=0;fact[kk]*fact[kk]<=n;kk++)
     {if(n % fact[kk]==0)return  false;}
 return true;
 }

sint gcd(sint a,sint b)
 {if(b==0)return a;
  return gcd(b,a%b);
 }

int main(int argc, char *argv[])
{int i,c,x,n; string bs,com; bs=argv[1]; b=atoi(argv[1]); 
 for(char c='0';c<='9';c++){w[c]=0+c-'0';tr[0+c-'0']=c;}
 for(char c='A';c<='Z';c++){w[c]=10+c-'A';tr[10+c-'A']=c;}
 for(char c='a';c<='z';c++){w[c]=36+c-'a';tr[36+c-'a']=c;}
 buildfact(); 
 s=argv[2]; for(i=0;i<s.length();i++)if(s[i]=='@')break; 
            ss=s.substr(0,i);lgmin=stoi(ss);
            if(i!=s.length()){sss=s.substr(i+1,s.length());lgmax=stoi(sss);} else {lgmax=lgmin;lgmin=2;}
 pref="llr-data"+bs; lru="lresu"+bs+"00.txt";
 lresult.open(lru.c_str(),ios::app);
 lresult<<"search for possible exponents in base "<<b<<"; lgmin="<<lgmin<<", lgmax="<<lgmax<<"; greater tested prime factor="<<fact.back()<<"\n";
 lresult.close();
 while(cin>>p) 
      {lresult.open(lru.c_str(),ios::app); lresult<<p<<":";
       result.open(pref.c_str(),ios::trunc);
       lg=0;x1=0;for(j=0;j<p.length();j++) if(p[j]=='{')break;else{lg++;x1=x1*b+w[p[j]];}j++; 
       c=w[p[j]];j++; if(p[j]!='}')abort();x2=0;b2=1;
       for(j=j+1;j<p.length();j++){x2=x2*b+w[p[j]];b2=b2*b;}
       b1=b-1;k1=(b1*x1+c)*b2;k2=b1*x2-c*b2;
       k=gcd(abs(k2),gcd(k1,b1));k1=k1/k;k2=k2/k;b1=b1/k;
       if(k2>=0){result<<"ABC ("<<k1<<"*"<<b<<"^n+"<<k2<<")/"<<b1<<"\n";
                 lresult<<"ABC ("<<k1<<"*"<<b<<"^n+"<<k2<<")/"<<b1<<"\n";
                }
       else{result<<"ABC ("<<k1<<"*"<<b<<"^n"<<k2<<")/"<<b1<<"\n";
            lresult<<"ABC ("<<k1<<"*"<<b<<"^n"<<k2<<")/"<<b1<<"\n";
           }
       listn.clear();for(j=lgmin;j<=lgmax;j++)listn.push_back(j); 
       for(i=0;i<fact.size();i++)
        {x=x1;n=0;
         for(j=0;j<listn.size();j++)
          {for(k=n;k<listn[j];k++)x=(x*b+c)%fact[i];n=listn[j];
           if((x*b2+x2)%fact[i]==0){listn.erase(listn.begin()+j);j--;}
          }
        }
       for(j=0;j<listn.size();j++)result<<listn[j]<<"\n";result.close();
       lresult.close();
       com="rm llr"+bs+"00.ini";
       system(com.c_str());
       com="llr64 -d "+pref+" -oStopOnSuccess=1 -a"+bs+"00  >brol";
       system(com.c_str());
      }
} // fin main
