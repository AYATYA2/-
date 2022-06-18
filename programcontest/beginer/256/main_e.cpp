#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>

int main() {
   int n,q;
   cin >>n>>q;
   long long int a[n]; 
   for(int i=0;i<n;i++){
     cin >> a[i];
   }
   
   for(int i=0;i<q;i++){
     long  long int x,ans=0;
     cin >>x;
     for(int j=0;j<n;j++){
       ans+= abs(x-a[j]);
     }
     cout <<ans <<endl;
   }
 }
