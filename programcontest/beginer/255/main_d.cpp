#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>

int main() {
   int n,q;
   cin >>n>>q;
   multimap<long long int,int> a; 
   for(int i=0;i<n;i++){
     long long int t, 
     cin >> t;
     a[t]++;
   }
   
   for(int i=0;i<q;i++){
     long  long int x,ans=0;
     cin >>x;
     for(int j=a.begin();j<n;j+=a[j].count){
       ans+= abs(x-a[j])*a[j];
     }
     cout <<ans <<endl;
   }
 }
