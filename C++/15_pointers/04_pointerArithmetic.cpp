#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    cout << *arr << endl;
    cout << *(arr+1) << endl;
    cout << *(arr+2) << endl;
    cout << *(arr+3) << endl;

    int a = 7;
    int* ptr = &a;
    cout << ptr << endl;
    ptr++;
    cout << ptr << endl;
    ptr+=2;
    cout << ptr << endl;
    cout << ptr - arr << endl;
    cout << (ptr < arr) << endl;
    return 0;
}