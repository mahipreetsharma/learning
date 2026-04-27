#include<iostream>
using namespace std;

struct array{
    int *a;//array
    int size;//size of array
    int length;//length of array
};

void Display(struct array arr){
    int i;
    cout<<"The elements are : "<<endl;
    for(i=0; i<arr.length; i++){
        cout<<arr.a[i];
    }
}

int main(){
    struct array arr;
    cout<<"Enter the size of array : ";
    cin>>arr.size;
    
    //creating array
    arr.a = new int[arr.size];
    arr.length=0;

    int n , i;
    cout<<"How many numbers :";
    cin>>n;

    cout<<"Enter all elements :";
    for(int i = 0; i<n; i++){
        cin>>arr.a[i];
    }

    arr.length=n;

    Display(arr);
    return 0;
}