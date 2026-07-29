#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int>& nums){
    for ( int i = 1 ; i < nums.size() ; i ++){
        int prev = i-1;
        int current = nums[i];
        while ( prev >=0 && nums[prev] > current){
            nums[prev+1] = nums[prev];
            prev--;
        }
        nums[prev+1] = current;
    }

}

int main(){
    vector<int> nums = {7,3,5,2,6,0,1};
    insertionSort(nums);
    for ( int i: nums){
        cout << i << " ";
    }
    return 0;
}