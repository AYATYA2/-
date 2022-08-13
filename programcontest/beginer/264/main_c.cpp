#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
int main() {
  int h1,w1,h2,w2;
  cin >>h1,w1;
  int a[h1][w1];
  for(int i=0;i<h1;i++){
    for(int j=0;j<w1;j++){
      cin >> a[i][j];
    }
  }
  cin >>h2,w2;
  int b[h2][w2];
  for(int i=0;i<h2;i++){
    for(int j=0;j<w2;j++){
      cin >> b[i][j];
    }
  }
  
  for(int i=0;i<h2;i++){
    for(int j=0;j<w2;j++){
     if(a[i][j]!=b[i][j]){

     }
    }
  }
    //ビット全探索　実装方法がわからなかった
    /*
     for(int i = 0; i < (1<<h1); i++){
    for(int j = 0; j < (1<<w1); j++){
      
      vector<int> hvec, wvec;
      for(int k = 1; k <= h1; k++) if((i & (1<<(k-1))) == 0) hvec.push_back(k);
      for(int k = 1; k <= w1; k++) if((j & (1<<(k-1))) == 0) wvec.push_back(k);
      if(hvec.size() != h2 || wvec.size() != w2) continue;
     
      bool match = true;
      for(int k = 1; k <= h2; k++){
        for(int l = 1; l <= w2; l++){
          if(a[hvec[k-1]][wvec[l-1]] != b[k][l]){
            match = false;
            break;
          }
        }
      }
      if(match){
        cout << "Yes" << endl;
        return 0;
      }
       
    }
  }
  cout << "No" << endl;
    */
}