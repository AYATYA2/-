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
  int x[n];//index/n度回転させたときの点数
  for(int i=0;i<n;i++){
    x[i]=0;
  }
  int max=0;
  for(int i=0;i<n;i++){
    x[(n+1+i-p.at(i))%n]++;
    x[(n+i-p.at(i))%n]++;
    x[(n-1+i-p.at(i))%n]++;
    if(max<x[(n-1+i-p.at(i))%n]){
      max=x[(n-1+i-p.at(i))%n];
    }
    if(max<x[(n+i-p.at(i))%n]){
      max=x[(n+i-p.at(i))%n];
    }
    if(max<x[(n+1+i-p.at(i))%n]){
      max=x[(n+1+i-p.at(i))%n];
    }
  }
  cout<<max;
  }