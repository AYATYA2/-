#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
int main() {
  string s;
  cin >>s;
  string a="atcoder";
  int ind[7];
  for(int i=0;i<7;i++){
    for(int j=0;j<7;j++){
      if(s.at(j)==a.at(i)){
        ind[i]=j;
      }
    }
  }
  int count=0;
  for(int i=0;i<7;i++){
    while (ind[i]!=i)
    {
      /* code */
      swap(s.at(ind[i]),s.at(ind[i]-1));
      count++;
      ind[i]--;
      for(int j=0;j<7;j++){
        if(ind[j]==ind[i]&&i!=j){
          ind[j]++;
        }
      }
    }
  }
  cout<<count<<endl;
}