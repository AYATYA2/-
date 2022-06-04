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
  int tmp[n];
  for(int i=0;i<n;i++){
    cin >>a[i];
    tmp[i]=a[i];
  }
  sort(tmp,tmp+n);
  if(!equal(tmp,tmp+n,a,a+n))
  {
    for(int i=0;i<k;i++){
      vector <int> s;
      for(int j=0;j<n/k;j++){
        s.push_back(a[i+j*k]);  
      }
      if(i<n%k){
        s.push_back(a[i+n/k*k]);    
      }
      sort(s.begin(),s.end());
      for(int j=s.size()-1;j>=0;j--){
          a[i+j*k]= s.at(j); 
      }
    }

  }
  if(equal(tmp,tmp+n,a,a+n)){
    cout <<"Yes"<<endl;
  }else{
    cout <<"No"<<endl;
  }
}
