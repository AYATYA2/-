#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#include <iomanip>
int main() {
 int n;
 cin >> n;
 int a[n];
 int p=0;
 for(int i=0;i<n;i++){  
   cin >> a[i];
 }
 for(int i=n-1;i>=0;i--){
  a[i-1]+=a[i];
 }
 for(int i=0;i<n;i++){
 if(a[i]>=4){
  p++;
 }
 }
 cout <<p<<endl;
}

