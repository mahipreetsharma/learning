#include<iostream>
using namespace std;

int ex(int n, int m){
    if(n==0){
        return 1;
    }else{
    return ex(n-1,m)*m;
    }
} 

int main(){
    int a =ex(3,5);
    cout<<a;
}

