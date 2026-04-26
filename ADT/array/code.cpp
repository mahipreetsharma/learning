#include<iostream>
using namespace std;

struct array{
    int *a;
    int size;
    int length;
};

int ar(array arr){
    for(int i=0; i<arr.size; i++){
        cout<<arr.a[i]<<endl;
    }
}

int main(){
    struct array arr;
    arr.size=5;
}