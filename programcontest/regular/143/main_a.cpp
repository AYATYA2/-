#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>

int main() {
   long long int a,b,c;
   cin >>a>>b>>c;
   long long int ans=0,min=a,mid=a,max=a;
   if(c<b){
      if(max<b){
         max=b;
         if(c<min){
            min=c;
         }else{
            mid=c;
         }
      }else{
         mid=b;
         min=c;
      }
   }else{
      if(max<c){
         max=c;
         if(b<min){
            min=b;
         }else{
            mid=b;
         }
      }else{
         mid=c;
         min=b;
      }
   }
   
   max=max-(mid-min); 
   ans+=mid-min;
   mid=min;
   if(max>min+mid){
      cout <<-1 <<endl; 
   }else{
      long long int d=(max-min)/2;
      if(d>min){
         cout <<-1 <<endl;
      }else{
         max-=2*d;
         min-=d;
         mid-=d;
         ans+=(2*d);
      }
      cout <<ans+max<<endl;
   }
      }