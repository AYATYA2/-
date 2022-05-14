#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>

int main() {
 int n;
  cin >>n;
  map<string,int> originals;
  int max=0;
  int maxindex=0;
  for(int i=0;i<n;i++){
    string tmp;
    int t;
    cin >> tmp >> t;
    if(originals[tmp]==0){
      originals[tmp]=t;
      if(t>max){
        max=t;
        maxindex=i;
      }
    }
  }
  cout << maxindex +1 <<endl;
}
