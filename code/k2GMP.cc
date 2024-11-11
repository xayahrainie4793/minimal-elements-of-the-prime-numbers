#include <list>
#include <cmath>
#include <string>
#include <random>
#include <algorithm>
#include <vector>
#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h>
#include <gmpxx.h>
#include <gmp.h>
#define cyclemax 12
#define nbfact 2 // number of simultaneous prime factors considered for a family
#define mxfact 2 // largest simultaneous factor
#define maxrem 100 // largest number of remainders
using namespace std;

// code base mxlg [d1[@d2] [d3[@d4]]] 
// tries to extend the current kernel for base with primes up to length mxlg
// if d1 is specified, we only consider families starting with digit d1 (up to d2 if specified)
// if d3 is specified, we only consider families ending with digit d3 (up to d4 if specified)
// new found primes are gathered in a file newprimes{base}-suffix
// and families to be still analyzed are gathered in a file left{base}-suffix
// details of the exploration are send to the standard output

char tr[128]; int w[128];
struct simfact { int vct[nbfact]; }; 
simfact zrem,vrem;
vector <simfact> simrem; 
using family=vector <string>;
using sint=long unsigned int; // std::vector<std::__cxx11::basic_string<char> >::size_type;
vector <string> found;
ifstream kern; ofstream result,reject,court; 
sint b;
vector <sint> fact; string covering;
clock_t cpustarttime,cputime; 
mpz_class nt,nprime,nlong,n1,y,z,z1,z2,bx,zz1,zz2,zzz;
sint k,lgmax,nbsmall;
mpz_t rtt,rt1,rt2; 
random_device rd;
mt19937 gen(rd()); // set random gen

string s10(mpz_class x)
{mpz_class y=x; int r; string s="";
 while (y!=0){r=mpz_class{y%10}.get_si();y=y/10;s=tr[r]+s;}
 return s;
}

string sb(mpz_class x)
{mpz_class y=x; int r; string s="";if(x==0)return "0";
 while (y!=0){r=mpz_class{y%b}.get_si();y=y/b;s=tr[r]+s;}
 return s;
}

string familystrip(family f)
 {string ss; sint i;
  ss="";
  for(i=0;i<f.size();i=i+2)ss=ss+f[i];
  return(ss);
 }

string stringf(family f)
 {sint i; string s;if(f.size()==1)return f[0];
  if(f.size()==1){s=f[0];return s;}
  for(i=0;i<f.size()-2;i=i+2)s=s+f[i]+"{"+f[i+1]+"}";
  s=s+f[i];
  return s;
 }

long long gcd(long long i,long long j)
 {long long ii,jj,kk; if(i==0)return j;if(j==0)return i;
  if(j>i){ii=j;jj=i;} else {ii=i;jj=j;}
 while(jj!=0){kk=ii%jj;ii=jj;jj=kk;}
  return ii;}

mpz_class gcd(mpz_class i,mpz_class j)
 {mpz_class ii,jj,kk; if(i==0)return j;if(j==0)return i;
  if(j>i){ii=j;jj=i;} else {ii=i;jj=j;}
 while(jj!=0){kk=ii%jj;ii=jj;jj=kk;}
  return ii;}

 int min( int i,  int j)
 {if(i<=j)return i;else return j;}

void buildfact()
 {sint kk,n; bool ok;
  fact.push_back(2);fact.push_back(3);fact.push_back(5);
  for(n=7;n<b*b*b;n++)
   {ok=true;for(kk=0;fact[kk]*fact[kk]<=n;kk++)
             if(n%fact[kk]==0){ok=false;break;}
    if(ok){fact.push_back(n);}
   }
  for(nbsmall=0;fact[nbsmall]<b*b;nbsmall++)continue;
 }

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

bool newprime(string s)
 {sint i; mpz_class n1=0;
  for(i=0;i<s.length();i++)n1=n1*b+w[s[i]];
  if(mpz_probab_prime_p(n1.get_mpz_t(),50)>0)
    {nprime++;court<<s<<"\n";found.push_back(s);court.flush();return true;}
  else {return false;}
 }

bool difsq(string s1,int y,string s2)
 {sint i; mpz_class bb,bx,xb,yb,zy,gg,xx,yy,zz,z1,z2; bool test;
  xb=0;yb=0;bx=1;bb=b;zy=y;
  if(!mpz_root(rtt,bb.get_mpz_t(),2))return false;
  for(i=0;i<s1.size();i++)xb=xb*b+w[s1[i]];
  for(i=0;i<s2.size();i++)yb=yb*b+w[s2[i]];
  for(i=0;i<s2.size();i++)bx=bx*b;
  gg=gcd(zy,bb-1);
  xx=(y+(b-1)*xb)/gg;
  if(!mpz_root(rtt,xx.get_mpz_t(),2))return false;
  yy=(bx*y-(b-1)*yb)/gg;
  if(!mpz_root(rtt,yy.get_mpz_t(),2))return false;
  z2=mpz_class(rtt);
  zz=bx*xx;
  mpz_root(rtt,zz.get_mpz_t(),2);
  z1=mpz_class(rtt);
  test=(z1-z2)>((b-1)/gg);
  if(test)
    {cout<<s1<<"{"<<tr[y]<<"}"<<s2<<" is a difference of squares "
         <<b<<", "<<xx<<" and "<<yy<<"\n"; return true;} 
  return false;
 }

