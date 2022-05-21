#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
int main() {
   int n;
   cin >>n;
   vector <int> a;
   //first要素の大きさ second 元のインデックス
   int count[200000]={};
   for(int i=0;i<n;i++){
     int t; 
      cin >>t;
      a.push_back(t);
      count[t-1]++;
   }
   sort(a.begin(),a.end());
 
   int c=0;
   for(int i=0;i<n-2;i++){
      for(int j=i+count[a.at(i)-1];j<n-1;j++){
         for(int k=j+count[a.at(j)-1];k<n;k++){
           c+=count[a.[j]-1]; 
         }
      }
      count[a.at(i)-1]--;
   }
   cout <<c<<endl;
}
