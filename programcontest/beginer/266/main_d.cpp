#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
int main() {
  int n;
  cin >>n;
  //DP[x][t]=max(DP[x−1][t−1],DP[x][t−1],DP[x+1][t−1])
  //+時刻 t に座標 x にいることで捕まえることができるすぬけ君の大きさ
 cout<<count<<endl;
}