bool p4p4p4b(string s1,int y,string s2) 
// checks if we have a factorisation of x^4+4.y^4 for {d}
 {sint i; mpz_class bb,bx,xb,yb,zy,gg,xx,yy,zz,z1,z2; bool t1,t2;
  xb=0;yb=0;bx=1;bb=b;zy=y;
  if(!mpz_root(rtt,bb.get_mpz_t(),4))return false;
  for(i=0;i<s1.size();i++)xb=xb*b+w[s1[i]];
  for(i=0;i<s2.size();i++)yb=yb*b+w[s2[i]];
  for(i=0;i<s2.size();i++)bx=bx*b;
  gg=gcd(zy,bb-1);
  xx=(y+(b-1)*xb)/gg;
  yy=((b-1)*yb-bx*y)/gg;if(yy<=0)return false;
  if(xx%4==0){z1=xx/4; t1=mpz_root(rt1,z1.get_mpz_t(),4);
              t2=mpz_root(rt2,yy.get_mpz_t(),4);
              if(t1&&t2)
                {cout<<s1<<"{"<<sb(y)<<"}"<<s2<<" has a Germain's factorisation ("
                     <<z1<<","<<yy<<")\n";return true;}
             }
  if(yy%4==0){z2=yy/4; t1=mpz_root(rt2,z2.get_mpz_t(),4);
              t2=mpz_root(rt2,xx.get_mpz_t(),4);
              if(t1&&t2)
                {cout<<s1<<"{"<<sb(y)<<"}"<<s2<<" has a Germain's factorisation ("
                     <<xx<<","<<z2<<")\n";return true;}
             }
  return false;
 }

bool p4p4p4bb(string s1,string sddk,string s2) 
// checks if we have a factorisation of x^4+4.y^4 for {dd} or {dddd}
 {sint i,k; mpz_class  bb,bx,xb,yb,y,gg,xx,yy,zz,z1,z2; bool t1,t2;

  xb=0;yb=0;bx=1;y=0;k=sddk.size();for(i=0;i<k;i++)y=y*b+w[sddk[i]];
  bb=b;if(k==2)if(!mpz_root(rtt,bb.get_mpz_t(),2))return false;
  if(s2.size()%k!=0)
   {for(i=0;i<s2.size()%k;i++){s2=sddk[0]+s2;
                               if(cover(s1+s2))return false;
                               if(newprime(s1+s2))return false;}
    for(i=i;i<k;i++){s1=s1+sddk[0];
                       if(cover(s1+s2))return false;
                       if(newprime(s1+s2))return false;}
   }
  for(i=0;i<s1.size();i++)xb=xb*b+w[s1[i]];
  for(i=0;i<s2.size();i++)yb=yb*b+w[s2[i]];
  for(i=0;i<s2.size();i++)bx=bx*b;
  gg=gcd(y,bx-1);
  xx=(y+(bx-1)*xb)/gg;
  yy=((bx-1)*yb-bx*y)/gg;if(yy<=0)return false;
  if(xx%4==0){z1=xx/4; t1=mpz_root(rt1,z1.get_mpz_t(),4);
              t2=mpz_root(rt2,yy.get_mpz_t(),4);
              if(t1&&t2)
                {cout<<s1<<"{"<<sb(y)<<"}"<<s2<<" has a Germain's factorisation ("
                     <<z1<<","<<yy<<")\n";return true;}
             }
  if(yy%4==0){z2=yy/4; t1=mpz_root(rt2,z2.get_mpz_t(),4);
              t2=mpz_root(rt2,xx.get_mpz_t(),4);
              if(t1&&t2)
                {cout<<s1<<"{"<<sb(y)<<"}"<<s2<<" has a Germain's factorisation ("
                     <<xx<<","<<z2<<")\n";return true;}
             }
  return false;
 }

bool difpowb(string s1,int y,string s2,int k)
 {sint i; mpz_class bb,bx,xb,yb,zy,gg,xx,yy,zz,rt,rtk,z1,z2; bool test;
  xb=0;yb=0;bx=1;bb=b;zy=y;
  if(!mpz_root(rtt,bb.get_mpz_t(),k))return false;
  for(i=0;i<s1.size();i++)xb=xb*b+w[s1[i]];
  for(i=0;i<s2.size();i++)yb=yb*b+w[s2[i]];
  for(i=0;i<s2.size();i++)bx=bx*b;
  gg=gcd(zy,bb-1);
  xx=(y+(b-1)*xb)/gg;
  if(!mpz_root(rtt,xx.get_mpz_t(),k))return false;
  yy=(bx*y-(b-1)*yb)/gg;
  if(yy<0&&k%2==0)return false;
  if(!mpz_root(rtt,yy.get_mpz_t(),k))return false;
  zz=bx*xx;
  mpz_root(rt1,zz.get_mpz_t(),k);z1=mpz_class(rt1);
  mpz_root(rt2,yy.get_mpz_t(),k);z2=mpz_class(rt2);
  test=(z1-z2)>((b-1)/gg);
  if(test)
    {cout<<s1<<"{"<<sb(y)<<"}"<<s2<<" is a difference of "
         <<k<<"th powers: "<<b<<"^*."<<xx<<" and "<<yy<<"\n";
     return true;}
  return false;
 }

