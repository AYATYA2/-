#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
int main() {
 int n;
 cin >> n;
 int a[n][n+1];
 for(int i=0;i<n;i++){  
   
   for(int j=0;j<=i;j++){
     if(j==0||j==i){
        a[i][j]=1;        
     }else{
       a[i][j]=a[i-1][j-1]+a[i-1][j];
     }
     cout << a[i][j] <<" ";
   }
   cout <<endl;
 }
 }

