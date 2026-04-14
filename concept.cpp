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
// int add(int a, int b){ //make int fuction for having a return value; and for making function without return value use void
//     int c = a+b;
//     return c;
// }

// int main(){
//     int n1 = 12;
//     int n2 = 14;
//     int sum = add(n1,n2);
//     cout<<sum;
//     return 0;
// }

//parameter passing call by header
// void swap(int *a,int *b){
//     int temp;
//     temp = *a;
//     *a = *b ;
//     *b = temp;
// }
// int main(){
//     int n1, n2;
//     n1=10;
//     n2=20;
//     swap(&n1,&n2);
//     cout<<n1<<endl<<n2;
//     return 0;
// }

// call by reference
// void swap(int &x, int &y){
//     int temp;
//     temp = x;
//     x = y;
//     y = temp;
// }
// int main(){
//     int n1,n2;
//     n1 = 10;
//     n2 = 20;
//     swap(n1,n2);
//     cout<<n1<<endl<<n2;
//     return 0;
// }

// Array as parameter
// void fun(int *A,int n){ //if we update the data of array the original aray also achive updates
//     cout<<n<<endl;
//     cout<<sizeof(A)/sizeof(A[0])<<endl;
//     for(int i = 0; i<n; i++){
//         cout<<A[i]<<" ";
//     }
// }
// int main(){
//     int a[] = {1,12,3,4,5};
//     int n = 5;
//     fun(a,n);

//     for(int x:a){
//         cout<<x<<" ";
//     }
//     return 0;
// }

///array function
// int * fun(int size){// creating array at heap using pointer
//     int *p;
//     p = new int[size];

//     for(int i = 0; i<size; i++){
//         p[i] = i+1;
//     }
//     return p;
// }

// int main(){
//     int *ptr,sz=10;
//     ptr = fun(sz);

//     for(int i = 0; i<sz; i++){
//         cout<<ptr[i]<<" ";
//     }

//     return 0;
// }

//structure as parameter
// struct test {
//     int A[5];
//     int n;
// };

// void fun(struct test t1){
//     for(int i = 0 ; i<t1.n; i++){
//         cout<<t1.A[i]<<" ";
//     }
// }

// int main(){
//     struct test t = {{2,3,4,5,6},5};
//     fun(t);
//     return 0;
// }

// structure and function
// struct Rectangle{
//     int lenght;
//     int breath;
// };

// void init(struct Rectangle *r, int l, int b){
//     r->lenght = l;
//     r->breath = b;
// }

// int area(struct Rectangle r){
//     return r.lenght*r.breath;
// }

// void change_length(struct Rectangle *r, int l){
//     r->lenght = l;
// }

// int main(){
//     struct Rectangle r1;
//     init(&r1,10,5);
//     change_length(&r1,20);
//     cout<<area(r1);
//     return 0;
// }

//class and constructor
    // class Rectangle{
    //     private:
    //     int breath;
    //     int length;
        
    //     public:
    //         Rectangle(int l, int b){
    //             length = l;
    //             breath = b;
    //         }

    //         int area(){
    //             return length*breath;
    //         }
    //         void change_length(int l){
    //             length = l;
    //         }

    //         ~Rectangle(){
    //             //nothing can be write here
    //             cout<<"destructor";
    //         }
    // };

    // int main(){
    //     Rectangle r{10,2};
    //     r.area();
    //     cout<<r.area();
    // }

//Template class
// template<class T>
// class Arith{
//     private:
//         T a;
//         T b;
//     public:
//         Arith(T a, T b);
//         T add();
//         T sub();
// };
// template<class T>
// Arith<T>::Arith(T a, T b){
//     this->a = a;
//     this->b = b;
// }

// template<class T>
// T Arith<T>::add(){
//     T c ;
//     c = a+b;
//     return c;
// }

// template<class T>
// T Arith<T>::sub(){
//     T c;
//     c = a-b;
//     return c;
// }

// int main(){
//     Arith<int> num(12,2);
//     cout<<num.add()<<endl;
//     cout<<num.sub();
//     return 0;
// }