bool difpowbb(string s1,string sddk,string s2)
 {sint i,k; mpz_class bb,bx,xb,yb,y,gg,xx,yy,zz,rt,rtk,z1,z2; bool test;
  xb=0;yb=0;bx=1;y=0;k=sddk.size();for(i=0;i<k;i++)y=y*b+w[sddk[i]];
  bb=1;for(i=0;i<k;i++){bb=bb*b;}
  if(s2.size()%k!=0)
   {for(i=0;i<s2.size()%k;i++){s2=sddk[0]+s2;
                               if(cover(s1+s2))return false;
                               if(newprime(s1+s2))return false;}
    for(i=i;i<k;i++){s1=s1+sddk[0];
                       if(cover(s1+s2))return false;
                       if(newprime(s1+s2))return false;}
   }
  for(i=0;i<s1.size();i++)xb=xb*b+w[s1[i]];
  for(i=0;i<s2.size();i++)yb=yb*b+w[s2[i]];
  for(i=0;i<s2.size();i++)bx=bx*b;
  gg=gcd(y,bb-1);
  xx=(y+(bb-1)*xb)/gg;
  if(!mpz_root(rtt,xx.get_mpz_t(),k)){return false;}
  yy=(bx*y-(bb-1)*yb)/gg;
  if(yy<0&&k%2==0)return false;
  if(!mpz_root(rtt,yy.get_mpz_t(),k))return false;
  zz=bx*xx;
  mpz_root(rt1,zz.get_mpz_t(),k);z1=mpz_class(rt1);
  mpz_root(rt2,yy.get_mpz_t(),k);z2=mpz_class(rt2);
  test=(z1-z2)>((bb-1)/gg);
  if(test)
    {cout<<s1<<"{"<<sb(y)<<"}"<<s2<<" is a difference of "
         <<k<<"th powers: "<<bb<<", "<<xx<<" and "<<yy<<"\n";
     return true;}
  return false;
 }

bool smallfactor(family f)
 {sint i,ii,i1,i2;mpz_class n1,z1,z2,bx,zz1,zz2,zzz; 
  for(ii=0;ii<nbsmall;ii++)
      {i=fact[ii];n1=0;
       for(i1=0;i1<f.size();i1++)
        {if(i1%2==0)
          {for(i2=0;i2<f[i1].size();i2++)n1=(n1*b+w[f[i1][i2]])%i;
          }
          else
          {for(i2=0;i2<f[i1].size();i2++){if(n1!=((n1*b+w[f[i1][i2]])%i))break;}
           if(i2!=f[i1].size())break;
          }
        }
       if(i1!=f.size())continue;
       if(n1==0){cout<<"small factor "<<i<<" for "<<stringf(f)<<"\n";return true;}
      }
  if(f.size()==3)if(f[1].size()==1)
    {z1=0;z2=0;bx=1;y=w[f[1][0]];
     for(i=0;i<f[0].size();i++)z1=z1*b+w[f[0][i]];
      for(i=0;i<f[2].size();i++){z2=z2*b+w[f[2][i]];bx=bx*b;}
      zz1=z1*bx+z2; zz2=(z1*b+y)*bx+z2;
      mpz_gcd(zzz.get_mpz_t(),zz1.get_mpz_t(),zz2.get_mpz_t());
      if(zzz>1){cout<<"(large) common factor "<<zzz<<" for "<<stringf(f)<<"\n";
                cout.flush();return true;}  
     for(i=2;i<cyclemax;i++)if(difpowb(f[0],w[f[1][0]],f[2],i))return true;
     if(p4p4p4b(f[0],w[f[1][0]],f[2]))return true;
    }
  return false;
 } 

bool cyclicfactors(family f)
{ sint i,j,k,ii,i1,i2,iff;mpz_class n1,dk,ddk; string cycles[cyclemax];
 string pj,sddk; family ff;
 for(i=1;i<f.size();i=i+2)if(f[i].size()==1)
  {dk=1;ddk=0;sddk="";
   for(k=1;k<=cyclemax;k++) 
    {pj="";dk=dk*b;ddk=ddk*b+w[f[i][0]];sddk+=f[i];
     for(j=0;j<k;j++) // fam= fam1(pj){dk}fam2
       {ff=f;ff[i-1]=f[i-1]+pj; pj+=f[i];
        for(ii=0;ii<nbsmall;ii++)
         {iff=fact[ii];n1=0;
          for(i1=0;i1<ff.size();i1++)
            {if(i1%2==0)
              {for(i2=0;i2<ff[i1].size();i2++)n1=(n1*b+w[ff[i1][i2]])%iff;
              }
             else
              {if(i1==i){if(n1!=((n1*dk+ddk)%iff))break;} else
                {for(i2=0;i2<f[i1].size();i2++){if(n1!=((n1*b+w[f[i1][i2]])%iff))break;}
                 if(i2!=f[i1].size())break;
                }
              }
            } 
          if(i1==ff.size()&&n1==0){cycles[j]=sb(iff);break;}
         }
        if(ii<nbsmall)continue;
        if(f.size()!=3)break;
        if(k>1&&difpowbb(ff[0],sddk,ff[2]))
                            {cycles[j]="diff of kth powers";continue;}
        if((k==2||k==4)&&p4p4p4bb(ff[0],sddk,ff[2]))
                            {cycles[j]="Germain's rule";continue;}
        break;
       }
     if(j==k){cout<<" cycle of factors of length "<<k<<" at position "<<i+1<<" :";
              for(j=0;j<k;j++){cout<<cycles[j]<<",";}
              cout<<" for "<<stringf(f)<<"\n"; cout.flush(); return true;
             }
    }
  }
 return false;
}

