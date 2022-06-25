#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#include <iomanip>
int main() {
 int n,k,q;
 cin >> n>>k>>q;
 int a[k];
 int p=0;
 for(int i=0;i<k;i++){  
   cin >> a[i];
 }
 for(int i=0;i<q;i++){
  int l;
  cin>>l;
  if(a[l-1]==n){
    //一番右なんら何もしない
  }else{
    if(l==k){
      a[l-1]++;
    }else if(a[l]>a[l-1]+1){
      a[l-1]++;
    }else{

    }
 }
 
 }
 for(int i=0;i<k;i++){  
   cout << a[i] <<" ";
 }cout <<endl;
}

