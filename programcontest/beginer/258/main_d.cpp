#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>

int main() {
   int n,x;
   cin >>n>>x;
  int a[n],b[n];
  for(int i=0;i<n;i++){
    cin>>a[i]>>b[i];
  }
  long long int min=a[0]+b[0]*x;
  for(int i=1;i<n;i++){
    a[i]+=a[i-1]+b[i-1];
    if(min>a[i]+b[i]*(x-i)){
      min=a[i]+b[i]*(x-i);
    }
  }
  cout <<min <<endl;
}
   
 