bool dcyclfact(family f)
{if(f.size()<5)return false;
 sint i1,i2,j1,j2,k1,k2,ii,ii2,iii,iff;mpz_class n1,dk1,dk2,ddk1,ddk2; 
 int cycles[cyclemax][cyclemax]; string pj1,pj2;family ff; 
 for(i1=1;i1<f.size();i1=i1+2)if(f[i1].size()==1)
 for(i2=i1+2;i2<f.size();i2=i2+2)if(f[i2].size()==1)
  {dk1=1;ddk1=0;ff=f;  
   for(k1=1;k1<cyclemax;k1++) 
    {pj1="";dk1=dk1*b;ddk1=ddk1*b+w[f[i1][0]];
     for(j1=0;j1<k1;j1++) // fam= fam1(pj1){dk1}fam2
       {ff[i1-1]=f[i1-1]+pj1; ff[i1]=sb(ddk1); dk2=1;ddk2=0;pj1=pj1+f[i1];
        for(k2=1;k2<cyclemax;k2++) 
          {pj2="";dk2=dk2*b;ddk2=ddk2*b+w[f[i2][0]];
           for(j2=0;j2<k2;j2++) // fam= fam1(pj1){dk1}fam2(pj2){dk2}fam3
            {ff[i2-1]=f[i2-1]+pj2; ff[i2]=sb(ddk2);pj2=pj2+f[i2];
             for(ii=0;ii<nbsmall;ii++)
               {iff=fact[ii];n1=0;
                for(iii=0;iii<ff.size();iii++)
                  {if(iii%2==0)
                     {for(ii2=0;ii2<ff[iii].size();ii2++)
                         n1=(n1*b+w[ff[iii][ii2]])%iff;}
                   else
                     {if(iii==i1){if(n1!=((n1*dk1+ddk1)%iff))break;} else
                      if(iii==i2){if(n1!=((n1*dk2+ddk2)%iff))break;} else
                       {for(ii2=0;ii2<f[iii].size();ii2++) 
                           {if(n1!=((n1*b+w[f[iii][ii2]])%iff))break;}
                        if(ii2!=f[iii].size())break; } } }
                if(iii==ff.size()&&n1==0){cycles[j1][j2]=iff;break;}}
             if(ii==nbsmall)break;}
           if(j2==k2)break;}
         if(k2==cyclemax)break;}
       if(j1==k1)break;}
      if(k1!=cyclemax) 
                  {cout<<" rectangular cycle of factors of length ("<<k1<<","<<k2<<") ";
                   cout<<"at positions (" <<i1<<","<<i2<<") :\n";
                   for(j1=0;j1<k1;j1++) 
                     {cout<<"(";for(j2=0;j2<k2;j2++)cout<<cycles[j1][j2]<<","; 
                      cout<<")\n";
                     } 
                   return true;  
                  } 
  } 
 return false;
}

bool par3(family f) // check if a ternary choice has cyclic even/odd factors
{if(f.size()<7)return false;
 sint i1,i2,i3,j1,j2,j3,ii,ii2,iii,iff;mpz_class n1,dk1,dk2,ddk1,ddk2; 
 int cycles[2][2][2]; string pj1,pj2;family ff; 
 for(i1=1;i1<f.size();i1=i1+2)if(f[i1].size()==1)
 for(i2=i1+2;i2<f.size();i2=i2+2)if(f[i2].size()==1)
 for(i3=i2+2;i3<f.size();i3=i3+2)if(f[i3].size()==1)
  {
for(j1=0;j1<2;j1++){for(j2=0;j2<2;j2++){for(j3=0;j3<2;j3++)
     {ff=f;ff[i1]=f[i1]+f[i1];ff[i2]=f[i2]+f[i2];ff[i3]=f[i3]+f[i3];
      if(j1==1)ff[i1-1]=f[i1-1]+f[i1];
      if(j2==1)ff[i2-1]=f[i2-1]+f[i2];
      if(j3==1)ff[i3-1]=f[i3-1]+f[i3];
            for(ii=0;ii<nbsmall;ii++)
               {iff=fact[ii];n1=0;
                for(iii=0;iii<ff.size();iii++)
                  {if(iii%2==0)
                     {for(ii2=0;ii2<ff[iii].size();ii2++)
                         n1=(n1*b+w[ff[iii][ii2]])%iff;}
                   else
                     {if(iii==i1){if(n1!=((n1*b*b+(b+1)*w[f[iii][0]])%iff))break;} else
                      if(iii==i2){if(n1!=((n1*b*b+(b+1)*w[f[iii][0]])%iff))break;} else
                      if(iii==i3){if(n1!=((n1*b*b+(b+1)*w[f[iii][0]])%iff))break;} else
                       {for(ii2=0;ii2<f[iii].size();ii2++) 
                           if(n1!=((n1*b+w[f[iii][ii2]])%iff))break;
                        if(ii2!=f[iii].size())break;  } } }
                if(iii==ff.size()&&n1==0){ cycles[j1][j2][j3]=iff;break;}}
            if(ii==nbsmall)break;}
  if(j3!=2)break;} if(j2!=2)break;} if(j1==2)
    {cout<<" ternary even/odd factors at positions (" <<i1<<","<<i2<<","<<i3<<") for : "<<stringf(f)<<"===>\n";
     for(j1=0;j1<2;j1++) {cout<<"[";for(j2=0;j2<2;j2++){cout<<"(";for(j3=0;j3<2;j3++)cout<<cycles[j1][j2][j3]<<",";} 
                                              cout<<"),";}
                          cout<<"],";cout<<"\n"; return true;}
  }
 return false;
}

