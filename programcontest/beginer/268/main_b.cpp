#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
//#include <numbers> 
#include <iomanip>
int main() {
  string s,t;
  cin>>s>>t;
  if(s.size()>t.size()){
      cout<<"No";
      return 0;
    
  }
  for(int i=0;i<s.size();i++){
    if(s.at(i)!=t.at(i)){
      cout<<"No";
      return 0;
    }
  }
  cout<<"Yes";
  
}
  
