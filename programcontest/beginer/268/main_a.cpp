
#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>

int main() {
   set<int> a;
   for(int i=0;i<5;i++){
      int t;
      cin>>t;
      a.insert(t);
   }   
   cout<<a.size();
}
