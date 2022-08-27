#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
//#include <numbers> 
#include <iomanip>
int main() {
  long long n;
  cin >>n;
  if(n>=0){
      cout << n%998244353;

  }else{
    if(n%998244353==0){
      cout<<0;
    }else{
      cout << -((n/998244353-1)*998244353-n);
    }

  }
  
}
  
