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
 char e[n][n];
 for(int i=0;i<n;i++){
    string s;
    cin >>s;
    for(int j=0;j<n;j++){
        e[i][j]=s.at(j);
    }
 }   
 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i!=j){
            if(e[i][j]=='W'&&e[j][i]!='L'){
                cout <<"incorrect"<<endl;
                return 0;
            }
            if(e[i][j]=='L'&&e[j][i]!='W'){
                cout <<"incorrect"<<endl;
                return 0;
            }
            if(e[i][j]=='D'&&e[i][j]!='D'){
                cout <<"incorrect"<<endl;
                return 0;
            }
        }
    }
 }
 cout <<   "correct" <<endl;

}
  
