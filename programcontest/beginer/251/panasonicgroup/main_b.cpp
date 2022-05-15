#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
int main() {
   int n,w;
   cin >>n>>w;
  
  int a[n];
  for (int i=0;i<n;i++){
    cin >> a[i];
  }
  bool b[w];
  for (int i=0;i<w;i++){
    b[i]=false;
  }
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      for(int k=j+1;k<n;k++){
        //cout<<a[i]+a[j]+a[k];
        if(a[i]+a[j]+a[k]-1<w){
            b[a[i]+a[j]+a[k]-1]=true;
        } 
      }
      if(a[i]+a[j]-1<w){
          b[a[i]+a[j]-1]=true;
      }
      
      //cout<<a[i]+a[j];
    }
      
     //cout<<a[i];
     if(a[i]-1<w)
      b[a[i]-1]=true;
  }
  int count=0;
  for(int i=0;i<w;i++){
    if(b[i]){
      count++;
    }
  }
  cout <<count<<endl;
}
