#include<bits/stdc++.h>
using namespace std;

void isPrime(int s,int e){
    for(int i=s; i<=e; i++){
        for(int j=2; j<i; j++){
            if(i%j==0){
                break;
            }else{
                cout<<i<<" ";
            }
        }
    }
}

int main(){
    isPrime(10,50);
}