bool reccycle2(family f,sint j)
{family ff;sint n1,i1,i2,ii,iff;
 if(j<f.size())
   {ff=f;
    if(!reccycle2(ff,j+2))return false;
    ff[j-1].push_back(ff[j][0]);return reccycle2(ff,j+2);
   }
  for(ii=0;ii<nbsmall;ii++)
     {iff=fact[ii];n1=0;
      for(i1=0;i1<f.size()-2;i1=i1+2)
         {for(i2=0;i2<f[i1].size();i2++)n1=(n1*b+w[f[i1][i2]])%iff;
          if(n1!=((n1*b*b+w[f[i1+1][0]]*b+w[f[i1+1][0]])%iff))break;
         }
      if(i1<(f.size()-2))continue;
      for(i2=0;i2<f[i1].size();i2++)n1=(n1*b+w[f[i1][i2]])%iff;
      if(n1!=0)continue;
      cout<<stringf(f)<<" has a divisor "<<iff<<"\n";return true;
     }
  return false;
}

bool manycycle2(family f) // check if many single choices have an even/odd cycle 
{sint i;
 for(i=1;i<f.size();i=i+2)if(f[i].size()>1)return false;
 return reccycle2(f,1);
}

bool eqrem(simfact v1, simfact v2)
{int k; for(k=0;k<nbfact;k++)if(v1.vct[k]!=v2.vct[k])return false;
 return true;
}

bool simdiv(family f,simfact v)
{simfact var; int ii,ll,i,l,k,j; bool cont;
 simrem.clear();simrem.push_back(zrem);
 for(i=0;i<f.size();i=i+2)
   {for(l=0;l<simrem.size();l++) for(j=0;j<f[i].size();j++)
        for(k=0;k<nbfact;k++)
           simrem[l].vct[k]=((simrem[l]).vct[k]*b+w[f[i][j]])%(v.vct[k]);
    for(l=1;l<simrem.size();l++) 
       {for(ll=0;ll<l;ll++)
         {if(eqrem(simrem[l],simrem[ll]))
           {simrem.erase(simrem.begin()+l);l--;
           }
         }
       }
// cout<<"simrem= [";for(l=0;l<simrem.size();l++){cout<<"(";for(k=0;k<nbfact;k++)cout<<simrem[l].vct[k]<<",";cout<<"),";}cout<<"]\n";
    ii=i+1;if(ii<f.size())
      {cont=true;
       while(cont)
         {cont=false;
          for(j=0;j<f[ii].size();j++)for(int l=0;l<simrem.size();l++)
            {for(k=0;k<nbfact;k++)var.vct[k]=((simrem[l]).vct[k]*b+w[f[ii][j]])%v.vct[k];
             for(ll=0;ll<simrem.size();ll++)if(eqrem(simrem[ll],var))break;
             if(ll==simrem.size()){if(ll==maxrem)return false;
                                   simrem.push_back(var);cont=true;}        
            }
         }
      }
// cout<<" reminders: "; for(l=0;l<simrem.size();l++){cout<<"(";for(k=0;k<nbfact;k++)cout<<(simrem[l]).vct[k]<<",";cout<<"),";}cout<<"\n";
  }
    for(l=0;l<simrem.size();l++)
       {for(k=0;k<nbfact;k++)if((simrem[l]).vct[k]==0)break;
        if(k==nbfact)return false;
       }    
 cout<<stringf(f)<<": ";
 cout<<"all family members are divided by a member of (";
     for(k=0;k<nbfact;k++)cout<<v.vct[k]<<" ";cout<<")\n";
 return true;
}

bool simfactors(family f)
{simfact v1; simfact v2; int j;
// cout<<" search for a bunch of divisors\n";
 for(int i=0;i<nbfact;i++){v1.vct[i]=i;v2.vct[i]=fact[v1.vct[i]];} 
// cout<<" diviseurs: ";for(int k=0;k<nbfact;k++)cout<<v2.vct[k]<<",";cout<<"\n";
 while(true)
    {if(simdiv(f,v2))return true;
     j=nbfact;
     while(j>=0)
       {j--;if(j<0)return false;
            if(v1.vct[j]<mxfact+j-nbfact)
              {v1.vct[j]++;v2.vct[j]=fact[v1.vct[j]];
               for(int k=j+1;k<nbfact;k++)
                  {v1.vct[k]=v1.vct[k-1]+1;v2.vct[k]=fact[v1.vct[k]];}
               break;
              }
       }
// cout<<" diviseurs: ";for(int k=0;k<nbfact;k++)cout<<v2.vct[k]<<",";cout<<"\n";
     
    }
}

