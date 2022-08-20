#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>

int main() {
  int n;
  cin >> n;
   int a[n+1];
   int k[n];
   int ind1=n,ind2=n,ind3=n;
   for(int i=0;i<n+1;i++){
      a[i]=0;
      if(i==n){
         a[i]=0;
      }
   }
   for(int i=0;i<n;i++){
      int t;
      cin>>t;
      a[i]=t;
      if(a[ind1]<a[i]){
         ind3=ind2;
         ind2=ind1;
         ind1=i;
         }else{
       if(a[ind2]<a[i]){
         ind3=ind2;
         ind2=i;
       }else{
         if(a[ind3]<a[i]){
            ind3=i;
         }
       }  
      }
      k[i]=1;
      while(t/10!=0){
         t/=10;
         k[i]++;
      } 
   }
   int m[3]={a[ind1],a[ind2],a[ind3]};
   int mink=min(k[ind1],min(k[ind2],k[ind3]));
   for(int i=0;i<3;i++){
      while (k[i]>mink){
         /* code */
         m[i]/=10;
         k[i]--;
      }
   }
   if(m[0]<m[1]){
      swap(m[0],m[1]);
      int t=ind1;
      ind1=ind2;
      ind2=t;
   }
   if(m[1]<m[2]){
      swap(m[2],m[1]);
      int t=ind3;
      ind3=ind2;
      ind2=t;
   }
   if(m[0]<m[1]){
      swap(m[0],m[1]);
      int t=ind1;
      ind1=ind2;
      ind2=t;
   }
   int ans[3]={a[ind1],a[ind2],a[ind3]};
   for(int i=0;i<3;i++){
   cout<<ans[i];
   }
   cout<<endl;
}