#include<iostream>
#include<vector>
using namespace std;
int maxSubArray(vector<int>& nums) {
        int currentSum = 0 , maxSum = INT_MIN;
        for ( int val : nums){
            currentSum += val;
            maxSum = max(maxSum , currentSum);
            if ( currentSum < 0) currentSum = 0;
        }
        return maxSum;
    }

int main(){
    vector<int> vec = {3,-4,5,4,-1,7,-8};
    cout << maxSubArray(vec) << endl;
    return 0;
}