#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>

int main() {
   int r,c;
   cin >>r>>c;
   int a[2][2];
   for(int i=0;i<4;i++){
      cin  >> a[i/2][i%2];
   }
   cout << a[r-1][c-1] <<endl;
}
