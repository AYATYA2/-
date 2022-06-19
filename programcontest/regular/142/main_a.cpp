#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>

int main() {
   long long int n,k;
   cin >>n>>k;
   long long int x=k;
   long long int count=0;
   long long int rev=0;
      /* code */
   long long int tmp=x;
   while (tmp>0){
     rev*=10;
     rev+=tmp%10;
     tmp/=10;
   }
   //cout <<rev<<" ";
   tmp=rev;
   long long int rev2=0;
   while (tmp>0){
     rev2*=10;
     rev2+=tmp%10;
     tmp/=10;
   }
   //cout <<rev2<<endl;
   long long int cmp,ncmp;
   if(rev2<rev){
      cmp=rev2;
      ncmp=rev;
   }else{
      cmp=rev;
      ncmp=rev2;
   }
   if(cmp<x){
   }else if(cmp==x){
      while (x<=n)
      {
         x*=10;
         count++;
      }
      if(ncmp!=cmp){
      while (ncmp<=n)
      {
         ncmp*=10;
         count++;
      }

      }
   }else{
      while (x<=n)
      {
         x*=10;
         count++;
      }
      while (cmp<=n)
      {
         cmp*=10;
         count++;
      }
      while (ncmp<=n)
      {
         ncmp*=10;
         count++;
      }
   }
   cout <<count <<endl;
}