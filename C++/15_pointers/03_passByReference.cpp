#include<iostream>
using namespace std;

void change( int* ptr){  //using pointer
    *ptr = 4;
}
void convert(int &b){  //using alias
    b = 5;
}

int main(){
    int a = 2;
    cout << a << endl;
    change(&a);
    cout << a << endl;
    convert(a);
    cout << a << endl;
    int arr[] = {1,2,3,4,5,6};
    // arr = &a; not valid as arrays are constant pointers 

    
    return 0;
}