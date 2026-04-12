#include<iostream>
using namespace std;

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

struct student {
    int roll;
    string name;
    string dep;
    string address;
};

int main(){
    struct student s;
    s.roll = 12;
    s.name = "B";
    s.dep = "CS";
    s.address = "92,New B";
    cout<<s.name<<endl<<s.roll<<endl<<s.dep<<endl<<s.address<<endl;
    return 0;
}