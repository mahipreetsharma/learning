#include<iostream>
using namespace std;
int ty(int x, int n){
    static int p=1, f=1;
    int r;
    if(n==0){
        return 1;
    }else{
        r = ty(x,n-1);
        p = p*x;
        f = f*n;
        return r+p/f;
    }
}

int main(){
    int a = ty(5,3);
    cout<<a;
}