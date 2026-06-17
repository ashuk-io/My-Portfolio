#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec0;
    vector<int> vec1 = {93 ,83,69,96};
    vector<char> vec2 = {'a','b','c','d'};
    cout << vec1.size() << endl;
    cout << "Original vec0 : " << vec0.size() << endl;
    vec0.push_back(17);
    cout <<"After push_back vec0 : " << vec0.size() << endl;
    vec0.pop_back();
    cout <<"After pop_back vec0 : " << vec0.size() << endl;
    cout << vec1.front() << endl;
    cout << vec1.back() << endl;
    cout << vec1.at(2) << endl;

    cout << "Size vec0 : " << vec0.size() << " Capacity vec0 : " << vec0.capacity() << endl;
    return 0;
}