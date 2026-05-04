#include<bits/stdc++.h>
using namespace std;

void grade(int n){
    if(n>=90){
        cout<<"A";
    }else if(n>=75){
        cout<<"B";
    }else if(n>=60){
        cout<<"C";
    }else if(n>=40){
        cout<<"E";
    }else{
        cout<<"F";
    }
}

int main(){
    int m;
    cout<<"Enter your marks : ";
    cin>>m;
    return 0;
}
