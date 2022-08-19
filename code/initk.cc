#include <list>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <time.h>
#include <sstream>
#include <stdlib.h>
using namespace std;

// initializes the kernel for base

using sint=long unsigned int; // std::vector<std::__cxx11::basic_string<char> >::size_type;
list <string> found; vector <sint> fact; 
char tr[128]; int w[128];unsigned short int b;

ofstream kern; 

void buildfact()
 {unsigned int kk,n; bool ok;
  fact.push_back(2);fact.push_back(3);fact.push_back(5);
  for(n=7;n<b*b*b;n++)
   {ok=true;for(kk=0;fact[kk]*fact[kk]<=n;kk++)if(n%fact[kk]==0){ok=false;break;}
    if(ok)fact.push_back(n);
   }
 }

bool ok(sint n) // is prime?
 {unsigned int kk;
 if (n<2) return false;
 for (kk=0;fact[kk]*fact[kk]<=n;kk++)
     {if(n % fact[kk]==0)return  false;}
 return true;
 }

bool cover(string  el1,string el2) 
// checks if el1 is a substring of el2
 {sint i,j; 
  if(el1==el2)return true;
  if(el1.length()>=el2.length())return false;
  i=0;j=0;
  while(i<el1.length())
  {if(el1[i]==el2[j])
     {i++;j++;if(i>=el1.length())return true;if(j>=el2.length())return false;}
   else{j++;if(j>=el2.length())return false;}
  }
  return true;
 }

bool smaller(string el1,string el2) 
// checks if el1 is smaller than el2 (assuming incomparability)
 {sint i;
  if(el1.length()<el2.length())return true;
  if(el1.length()>el2.length())return(false);
  i=0;
  while(i<el1.length())
       {if(el1[i]==el2[i])i++; else return(w[el1[i]]<w[el2[i]]);}
  return false;
 }

int main(int argc, char *argv[])
{string p,ms,pref,prefms; sint i,j;
list<string>::iterator it;
ms=argv[1];b=atoi(argv[1]);buildfact();
pref="kernel"; prefms=pref+ms;
kern.open(prefms.c_str(),std::ofstream::out | std::ofstream::trunc);
for(char c='0';c<='9';c++){w[c]=0+c-'0';tr[0+c-'0']=c;}
for(char c='A';c<='Z';c++){w[c]=10+c-'A';tr[10+c-'A']=c;}
for(char c='a';c<='z';c++){w[c]=36+c-'a';tr[36+c-'a']=c;}
for(i=b+1;i<b*b*b*b*b;i++)if(ok(i))
   {j=i;p="";while(j>0){p=tr[j%b]+p;j=j/b;};
    for(it=found.begin();it!=found.end();it++){if(cover((*it),p))break;} // p is covered
    if(it!=found.end())continue;
    found.push_back(p);
   }
for(it=found.begin();it!=found.end();it++)kern<<(*it)<<"\n";
kern.close();
} // end main
