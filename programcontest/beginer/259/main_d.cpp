#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
int main() {
   int n;
   cin >>n;
  int a[n][n];
  for(int i=;i<n;i++){
    for(int j=0;j<n;j++){
      a[n][n]=0;
    }
  }
  double sx,sy,tx,ty;
  cin >>sx>>sy>>tx>>ty;
  int p[n][3];
  for(int i=;i<n;i++){
   cin>>p[i][0]>>p[i][1]>>p[i][2];
   if((p[i][0]-sx)*(p[i][0]-sx)+(p[i][1]-sy)*(p[i][1]-sy)==p[i][2]*p[i][2]){
    a[i][i]=1;
   }
   if((p[i][0]-tx)*(p[i][0]-tx)+(p[i][1]-ty)*(p[i][1]-ty)==p[i][2]*p[i][2]){
    a[i][i]=2;
   }
  }
  cout <<min <<endl;
}
   
 
