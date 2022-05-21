#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
int main() {
   int n,k;
   cin >>n>>k;
   int a[n];
   bool b[n];
   int max=0;
  for(int i=0;i<n;i++){
    cin >>a[i];
    b[i]=true;
    if(a[i]>max){
      max=a[i];
    }
  }

  for(int i=0;i<k;i++){
    int t;
    cin >>t;
    b[t-1]=false;
  }

  for(int i=0;i<n;i++){
    if(a[i]==max&&!b[i]){
      cout << "Yes"<<endl;
      return 0;
    }
  }
  cout << "No"<<endl;
  return 0;
}
