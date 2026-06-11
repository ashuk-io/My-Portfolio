#include<iostream>
using namespace std;

int main(){
    char grade = 'A';

switch(grade) {
    case 'A':
    case 'B':
        cout << "Pass";
        break;

    case 'F':
        cout << "Fail";
        break;
}
}