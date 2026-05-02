#include<bits/stdc++.h>
using namespace std;

int area(int s){
    return s*s;
}

int area(int l, int b){
    return l*b;
}

float area(float r){
    return 3.14*r*r;
}

int main(){
    float ra = 14;
    cout<<area(12)<<endl;
    cout<<area(10,12)<<endl;
    cout<<area(ra)<<endl;
    return 0;
}