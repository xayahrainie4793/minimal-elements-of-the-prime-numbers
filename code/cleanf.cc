//analyser les premiers membres de familles infinies
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

// cleans a set of families of numbers (on the standard input) 
// and sends the result on the standard output
// simplifies the repetitions: d{d} => {d}
// explicits the first and last digits
// drops the copies

using sint=long unsigned int; // std::vector<std::__cxx11::basic_string<char> >::size_type;

int main(int argc, char *argv[])
{string p; vector <string> res; sint i,l1=0,l2=0;
 while(cin>>p)
 {l1++; 
  for(i=0;i<p.size();i++){if(p[i]=='{')while(i!=1&&p[i-1]==p[i+1]){p.erase(i-1,1);i--;}
                          if(p[i]=='}')while(i!=p.size()-2&&p[i+1]==p[i-1])p.erase(i+1,1);
                          if(p[p.size()-1]=='}')p=p+p[p.size()-2];
                          if(p[0]=='{')p=p[1]+p;
                         }  
  for(i=0;i<res.size();i++)if(p==res[i])break;
  if(i==res.size()){l2++;res.push_back(p);}
 }
 cerr<<"we went from "<<l1<<" to "<<l2<<" items\n";
 for(i=0;i<res.size();i++)cout<<res[i]<<"\n";
} // end main

