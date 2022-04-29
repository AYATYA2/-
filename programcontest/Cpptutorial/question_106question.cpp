#include <bits/stdc++.h>
using namespace std;

int main(){
/*    int n,a;
    cin >> n >> a ;
    if(n%500<=a){
        cout << "Yes" <<endl;
    }else{
        cout << "No" <<endl;
    }
*/
/*    int a,b;
    cin >> a >> b;
    if ((a*b)%2==1){
        cout << "Odd" << endl;
    }else{
        cout << "Even" << endl;

    }
*//*
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a+b<c+d){
        cout << "Right" << endl;
    }else if(a+b>c+d){
        cout << "Left" << endl;
    }else{
        cout << "Balanced" << endl;
    }*/
 /*   int n,a,b;
    cin >> n >> a >> b;
    if(n*a>b){
        cout << b <<endl;
    }else{
        cout << n*a <<endl; 
    }
*/
    int n;
    cin >> n;
    if((n%1000)/100==(n%100)/10){
        if(n/1000==(n%1000)/100||(n%100)/10==n%10){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }    
    }else{
            cout << "No" << endl;
    }
}