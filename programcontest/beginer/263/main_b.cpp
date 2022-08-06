#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
//#include <numbers> 
#include <iomanip>
int main() {
 int n;
 cin >>n;
 int p[n-1];
 for(int i=0;i<n-1;i++){
    int s;
    cin >>s;
    p[i]=s;
 }   
 int count=0;
 int k=n;
 while (k!=1)
 {
    k=p[k-2];
    count++;
 }
 cout << count<<endl;
}
  
