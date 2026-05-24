#include<iostream>
using namespace std;

int main(){
    int age = 19;              //4 bytes
    char grade = 'A';          //1 byte
    float gpa = 9.5f;           //4 bytes
    bool isPassed = true;      //1 byte 
    cout << "My age is:" << age << endl;
    cout << "My grade is:" << grade << endl;
    cout << "My GPA is:" << gpa << endl;
    cout << "Size of GPA:" << sizeof(gpa) << endl;
    cout << "Size of isPassed:" << sizeof(isPassed) << endl;

    return 0;
}