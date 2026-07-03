#include<iostream>
using namespace std;

int main(){
    string str = "Hello world"; // dynamic => runtime resize
    cout <<str<< endl;
    str = "hello";
    cout << str << endl;
    string str1 = str + str; // concatenation
    cout << str1 << endl;
    cout << (str == str1) << endl;
    cout << str1.length() << endl;

    string str2;
    getline(cin,str2);
    cout << "output: "<<str2<<endl;
    for (char ch : str) cout << ch << " ";

    return 0;
}