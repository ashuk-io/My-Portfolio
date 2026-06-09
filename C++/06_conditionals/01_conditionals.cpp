#include <iostream>
using namespace std;

int main(){
    float marks , maths, ai , dsa , python;
    cout << "Maths : ";
    cin >> maths;
    cout << "AI : ";
    cin >> ai;
    cout << "DSA : ";
    cin >> dsa;
    cout << "Python : ";
    cin >> python;

    marks = (maths + ai + python + dsa)/4;
    cout << marks << endl;
    if ( marks >=90) {
        cout << "A+";
    } else if ((marks >= 80) && (marks < 90)){
        cout << "A";
    } else if ((marks >= 70) && (marks < 80)){
        cout << "B";
    } else if ((marks >= 60) && (marks < 70)){
        cout << "C";
    } else if ((marks >= 50) && (marks < 60)){
        cout << "D";
    } else{
        cout << "F -> Fail";
    }
    return 0;
}