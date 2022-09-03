#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
int main() {
  int n,m;
  cin>>n,m;
  vector<int> a;
  for(int i=0;i<n;i++){
    int t;
    cin>>t;
    a.push_back(t);
  }
  long long max=0;
  long long t=0;
  long long tmp=0;
  for(int i=n-m;i<n;i++){
    t+=(long long)a.at(i);
    max+=(long long)(a.at(i)*(i-n+m+1));
  }
  tmp=max;
  for(int i=n-m;i>0;i--){
    t+=a.at(i-1);
    t-=a.at(i+m-1);
    tmp+=t;
    tmp-=a.at(i+m-1)*m;
    if(tmp>max){
      max=tmp;
    }
  }
  cout<<max;
  }