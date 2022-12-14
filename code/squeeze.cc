#include <list>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h>
#define basemax 50
#define sizek   25

// code cut <input >output
// explores the numberss in the input file
// if they are longer than cut, they are transformed in s1(d^n)s2 
// the result is sent to the output file

using namespace std;
using sint=long unsigned int; // std::vector<std::__cxx11::basic_string<char> >::size_type;

ifstream lresu;

int main(int argc, char *argv[])
{string p,exp,ms,prefms,s1,s2; long int i,j,k,l; sint cut; char ss;
 cut=atoi(argv[1]); 
 while(cin>>p)
  {if(p.length()<=cut){cout<<p<<"\n";continue;}
   k=cut/2;ss=p[k];l=1;
   for(i=k-1;i>=0;i--)if(p[i]!=ss)break;else l++;
   for(j=k+1;j<p.length();j++)if(p[j]!=ss)break;else l++;
   cout<<p.substr(0,i+1)<<"("<<ss<<"^"<<l<<")"<<p.substr(j,p.length())<<"\n";
  }
} // end main
