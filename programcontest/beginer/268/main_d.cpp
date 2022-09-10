#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
int main() {
  int n,m;
  cin>>n>>m;
  vector<string>s,t;
  int l=0;
  for(int i=0;i<n;i++){
    string tmp;
    cin>>tmp;
    s.push_back(tmp);
    l+=tmp.size();
  }
  if(l+n-1>16||l+n-1<3){
    cout<<"-1";
    return 0;
  }
  for(int i=0;i<m;i++){
    string tmp;
    cin>>tmp;
    t.push_back(tmp);
  }
  int x=16-l+n-1; 
  vector<vector<int>> p(x+1,vector<int>);
  for(int j=0;j<=x;j++){
    for(int i=0;i<j+n-1;i++){
    if(i<j){
      p.at(j).push_back(1);
    }else{
      p.at(j).push_back(-1);
    }
   }
  }
  vector<vector<int>> a(x+1,vector<int>);
  for(int j=0;j<=x;j++){
    
    do{
      for(int i=0;i<p.at(j).size();i++){
        if(p.at(j).at(i)==-1){
          a.at(j).at(i)=0;
        }else{
          a.at(j).at(i)=0;
          while(p.at(j).at(i)==1){
            a.at(j).at(i)++;
            i++;
          }
          i--;
        }
      }
    } while (next_permutation(p.at(j).begin(), p.at(j).end()));
  }
  do{
    string test="";
    for(int i=0;i<s.size();i++){
        for(int j=0;j<=x;j++){
          for(int k=0;k<a.at(j).size();k++){
              test+=s.at(i);
              if(i!=s.size()-1){
                for(int d=0;d<a.at(j).at(k)+1;d++)
                {
                  /* code */
                  test+="_";
               }
              }
              for(int i=0;i<m;i++){
                 if(test.compare(t.at(i))==0){
                   continue;
                }
              }
              cout<<test;
              return 0;
          }
          
        }

    }
    
    
  } while (next_permutation(s.begin(), s.end()));
  cout<<"-1";
  }