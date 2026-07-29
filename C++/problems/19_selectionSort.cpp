#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int>& nums){
    for ( int i = 0 ; i < nums.size()-1 ; i++){
        int minIndex= i;
        for ( int j = i+1 ; j < nums.size() ; j++){
            if(nums[minIndex] > nums[j]){
                minIndex = j;
            }
        }
        swap(nums[minIndex],nums[i]);
    }
}

int main(){
    vector<int> nums = {7,3,5,2,6,0,1};
    selectionSort(nums);
    for ( int i: nums){
        cout << i << " ";
    }
    return 0;
}
 