void handelf(family f)
{family ff,fff; string s,s1,s2,s3,s4,p,p1,p2; bool test;
 sint i,j,k,kk,l,ic,jc,ic1,ic2,lc1,lc2,jc1,jc2,i1,i2,j1,j2;
 cout<<stringf(f)<<"\n";cout.flush();fff=f;nt++;
 for(j=1;j<f.size();j=j+2) // clean choices
     {p="";
      for(l=0;l<f[j].size();l++)
       {ff=f;ff[j-1]=f[j-1]+f[j][l];s=familystrip(ff);
        if(!cover(s))p.push_back(f[j][l]); 
       }
      f[j]=p;
     }
 for(i=1;i<f.size();i=i+2)if(f[i].size()==0) // simplify void choices
  {f[i-1]=f[i-1]+f[i+1];f.erase(f.begin()+i,f.begin()+i+2);i=i-2;}
// cout<<"% "<<stringf(f);
// for(i=1;i<f.size();i=i+2)if(f[i].size()==1&&f[i][0]==f[i+1][0])
//  {f[i-1]=f[i-1]+f[i];f[i].erase(0,1);} // simplify {a}a into a{a}
//cout<<"%% "<<stringf(f);
if(f.size()!=1)
 for(i=1;i<f.size()-2;i=i+2){
if(f[i].size()==1&&f[i+1].size()==0&&f[i]==f[i+2])
  {f.erase(f.begin()+i+1,f.begin()+i+3);}} // simplify {a}""{a} into {a}
 if(f!=fff){cout<<"=======> ";cout<<stringf(f)<<"\n";}
 s=familystrip(f);
 if(cover(s)){cout<<"covered by "<<covering<<"\n";return;}
 if(newprime(s)){return;}
 if(f.size()==1)return; // single string
 if(simfactors(f))return;
 if(smallfactor(f))return;
 if(cyclicfactors(f))return;
 if(dcyclfact(f))return;
 if(par3(f))return;
 if(manycycle2(f))return;
 if(s.size()>lgmax){cout<<"still to analyze (too long)\n";nlong++;
                    reject<<stringf(f)<<"\n";reject.flush();return;}

// if a digit must be repeated, repeat it, if not already very long
 if(s.size()<=lgmax) // if(s.size()<=lgmax/2)
 for(i=1;i<f.size();i=i+2)for(j=0;j<f[i].size();j++)
    {ff=f;ff[i]=ff[i].erase(j,1);p=f[i][j];
     test=simfactors(ff);
     if(!test)test=smallfactor(ff);
     if(!test)test=cyclicfactors(ff);
     if(!test)test=dcyclfact(ff);
     if(!test)test=par3(ff); 
     if(test)
       {
ff.insert(ff.begin()+i+1,p);ff.insert(ff.begin()+i+2,f[i]);
        cout<<"needed extension for "<<p<<"\n";
        s1="";for(k=0;k<i;k=k+2)s1=s1+ff[k];
        s2="";for(k=i+1;k<ff.size();k=k+2)s2=s2+ff[k];
        s3=ff[i];s4=ff[i+2];
        for(k=0;k<ff[i].size();k++)
            if(cover(s1+ff[i][k]+s2)){ff[i].erase(k,1);k--;}
        if(ff[i].length()==0)
          {ff[i]=p;ff[i+2]=s3;
           test=simfactors(ff);
           if(!test)test=smallfactor(ff);
           if(!test)test=cyclicfactors(ff);
           if(!test)test=dcyclfact(ff);
           if(!test)test=par3(ff); 
           if(test){cout<<"iterated needed extension for "<<stringf(ff)<<"\n";
                    return;}
           ff[i]="";
          }
        ff[i+2]=s4;handelf(ff);return;
       } 
    }

// check if some figures exclude each others
  for(i=1;i<f.size();i=i+2)if(f[i].size()>1)
     {s1="";for(k=0;k<i;k=k+2)s1=s1+f[k];
      s2="";for(k=i+1;k<f.size();k=k+2)s2=s2+f[k];
      for(j=0;j<f[i].size();j++)for(k=j+1;k<f[i].size();k++)
      if(cover(s1+f[i][j]+f[i][k]+s2)&&cover(s1+f[i][k]+f[i][j]+s2))
        {s3=f[i];s3.erase(k,1);s3.erase(j,1);ff=f;
         cout<<"figures "<<f[i][j]<<" and "<<f[i][k]<<" in component "<<i<<" of "<<stringf(ff)<<" exclude each others\n";
         cout<<"%1 "<<stringf(ff)<<"\n";
         ff[i]=s3;handelf(ff);s4=f[i][j];
         ff.insert(ff.begin()+i+1,s4);s4=f[i][k];
         ff.insert(ff.begin()+i+2,f[i]);
         cout<<"%2 "<<stringf(ff)<<"\n";
         handelf(ff);
         ff[i+1]=s4;
         cout<<"%3 "<<stringf(ff)<<"\n";
         handelf(ff);
         return;
        }
     }

// check if some ordered pairt is excluded 
  for(i=1;i<f.size();i=i+2)if(f[i].size()>1)
     {s1="";for(k=0;k<i;k=k+2)s1=s1+f[k];
      s2="";for(k=i+1;k<f.size();k=k+2)s2=s2+f[k];
      for(j=0;j<f[i].size();j++)for(k=0;k<f[i].size();k++)if(j!=k)
         {
if(cover(s1+f[i][j]+f[i][k]+s2))
            {cout<<"| "<<covering<<"\n";
             cout<<"! "<<f[i][j]<<" < "<<f[i][k]<<" in "<<stringf(f)<<"\n";
             s3=f[i];s4=s3;
             if(j<k){s3.erase(k,1);s3.erase(j,1);}
             else{s3.erase(j,1);s3.erase(k,1);}
             ff=f;ff[i]=s3;
             cout<<"@1 "; handelf(ff);
             cout<<"@2  ";
             ff=f;s3=f[i];s4=s3;s3.erase(j,1);s4.erase(k,1);
             ff[i]=s3;ff.insert(ff.begin()+i+1,"");ff.insert(ff.begin()+i+2,s4);
             s3=f[i][j];ff[i+1]=s3;handelf(ff);
             cout<<"@3  "; s4=f[i][k];ff[i+1]=s4;handelf(ff);
             return;
            }
         }
     }

 s=""; // if no covering
 for(i=1;i<f.size();i=i+2)
   {s=s+f[i-1];for(j=0;j<lgmax;j++)s=s+f[i];}
 s=s+f.back();if(!cover(s)){cout<<"too long:"<<stringf(f)<<"\n";
                           reject<<stringf(f)<<"\n";reject.flush();return;}

// search for a digit with minimal extension
 lc1=1000;ic=1;jc=0;
 for(i=1;i<f.size();i=i+2)
   {s1="";s2="";
    for(j=0;j<i;j=j+2)s1=s1+f[j];
    for(j=i+1;j<f.size();j=j+2)s2=s2+f[j];
    for(l=0;l<f[i].size();l++) 
      {p=f[i][l];for(j=0;j<10;j++)p=p+p;
       if(cover(s1+p+s2)){if(covering.size()<lc1){lc1=covering.size();ic=i;jc=l;}}
      }
   }
// search for a pair of options with a minimal covering
    lc2=lc1; 
    for(i1=1;i1<f.size();i1=i1+2) for(i2=i1+2;i2<f.size();i2=i2+2)
    for(j1=0;j1<f[i1].size();j1++) for(j2=0;j2<f[i2].size();j2++)
       {ff=f; p1=f[i1][j1];for(j=0;j<10;j++)p1=p1+p1;p2=f[i2][j2];for(j=0;j<10;j++)p2=p2+p2;
        ff[i1-1]=ff[i1-1]+p1;ff[i2-1]=ff[i2-1]+p2;s=familystrip(ff);
        if(cover(s)){if(covering.size()<lc2){ic1=i1;ic2=i2;jc1=j1;jc2=j2;lc2=covering.size();}}
       }
    for(i1=1;i1<f.size();i1=i1+2) 
    for(j1=0;j1<f[i1].size();j1++) for(j2=j1+1;j2<f[i2].size();j2++)
       {ff=f;i2=i1;p1=f[i1][j1];for(j=0;j<10;j++)p1=p1+p1;p2=f[i2][j2];for(j=0;j<10;j++)p2=p2+p2;
        ff[i1-1]=f[i1-1]+p1+p2;s=familystrip(ff);
        if(!cover(s))continue;
        l=covering.size();if(l>=lc2)continue;
        ff[i1-1]=f[i1-1]+p2+p1;s=familystrip(ff);
        if(!cover(s))continue;
        if(l<covering.size())l=covering.size();
        if(l>=lc2)continue;
        ic1=i1;ic2=i2;jc1=j1;jc2=j2;lc2=l;
       }
// handle selection
     
     if(lc2>=lc1) // no pair is really interesting
       {if(lc1==1000) // no digit is really selected: chose one randomly
          {test=false;ic=1;jc=0;
           if(f.size()>3){l=f.size()/2;uniform_int_distribution<> distri(0,l-1);test=true;
                          ic=1+2*(distri(gen));} 
           if(f[ic].length()>1){uniform_int_distribution<> distrj(0,f[ic].length()-1);jc=distrj(gen);test=true;}
          }
        ff=f;p=f[ic][jc];ff[ic].erase(jc,1);
        cout<<"split1 "<<stringf(f)<<" without ("<<ic<<","<<f[ic][jc]<<")-ext="<<lc1<<"\n";handelf(ff);
        cout<<"extend1 "<<stringf(f)<<" with ("<<ic<<","<<f[ic][jc]<<")\n";
        ff.insert(ff.begin()+ic+1,p);ff.insert(ff.begin()+ic+2,f[ic]); handelf(ff);
       }
     else // a pair should be handled
       {p1=f[ic1][jc1];p2=f[ic2][jc2];
        ff=f;ff[ic2].erase(jc2,1);ff[ic1].erase(jc1,1);
        cout<<"split2 "<<stringf(f)<<" without ("<<ic1<<","<<f[ic1][jc1]<<") and ("<<ic2<<","<<f[ic2][jc2]<<")-ext="<<lc2<<"\n";
        handelf(ff);fff=ff;
        ff.insert(ff.begin()+ic1+1,p1);ff.insert(ff.begin()+ic1+2,ff[ic1]+f[ic1][jc1]);
        cout<<"extend21 "<<stringf(f)<<" with ("<<ic1<<","<<f[ic1][jc1]<<
              ") and without ("<<ic2<<","<<f[ic2][jc2]<<")\n";
        handelf(ff);ff=fff;
        ff.insert(ff.begin()+ic2+1,p2);ff.insert(ff.begin()+ic2+2,ff[ic2]+f[ic2][jc2]);
        cout<<"extend22 "<<stringf(f)<<" with ("<<ic2<<","<<f[ic2][jc2]<<
              ") and without ("<<ic1<<","<<f[ic1][jc1]<<")\n";
        handelf(ff);ff=fff;
        if(ic1!=ic2)
          {ff.insert(ff.begin()+ic1+1,p1);ff.insert(ff.begin()+ic1+2,f[ic1]);
           ff.insert(ff.begin()+ic2+3,p2);ff.insert(ff.begin()+ic2+4,f[ic2]);
           cout<<"extend212 "<<stringf(f)<<" with ("<<ic1<<","<<f[ic1][jc1]<<
                 ") and ("<<ic2<<","<<f[ic2][jc2]<<")\n";
           handelf(ff);
          } else
          {ff[ic1]=ff[ic1]+p2;ff.insert(ff.begin()+ic1+1,p1);ff.insert(ff.begin()+ic1+2,fff[ic1]+p1);
           ff.insert(ff.begin()+ic2+3,p2);ff.insert(ff.begin()+ic2+4,f[ic2]);
           cout<<"extend212 "<<stringf(f)<<" with ("<<ic1<<","<<f[ic1][jc1]<<
                 ") and ("<<ic2<<","<<f[ic2][jc2]<<")\n";
           handelf(ff);ff=fff;
           ff[ic1]=ff[ic1]+p1;ff.insert(ff.begin()+ic1+1,p2);ff.insert(ff.begin()+ic1+2,fff[ic2]+p2);
           ff.insert(ff.begin()+ic2+3,p1);ff.insert(ff.begin()+ic2+4,f[ic1]);
           cout<<"extend221 "<<stringf(f)<<" with ("<<ic1<<","<<f[ic1][jc2]<<
                 ") and ("<<ic2<<","<<f[ic2][jc1]<<")\n";
           handelf(ff);
          } 
   }   
    
} // fin du traitement de la base

