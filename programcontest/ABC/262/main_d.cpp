#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>


int main() {
  int n;
  cin >>n;
  vector<vector <long long>> a;
  
  for(int i=0;i<n;i++){
    long long t;
    cin >>t;
    //t=ai
    for(int j=0;j<n;j++){
        a.at(j).push_back(t%(j+1));
    }
  }
  //a.at(j) ajとその余り
  int i=0;
  for(int i=1;i<=n;i++){
    vector <long long> t=a.at(i-1);
    //動的計画法だ～
  }
}