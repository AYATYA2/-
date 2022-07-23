#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
int main() {
  int n;
  cin >>n;
  multiset<string> s;//map使えば行けたと思う
  for(int i=0;i<n;i++){
    string tmp;
    cin >> tmp;
    if(s.size()==0){
      s.insert(tmp);
      cout <<tmp<<endl;
    }else{
      if(s.count(tmp)==0){
        cout <<tmp<<endl;
      }else{
        cout << tmp<<"("<<s.count(tmp)<<")"<<endl;
      }
      s.insert(tmp);
    }
    
  }
}