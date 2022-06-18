#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
int main() {
  int h[3],w[3];
  for(int i=0;i<3;i++){
    cin >>h[i];
  }
  for(int i=0;i<3;i++){
    cin >>w[i];
  }
  int p[3][3];
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      p[i][j]=1;
    }
  }
  int count=0;
  for(int i=1;i<=h[0];i++){
    for(int j=1;j<=h[0];j++){
      for(int k=1;k<=h[1];k++){
        for(int l=1;l<=h[1];l++){
          p[0][0]=i;
          p[0][1]=j;
          p[1][0]=k;
          p[1][1]=l;
          p[0][2]=h[0]-p[0][0]-p[0][1];
          p[1][2]=h[1]-p[1][0]-p[1][1];
          p[2][0]=w[0]-p[1][0]-p[0][0];
          p[2][1]=w[1]-p[0][1]-p[1][1];
          p[2][2]=h[2]-p[2][0]-p[2][1];
          if(p[0][2]>0&&p[1][2]>0&&p[2][0]>0&&p[2][1]>0&&p[2][2]>0
          &&p[0][2]+p[1][2]+p[2][2]==w[2]){
            count++;
            /*for(int i=0;i<3;i++){
              for(int j=0;j<3;j++){
                  cout <<p[i][j];
                }
                cout <<endl;
              }*/
          }
          
        }
      }
    }
  }
  cout <<count<<endl;
}
