#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#include <iomanip>
int main() {
 int n;
 cin>>n;
  long long int a[n][n];
  long long int max=0;
  for(int i=0;i<n;i++){
    long long int t;
    cin >>t;
    for(int j=n-1;j>=0;j--){
      a[i][j]=t%10;
      if(t<10){
        break;
      }
      t/=10;
    }
  }
  
  for(int m=0;m<n;m++){
    for(int l=0;l<n;l++){
      for(int i=-1;i<=1;i++){
        for(int j=-1;j<=1;j++){
          if(i!=0&&j!=0){
             long long int sum=0;
             for(int k=0;k<n;k++){
                sum*=10;
                sum+=a[(i*k+m+n)%n][(j*k+l+n)%n];
             }
          if(sum>max){
            max=sum;
          }
    } 
  }
    }
    }
  }
    cout<<max<<endl;
  }
  
