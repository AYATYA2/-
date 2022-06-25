#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
int main() {
  int n;
  cin >>n;
  string s;
  cin >>s;
  vector <pair<int,char>> w;
  for(int i=0;i<n;i++){
    int t;
    cin >>t;
    w.push_back(make_pair(t,s.at(i)));
  }
  sort(w.begin(),w.end());
 /* for(int i=0;i<n;i++){
    cout << w.at(i).first <<" "<<w.at(i).second<<endl;
  }*/
  int max=0;
 
  for(int i=0;i<=n;i++){
   string x=string(i,'0')+string(n-i,'1');
   int count=0;
   while(i>0&&i<n&&w.at(i-1).first==w.at(i).first){
    x.at(i)='1';
    i++;
   }
   for(int j=0;j<n;j++){
      if(w.at(j).second==x.at(j)){
        count++; 
      }
   }
   if(count>max)max=count; 
  }
  cout <<max<<endl;
}
