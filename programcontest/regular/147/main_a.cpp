#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>

int main() {
  int n;
  cin >> n;
  vector<int> a;
  for(int i=0;i<n;i++){
   int t;
   cin>>t;
   a.push_back(t);
  } 
  sort(a.begin(),a.end(),greater<int>());
  long long count=0;
  while (a.size()>1){
   /* code */
    if(a.at(a.size()-1)==1){
      count+=a.size()-1;
      break;
    }
    int t=a.at(0)%a.at(a.size()-1);
    a.erase(a.begin());
    if(t!=0){
      a.push_back(t);
    }
    count++;
  }
  cout<<count;
  //アルゴリズムはあってるのにTLE？？？
}