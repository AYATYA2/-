#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
int main() {
  int n,q;
  cin >>n>>q;
  string s;
  cin >>s;
  int b=0;
  for(int i=0;i<q;i++){
    int t,x;
    cin >>t>>x;
    if(t==1){
      b=(b-x+s.size())%s.size();
    }else{
      cout << s.at((b+x-1)%s.size())<<endl;
    }
  }
  }
