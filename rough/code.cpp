#include<bits/stdc++.h> //bits/stdc++ have all essential keywords
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

// void ch(string *a){ //String manipulation using pointer and function
//     int n = (*a).length();
//     for(int i = 1; i<n ; i++){
//         if((*a)[i]>='a' && (*a)[i]<='z'){
//             (*a)[i]-=32;
//         }
//     }
// }
// int main(){
//     string name ;
//     cin>>name; 
//     ch(&name);
//     cout<<name;
// }

// int main(){
//     vector<int> a;
//     a.push_back(20);
//     a.push_back(2);
//     a.push_back(30);
//     cout<<a[0]<<endl<<a[1]<<endl;
//     return 0;
// }

/*
Code Force
LeetCode
CodeChef
AtCoder
HackerRank
SPOJ

time limit exceeded when the answer take more time to process 10^7 -- 10^8 operations per second

*/
// vector<int> spiral(vector<vector<int>> &matrix,int m, int n){
    
// }

// int main(){
//     vector<vector<int>> matrix ={{1,2,3},{4,5,6},{7,8,9}};
//     int m = matrix.size();
//     int n = matrix[0].size();
//     spiral(matrix,m,n);
//     for(int i=0; i<m; i++){
//         for(int j=0;j<n;j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

//map
//set
//ordered set
//

// int main(){
//     int b[5]={11,22,33,44,55};
//     cout<<b<<endl;
//     cout<<&b[0]<<endl;
//     cout<<b[1];
//     cout<<*(b+1);
//     return 0;
// }

// class Solution {
// public:
//     vector<vector<int>> generateMatrix(int n) {
//         int t=0;
//         int b=n-1;
//         int l=0;
//         int r=n-1;
//         int num = 0;
//         vector<vector<int>> re;
//         if(n<=1){re[0][0]=1;return re;}else{
//         while(num<n*n){
//         for(int i=l;i<=r&&num<n*n;i++){
//             num++;
//             re[t][i]=num;
//         }
//         t++;
//         for(int i=t; i<=b&&num<n*n;i++){
//             num++;
//             re[i][r]=num;
//         }
//         r--;
//         for(int i=r; i>=l&&num<n*n; i--){
//             num++;
//             re[b][i]=num;
//         }
//         b--;
//         for(int i=b;i>=t&num<n*n;i--){
//             num++;
//             re[i][l]=num;
//         }
//         l++;
//         }
//         return re;
//         }
//     }
// };
// int main(){
//     int a = 1;
//     vector<vector<int>> result = generateMatrix(3);
//     return 0;
// }

// int main(){
//     int n ;
//     cin>>n;
//     string s = to_string(n);
//     int b = s.length();
//     for(int i=0; i<b/2;i++){
//         if(s[i]==s[b-i-1]){
//             cout<<"Palindrome";
//             break;
//         }else{
//             cout<<"Not Palindrome";
//             break;
//         }
//     }
//     return 0;
// }

/*
5 3
4 2
3 1
2 3
1 2
0 1
*/

// int main(){
//     for(int i=5; i>=0;i--){
//         if(i>2){
//             cout<<i<<"\t"<<i-2;
//         }else{
//             cout<<i<<"\t"<<i+1;
//         }
//         cout<<endl;
//     }
//}

int main(){
    int n = 5;
    for(int i = 0; i<n/2; i++){
        cout<<n-i-1<<endl;
    }
    return 0;
}