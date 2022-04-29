#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    string text;
    cin >> a >> text >> b;
    if(text=="+"){
        cout << a+b << endl ;
    }else if(text=="-"){
        cout << a-b << endl ;
    }else if(text=="*"){
        cout << a*b << endl ;
        
    }else if(text=="/"){
        if(b==0){
            cout<<"error"<< endl ; 
        }else{
            cout << a/b << endl ;
        }      
    }else if(text=="?"||text=="="||text=="!"){
        cout <<"error"<< endl ;
    }else{
        cout <<"error"<< endl ;
    }

}