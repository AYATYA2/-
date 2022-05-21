#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
int main() {
  int n;
  cin >>n;
  
  int t=0;
  vector<string> s;
  for(int i=0;i<n;i++ ){
    string tmp;
    cin>> tmp;
    s.push_back(tmp);
  }
  int min=10000000;
  for(int i=0;i<10;i++){
    int count[10]={};
    for(int t=0;t<10;t++){
      for(int j=0;j<n;j++){
        if(s.at(j).at(t)==(char)(48+i)){
          count[t]++;
        }
       }
    }
    int x=n;
    int t=0;
    while (x>0){
      if(count[t%10]>0){
        count[t%10]--;
        x--;
      }
      t++;
    }
    if(t<min){
      min=t;
    }
  }
   cout << min-1<<endl;
}
