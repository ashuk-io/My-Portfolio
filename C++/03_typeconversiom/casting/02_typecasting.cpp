#include<iostream>
using namespace std;

int main()
{
    double marks = 120.77;
    cout << marks <<":" << sizeof(marks)<< endl;    
    int newmarks = (int)marks;
    cout << newmarks <<":" << sizeof(newmarks)<< endl;    
    return 0;
}