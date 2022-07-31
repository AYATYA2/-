#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
int main() {
  int n;
  cin >>n;
  vector <int> a;
  long long count=0;
  int e=0;
  for(int i=0;i<n;i++){
    int t;
    cin >>t;
    //t==aj
    if(t==i+1){
      //aj==j
      if(e>=1){
        count+=(long long)e;
        //cout <<"eeeeee"<<endl;
      }
      e++;
    }else if(t<=a.size()){
      //t=i+1
      if(a.at(t-1)==i+1){
        count++;
        //cout <<"dddddd"<<endl;
      }
    }else{

    }
    a.push_back(t);
  } 
  cout<<count<<endl;
}