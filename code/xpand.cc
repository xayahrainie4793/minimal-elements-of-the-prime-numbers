#include <list>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h>
#define basemax 50
#define sizek   25

// code <input >output 
// expands in the classical form s1dddd...dddds2 on the output file 
// the numberss given in the form s1(d^n)s2 in the input file

using namespace std;
using sint=long unsigned int; // std::vector<std::__cxx11::basic_string<char> >::size_type;

ifstream lresu;

int main(int argc, char *argv[])
{string p,exp,ms,prefms,s1,s2; long int i,j,k,l; sint cut; char ss;
 while(cin>>p)
  {s1="";for(i=0;i<p.length();i++)if(p[i]=='(')break;else s1+=p[i];
   if(i==p.length()){cout<<p<<"\n";continue;}ss=p[++i];i++;exp="";
   for(j=i+1;j<p.length();j++)if(p[j]==')')break;else exp+=p[j];
   s2="";for(k=j+1;k<p.length();k++)s2+=p[k]; l=stoi(exp);
   ms="";for(i=0;i<l;i++)ms+=ss;
   cout<<s1<<ms<<s2<<"\n";
  }
} // end main
