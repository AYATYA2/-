#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
int main() {
  int q;
  cin >>q;
  vector<int> s;
  for(int i=0;i<q;i++){
    int query;
    cin >> query;
    if(query==1){
      int x;
      cin >>x;
      s.push_back(x);
    }else if(query==2){
      int x,c;
      cin >>x>>c;
      for(auto j=s.begin();j!=s.end();){
        if(*j==x){
          j=s.erase(j);
          c-=1;
        }else{
            j++;
        }
        if(c==0){
          break;
        } 
      }
    }else{
      sort(s.begin(),s.end());
      cout <<s.back() -s.front()<< endl;
    }
  }
}
