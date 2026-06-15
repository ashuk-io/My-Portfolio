#include<iostream>
using namespace std;

int main(){
    int marks[5] = { 45,76,97,56,87};
    for ( int i = 0 ; i < sizeof(marks)/sizeof(int) ; i++){
        cout <<marks[i] << " ";
    }
    return 0;
}