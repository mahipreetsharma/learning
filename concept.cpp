#include<iostream>
#include<vector>

using namespace std;

//rectangle structure
// struct rectangle
// {
//     int length;
//     int breath;
// };

// int main(){
//     struct rectangle r;
//     r.length = 10;
//     r.breath = 11;
//     cout<<"Area of Rectangle = "<<r.length*r.breath;
//     return 0;
// }

//student structue
// struct student {
//     int roll;
//     string name;
//     string dep;
//     string address;
// };
// int main(){
//     struct student s;
//     s.roll = 12;
//     s.name = "B";
//     s.dep = "CS";
//     s.address = "92,New B";
//     cout<<s.name<<endl<<s.roll<<endl<<s.dep<<endl<<s.address<<endl;
//     return 0;
// }

//pointer and heap memory
// int main(){
//     int a = 20;
//     int *p; //declaration of pointer
//     p = &a;
//     int B[5] = {1,2,34,5,6};
//     int *e;
//     e = new int[5]; // accessing heap memory
//     e = B;
//     for(int i =0; i<5; i++){
//         cout<<e[i]<<" ";
//     }
//     delete [] e; //use to delete the allocated memory in heap  in cpp
//     free(p); //use to delete the allocated memory in heap in c
//     return 0;
// }

//reference
// int main(){
//     int a = 10;
//     int &b = a; // it must be initialize at the time of declaration
//     cout<<b;
//     return 0;
// }

//pointer on structure
// struct rectangle
// {
//     int lenght;
//     int breath;
// };

// int main(){
//     rectangle r = {10,5};
//     cout<<r.lenght;
//     cout<<r.breath;
//     rectangle *p=&r;
//     cout<<endl<<p->lenght<<endl;
//     cout<<p->breath<<endl;
//     return 0;
// }

//heap memory allocation for pointer on structure
// struct rectangle{
//     int length;
//     int breath;
// };
// int main(){
//         struct rectangle *p;
//         p = new rectangle;

//         p->breath=10;
//         p->length=12;

//         cout<<p->breath<<endl;
//         cout<<p->length<<endl;
//     return 0;
// }

//functions
int add(int a, int b){ //make int fuction for having a return value; and for making function without return value use void
    int c = a+b;
    return c;
}

int main(){
    int n1 = 12;
    int n2 = 14;
    int sum = add(n1,n2);
    cout<<sum;
    return 0;
}