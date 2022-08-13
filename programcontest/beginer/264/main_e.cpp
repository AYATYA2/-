#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
int main() {
  int n,m,e,q;
  cin >>n>>m>>e;
  vector<pair<int ,int>> uv;
  vector<int> p;
  for(int i=0;i<e;i++){
    int u,v;
    cin>>u>>v;
    uv.push_back(make_pair(u,v));//発電所を区別しないmin(u, n), min(v, n)
  }
  cin>>q;
  for(int i=0;i<q;i++){
    int t;
    cin>>t;
    uv.at(t-1).second=uv.at(t-1).first;
  }
  for(int i=0;i<e;i++){

  }
  //解説呼んでもわからんぞやば
  //重み付けUnion-Find問題
}