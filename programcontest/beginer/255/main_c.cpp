#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
int main() {
  long long int x,a,d,n;
  cin >>x>>a>>d>>n;
  if(d==0){
    cout <<abs(x-a)<<endl;
  }else{
      long long int k=(x-a)/d;
    if(k<0){
      cout << abs(x-a) <<endl;
    }else{
    if(k<n-1){
      if(abs(x-(a+d*(k)))>abs(x-(a+d*(k+1)))){
        cout <<abs(x-(a+d*(k+1)))<<endl;
      }else{
        cout <<abs(x-(a+d*(k)))<<endl;
      }
    }else{
      cout << abs(x-(a+d*(n-1)))<<endl;
    }
  }

  }
}
