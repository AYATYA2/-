#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>

int main() {
  int n,x;
  cin >>n>>x;
  cout <<x<<" ";
  if(n-x>x){
    //cout << "n-x>x" << n-x <<endl;
    int i;
    for(i=1;i<x;i++){
      cout << x+i <<" " << x-i <<" ";
    }
    for(i=x;i<=n-x;i++){
      cout << x+i<<" ";
    }
    cout <<endl;
  }else{
    
    //cout << "n-x<x"<< x <<endl;
    int i;
    for(i=1;i<=n-x;i++){
      cout << x-i <<" " << x+i <<" ";
    }
    for(i=n-x+1;i<x;i++){
      cout << x-i<<" ";
    }
    cout <<endl;
  }
}
