#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
int main() {
  int n;
  cin >>n;
  double a[100];
  a[0]=3.5;
  for(int i=1;i<n;i++){
    for(int j=1;j<=6;j++){
      if(j<a[i-1]){
        a[i]+=a[i-1]/6.0;
      }else{
        a[i]+=(double)j/6.0;
      }
    }
    
  }//アルゴリズムはあってます　なんかわからんところで間違ってる
  //cout << fixed << setprecision(10)<<a[n-1]<< endl;
  printf("%.10f\n",a[n-1]);
}