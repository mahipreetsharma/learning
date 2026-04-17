#include<iostream>
using namespace std;

int main(){
    int a[5];
    int b[5]={1,2,3,4,5};
    int c[5]={1,2};
    int d[5]={0};
    int e[]={1,2,34,5,6};
    
    for(int i = 0; i<5;i++){
        cout<<&a[i]<<endl;
    }
}