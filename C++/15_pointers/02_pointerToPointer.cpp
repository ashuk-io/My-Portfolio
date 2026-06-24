#include<iostream>
using namespace std;
int main(){
    int price = 100;
    int* ptr = &price;
    int** ptr2 = &ptr;
    int* ptr3 = NULL;
    cout << ptr3<< endl;


    cout << ptr << endl;
    cout << ptr2 << endl;
    cout << *(&price) << endl;
    cout << *(ptr2) << endl;
    cout << **(ptr2) << endl;

    return 0;
}  