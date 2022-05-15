#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
int main() {
   int n,q;
   cin >>n>>q;
    vector<int>  a;
    int c[200000]
  for (int i=0;i<n;i++){
    a.push_back(i+1);
  }
  for(int i=0;i<q;i++){
    int x;
    cin >> x;
  /*  vector<int>::iterator itr;
    itr=find(a.begin(),a.end(),x);
    if (itr == a.end()) cout << "search failed" << std::endl;

    int index = distance(a.begin(), itr);
    if(index==n-1){
          swap(a.at(distance(a.begin(), itr)),a.at((distance(a.begin(), itr)-1)));
    }else{
          swap(a.at(distance(a.begin(), itr)),a.at((distance(a.begin(), itr)+1)));
    }
  */
   c[x-1]++;
 }
  for (int i=0;i<n-1;i++){
    if(c[x-1]>0){
      swap(a.at(0),a.at(1));
    }else{

    }
        cout <<a.pop_front() << " ";

  }
  cout <<a.pop_front() <<endl;
}
