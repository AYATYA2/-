#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
//#include <numbers> 
#include <iomanip>
int main() {
 double a,b,d;
 cin >>a>>b>>d;
 double p=M_PI;
 double r=d*p/180.0;
 cout <<fixed <<setprecision(6);
 cout<< a*cos(r)-b*sin(r)<<" " <<b*cos(r)+a*sin(r) <<endl;
}
  
