#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
int main() {
  int n;
  cin>>n;
  vector<int> p;
  for(int i=0;i<n;i++){
    int t;
    cin>>t;
    p.push_back(t);
  }
  int x[n];//index/n度回転させたときの不満度
  for(int i=0;i<n;i++){
    x[i]=0;
  }
  vector<vector<int>> d;
  for(int i=0;i<n;i++){
   //x[(n+i-p.at(i))%n]++; 
    int k=(n+i-p.at(i))%n;
    if(k>n/2){
      k=n-k;
    }
    x[0]+=k;
  }
  cout<<max;
  //いもす法
  }