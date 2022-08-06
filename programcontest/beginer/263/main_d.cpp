#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>

int main() {
  int n,l,r;
  cin >>n>>l>>r;
  vector<double> a;
  vector<double> av1,av2;
  for(int i=0;i<n;i++){
    int t;
    cin >>t;
    a.push_back((double)t);
  }
  //時間切れ　動的計画法でいけるやつだ　要素をLに入れ替えた場合とRに入れ替えた場合と入れ替えなかった場合で場合分けしていって入力も合わせてo(n)*4で行けそう
  //と思ったけどもうちょっと面倒だった
  //f(0)~f(N),g(0)~g(N)を列挙してmin(f(i)+g(N-i))を求める

  }
  

