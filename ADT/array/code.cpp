#include<iostream>
using namespace std;

struct array{
    int *a;
    int size;
    int length;
};

int main(){
    struct array arr;
    cout<<"enter size of array";
    cin>>arr.size;
    arr.a = new int[arr.size*sizeof(int)];
    arr.length=0;
    
}