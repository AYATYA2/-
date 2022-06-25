#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>

int main() {
   int n;
   cin >>n;
  vector <tuple<int,int,int>> p;
  for(int i=0;i<n;i++){
    int x,y,a;
    cin >>x>>y>>a;
    p.push_back(make_tuple(x,y,a));
  }
  int d[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      d[i][j]=abs(p.at(i).get(0)-p.at(j).get(0))+abs(p.at(i).get(1)-p.at(j).get(1));
    }
  }
  int s=0;
  int v=0;
  while (v!=)
  {
    /* code */
    int j=0;
    for(int i=1;i<n;i++){
      if(d[j][i]<=p.at(j).get(2)*s){
          j=
      }
    } 
  }
  //幅優先探索
}
   
 
