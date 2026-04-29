#include<bits/stdc++.h>
using namespace std;

//check the bit is set or unsset
//     int d = 15;
//     int b = 3;
//     if((d>>b)&1){
//         cout<<"yes";
//     }else{
//         cout<<"no"; 
//     }

//code to find non duplicate value in array
    // int a[9]={1,1,2,3,3,2,4,5,4};
    // int ans = a[0];
    // for(int i=1; i<9; i++){
    //     ans = ans^a[i];
    // }

//    cout<<ans;
// for(int i = 0; i<5; i++){
//     if(i==0 || i==4){
//         for(int j = 0; j<=6; j++){
//             cout<<" * ";
//         }
//     }else{
//         cout<<"*";
//         for(int j = 0; j<=17; j++){
//             cout<<" ";
//         }
//         cout<<"*";
//     }
//     cout<<endl;
// }
// int row = 0,col;
// for(int i = 0; i<row; i++){
//     for(int j = 0; j<col; j++){
//         if(i ==1 || i == row || j == 1 || j == col){
//             cout<<"*";
//         }else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }
// return 0;
// }

/*
*
**
***
****

   *
  **
 ***
****

****
***
**
*

****
 ***
  **
   *
   
*/

// {   //pointers
//     int a = 7;
//     int *b = &a;
//     cout<<b<<endl;
//     cout<<*b<<endl;
//     int **c = &b;
//     **c+=5;
//     cout<<&c<<endl<<**c<<endl;
//     return 0;
// }

// auto into_3(int &b){
//     b = b*3;
//     return b;
// }

// int main(){
//     int a = 5;
//     into_3(a);
//     cout<<a;
//     return 0;
// }

//Array calling and definition
// int main(){
//     int num[5]={1,2,3,4,5};
//     cout<<num[2]<<endl<<*(num+2)<<endl; // when we call a value in array by index we wre doing arr[i] = *(arr+i)
//     cout<<*num<<endl<<num; //*num print the index  0 of the array, num will print the adress of first element of array
//     return 0;
// }



