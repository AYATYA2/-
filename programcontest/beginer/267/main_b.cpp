#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
//#include <numbers> 
#include <iomanip>
int main() {
  int a[10];
  int l[7];
  int t;
  cin>>t;
  for(int i=9;i>=0;i--){
    a[i]=t%10;
    t/=10;
  }
  l[0]=a[6];
  l[1]=a[3];
  l[2]=a[1]+a[7];
  l[3]=a[0]+a[4];
  l[4]=a[2]+a[8];
  l[5]=a[5];
  l[6]=a[9];
  
  if(a[0]==1){
    cout<<"No";
    return 0;
  }
  int frag=0;
  for(int i=1;i<7;i++){
    if(l[i]==0&&l[i-1]==1){
      frag++;
    }
    if(frag==1&&l[i]==1){
      cout<<"Yes";
      return 0;
    }
  }
  cout<<"No";
}
  
