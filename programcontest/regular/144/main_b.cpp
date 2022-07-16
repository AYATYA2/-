#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#include <iomanip>

int main() {
 long long n,a,b; 
 cin >> n>>a>>b;
 vector<long long> v(n);
 for(int i=0;i<n;i++){
  cin>>v.at(i);
 }
 if(a==b){
  cout <<*max_element(v.begin(),v.end())-b <<endl;
  return 0;
 }
 while (*max_element(v.begin(),v.end())-*min_element(v.begin(),v.end())>b-a){
  /* code */
  *max_element(v.begin(),v.end())-=b;
  *min_element(v.begin(),v.end())+=a;
 }
 cout<<*min_element(v.begin(),v.end())<<endl;
}