int main(int argc, char *argv[])
{string ms,pref,prefms,p,ss,chunkl,chunkr; family f; 
 sint i,ilb,ilh,irb,irh,il,ir,j;
 mpz_init(rtt); mpz_init(rt1); mpz_init(rt2);
 ms=argv[1];b=atoi(argv[1]); lgmax=atoi(argv[2]);
 pref="kernel"; prefms=pref+ms;
 kern.open(prefms.c_str());
 if(argc>3){chunkl=argv[3];ms=ms+'-'+argv[3];}else{chunkl="";}
 if(argc>4){chunkr=argv[4];ms=ms+'-'+argv[4];}else{chunkr="";}
 pref="result"; prefms=pref+ms; 
 result.open(prefms.c_str(),ios::out);
 pref="newprimes"; prefms=pref+ms;
 court.open(prefms.c_str(),ios::out);
 pref="left"; prefms=pref+ms;
 reject.open(prefms.c_str(),ios::out);
 for(char c='0';c<='9';c++){w[c]=0+c-'0';tr[0+c-'0']=c;}
 for(char c='A';c<='Z';c++){w[c]=10+c-'A';tr[10+c-'A']=c;}
 for(char c='a';c<='z';c++){w[c]=36+c-'a';tr[36+c-'a']=c;}
 buildfact(); 
 if(chunkl!="")cout<<" for initial digits "<<chunkl;
 if(chunkr!="")cout<<" and for terminal digits "<<chunkr; 
 cout<<"\n";
 cout<<"lgmax="<<lgmax<<"\n";cout.flush();
 found.clear();nt=0;nprime=0;nlong=0;
 for(int i=0;i<nbfact;i++)zrem.vct[i]=0;
 while(kern>>p)
      {found.push_back(p);
      }
// initialisation
 if(chunkl==""){ilb=1;ilh=b-1;} 
    else {for(i=0;i<chunkl.length();i++)if(chunkl[i]=='@')break;
          if(i==chunkl.length()){ilb=stoi(chunkl);ilh=ilb;}
            else {ilb=stoi(chunkl.substr(0,i));ilh=stoi(chunkl.substr(i+1));}
         }
 if(chunkr==""){irb=1;irh=b-1;} 
    else {for(i=0;i<chunkr.length();i++)if(chunkr[i]=='@')break;
          if(i==chunkr.length()){irb=stoi(chunkr);irh=irb;}
            else {irb=stoi(chunkr.substr(0,i));irh=stoi(chunkr.substr(i+1));}
         }
 cpustarttime=clock(); 
 ss="";for(j=0;j<b;j++)ss=ss+tr[j];
 f.clear();f.push_back("0");f.push_back(ss);f.push_back("0");
 for(il=ilb;il<=ilh;il++)for(ir=irb;ir<=irh;ir++)if(gcd(b,ir)==1)
     {f[0][0]=tr[il];f[2][0]=tr[ir];
//construction of the familles to be explored from the first and last digits
      handelf(f);
     }

 cputime = clock()-cpustarttime; cputime=cputime/1000000;
 result<<"\nFinally, in "<<cputime<<" time units, we explored "
       <<nt<<" families of numbers for base "<<b;
 if(chunkl!="")result<<" and the initial digit "<<chunkl;
 if(chunkr!="")result<<" and the terminal digit "<<chunkr;
 result<<"\nthere remains "<<nprime<<" primes to incorporate in the kernel, and "
       <<nlong<<" families to analyse\n";
} // end main
