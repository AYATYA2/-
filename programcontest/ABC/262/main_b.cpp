#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
//#include <numbers> 
#include <iomanip>
int main() {
 int n,m;
 cin >>n>>m;
 int a[n][n]; 
 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
            a[i][j]=0;
    }   
 }
 for(int i=0;i<m;i++){
    int u,v;
    cin >>u>>v;
    a[u-1][v-1]=1;
    a[v-1][u-1]=1;
 }
 int count=0;
 for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
            if(a[i][j]==1){
                for(int k=j+1;k<n;k++){
                    if(a[j][k]==1&&a[i][k]==1){
                        count++;
                    }
                }
            }
    }   
 }
 cout <<count<<endl;
}
  
