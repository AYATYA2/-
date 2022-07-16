#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>

int main() {
  int n;
  cin >> n;
  cout << 2*n <<endl;
  vector<char> s; 
  int i=n;
  while (i>0){
   /* code */
   if(i<4){
      s.insert(s.begin(),i+'0');
      
   }else{
      s.insert(s.begin(),'4');
   }
   i-=4;
  }
  for(int j=0;j<s.size();j++){
   cout << s.at(j); 
  }
   cout<< endl;
}