#include <iostream> 
#include <cmath>
using namespace std;

int power (int m, int n){
    int ans = 1;
    for ( int i = 0 ; i < n ; i++){
        ans = ans*m;
    }
        return ans;
}
int toDecimal(int binary){
    int place = 0;
    int decimal = 0;
    int digit;
    while (binary > 0){
        digit = binary % 10;
        binary/=10;
        decimal += (digit*power(2,place));
        place+=1;
    }
    return decimal;
}
int main() {
    int binary = 1100101;
    cout << toDecimal(binary);
    return 0;
}


    