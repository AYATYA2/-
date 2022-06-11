#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#include <iomanip>
int main() {
 int n,k;
 cin >> n>>k;
 int a[k];
 for(int i=0;i<k;i++){  
   //あかりを持っている
   cin >> a[i];
 }
 int p[n][2];
 for(int i=0;i<n;i++){
   int x,y;
   cin >>x>>y;
   //それぞれの位置
   p[i][0]=x;
   p[i][1]=y;
 }
 long long int max=0;
 for(int i=0;i<n;i++){  
  vector<long long int>d;
   for(int j=0;j<k;j++){
     //距離の2条をpush
     d.push_back((long long int)(p[a[j]-1][0]-p[i][0])*(long long int)(p[a[j]-1][0]-p[i][0])+(long long int)(p[a[j]-1][1]-p[i][1])*(long long int)(p[a[j]-1][1]-p[i][1]));
   }

   if((long long int)*min_element(d.begin(),d.end())>max){
     max=(long long int)*min_element(d.begin(),d.end());
   }
 }
 cout<<fixed<< setprecision(6) <<sqrtl((double)max)<<endl;
 }

