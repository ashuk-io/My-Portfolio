#include<iostream>
#include<vector>

using namespace std;

void bubbleSort(vector<int> &nums){
    for ( int i = 0 ; i < nums.size()-1 ; i++){
        bool isSwap = false;
        for ( int j = 0 ; j < nums.size()-i-1 ; j++){
            if (nums[j] > nums[j+1]) 
            {
                swap(nums[j] , nums[j+1]);
                isSwap = true;
            }
        }
        if (!isSwap) return;
    }
}
int main(){

    vector<int> nums = {7,3,5,2,6,0,1};
    bubbleSort(nums);
    for ( int i: nums){
        cout <<i << endl;
    }
    return 0;
}