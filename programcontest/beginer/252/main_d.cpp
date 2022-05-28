#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
int main() {
   int n;
   cin >>n;
   vector <int> a;
   //first要素の大きさ second 元のインデックス
   int count[200001]={};
   for(int i=0;i<n;i++){
     int t; 
      cin >>t;
      a.push_back(t);
      count[t]++;
   }
   
   //解説
   //あるインデックスをjとしてそのインデックスの値より
   //小さい値がいくつ含まれているか
   //という情報からわかる。
  
   int c=0;
/*   for(int i=0;i<n-2;i++){
      for(int j=i+count[a.at(i)-1];j<n-1;j++){
         for(int k=j+count[a.at(j)-1];k<n;k++){
           c+=count[a.[j]-1]; 
         }
      }
      count[a.at(i)-1]--;
   }
 */
 for(int i=0;i<200000;i++){
      count[i+1]+=count[i];
   }
   for(int i=0;i<n;i++){
    c+=count[a.at(i)-1]*(n-count[a.at(i)]);
   }
  cout <<c<<endl;

}
