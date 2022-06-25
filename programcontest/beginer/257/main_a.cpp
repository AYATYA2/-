
#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>

int main() {
   int n,x;
   cin >>n>>x;
   char a[n*26];
   for(int i=0;i<26;i++){
      for(int j=0;j<n;j++){
         a[j+n*i]=(char)(65+i);
      }
   }
   cout << a[x-1] <<endl;
}
