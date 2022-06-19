#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#include <iomanip>
int main() {
 int n;
 cin >> n;
 int p[n][n];
 for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
    p[i][j]=n*i+(j+1);
  }
 }

 for(int i=1;i<n-1;i++){
  for(int j=1;j<n-1;j++){
    int a=0,b=0;
    for(int k=-1;k<=1;k++){
      for(int l=-1;l<=1;l++){
        if(k==0&&l==0){
          continue;
        }
        if(p[i][j]>p[i+k][j+l]){
          b++;
        }else{
          a++;
        }
      }
    }
    if(a==b){
      int tmp=p[i][j];
      p[i][j]=p[i][j+1];
      p[i][j+1]=tmp;
    }
  }
 }
 for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
    cout << p[i][j] <<" ";
  }
  cout <<endl;
 }
}

