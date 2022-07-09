#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
int main() {
  string s,t;
  cin >>s>>t;
  int n=s.size(),m=t.size();
  int j=0;
  int i=0;
  if(n>m){
      cout <<"No"<<endl;
      return 0;
  }
  while (i<n&&j<m)
  {
    if(s.at(i)!=t.at(j)){
      cout <<"No"<<endl;
      return 0;
    }
    if(j<i){
      cout <<"No"<<endl;
      return 0;
    }
    if(i<n-1&&j<m-1){
      if(s.at(i)==s.at(i+1)&&t.at(j)==t.at(j+1)){
        while (s.at(i)==s.at(i+1))
        {
          i++;
          if(i>=n-1){
            break;
          }
        }
        while (t.at(j)==t.at(j+1))
        {
          j++;
          if(j>=m-1){
            break;
          }
        }
      }else if(s.at(i)!=s.at(i+1)&&t.at(j)!=t.at(j+1)){

      }else{
        cout <<"No"<<endl;
        return 0;
      }
    }
    i++;
    j++;
  }
  if(i>=n&&j>=m){
    cout <<"Yes"<<endl;
    return 0;
  }
  cout <<"No"<<endl;
//ランレングス圧縮を実際に行う
}