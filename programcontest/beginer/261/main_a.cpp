
#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>

int main() {
   int l1,r1,l2,r2;
   cin >>l1>>r1>>l2>>r2;
   int a[101];
   
   for(int i=0;i<=100;i++){
      a[i]=0;
      if(i>=l1&&i<=r1){
            a[i]++;
      }
      if(i>=l2&&i<=r2){
            a[i]++;
      }
   }
   int c=0;
   for(int i=0;i<=100;i++){
      if(a[i]>=2){
           c++; 
      }
    }
    if(c>0){
      c--;
    }
    cout <<c<<endl;
   }
