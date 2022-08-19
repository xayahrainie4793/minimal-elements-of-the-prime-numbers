
#include <list>
#include <string>
#include <iostream>
#include <fstream>
#include <time.h>
#include <sstream>
#include <stdlib.h>
using namespace std;

using sint=long unsigned int; // std::vector<std::__cxx11::basic_string<char> >::size_type;
list <string> found;
char tr[128]; int w[128];

ifstream kern; ofstream kernn; 

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
{string p,pp,ms,pref,prefms; sint l1,l2;
bool modif; list<string>::iterator it,itp,itt;
{ms=argv[1];
pref="kernel"; prefms=pref+ms;
kern.open(prefms.c_str());
for(char c='0';c<='9';c++){w[c]=0+c-'0';tr[0+c-'0']=c;}
 for(char c='A';c<='Z';c++){w[c]=10+c-'A';tr[10+c-'A']=c;}
 for(char c='a';c<='z';c++){w[c]=36+c-'a';tr[36+c-'a']=c;}
while(kern>>p)
      {found.push_back(p);
      } l1=found.size();
while(cin>>p)
{for(it=found.begin();it!=found.end();it++)
     if(cover((*it),p)){break;} // p is covered
 if(it!=found.end()){continue;}
 modif=true;
 for(it=found.begin();it!=found.end();it++)
     if(cover(p,(*it))){found.erase(it);it--;} // p covers one or more strings
// add p in the right place
 found.push_back(p);
 for(it=found.begin();it!=found.end();it++)
    {if(smaller(p,(*it)))
       {itp=found.end();for(itp--;itp!=it;itp--)
           {itt=itp;itt--;(*itp)=(*itt);}
        (*it)=p;
        break;
       }
    }
}
kern.close();
if(modif)
   {kernn.open(prefms.c_str(),std::ofstream::out | std::ofstream::trunc);
    for(it=found.begin();it!=found.end();it++)
     {kernn<<(*it)<<"\n";}
    kernn.close();
l2=found.size();cout<<"old length="<<l1<<"; new length="<<l2<<"\n";
   }
}} // end main

