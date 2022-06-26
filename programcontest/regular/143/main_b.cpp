#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#include <iomanip>
long long int f(long long int x){
  if(x==1){
    return 1;
  }else{
    long long int c=(x-1)+x;
    long long int n=1,t=1,s=1;
    for(long long int i=c;i>x-1;i--){
      n*=i; //2n-1!/n-1!
    }
    for(long long int i=1;i<=x-1;i++){
      t*=i; //n-1!
    }
    return (n*(n-1)/2*t*f(x-1))%998244353; 
  }
}
int main() {
 int n;
 cin >> n;
 cout << f(n)<<endl;
}

