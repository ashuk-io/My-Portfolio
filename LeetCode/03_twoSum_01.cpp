#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> pair;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                pair.push_back(i);
                pair.push_back(j);
            }
        }
    }
    return pair;
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    vector<int> pair  = twoSum(nums,7);
    cout << pair[0] << " "<<pair[1];
    return 0;
}