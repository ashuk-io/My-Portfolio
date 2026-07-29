#include<iostream>
#include<vector>
using namespace std;
// Recursive approach
int binarySearch(vector<int>& nums, int target, int left, int right){
    if(left <= right){
        int mid = left + (right-left)/2;
        if (target < nums[mid]){
            return binarySearch(nums,target,left,mid -1);
        } else if( target > nums[mid]){
            return binarySearch(nums,target,mid+1,right);
        } else {
            return mid;
        }
    }
    return -1;
}
// Iterative approach
// int binarySearch(vector<int>& nums, int target){
//     int left = 0 , right = nums.size()-1;
//     while(left <= right){
//         int mid = (left+right)/2;
//         if (target < nums[mid]){
//             right =mid-1;
//         }
//         else if( target > nums[mid]){
//             left = mid+1;
//         }
//         else {
//             return mid;
//         }

//     }
//     return -1;
// }
int main(){
    vector<int> nums = {2,5,7,8,9};
    cout << binarySearch(nums,8,0,nums.size()-1);
    return 0;
}