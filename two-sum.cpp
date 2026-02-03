#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> r ;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            for(int j = i+1 ; j < nums.size() ; j++)
            {
                if(nums[i]+nums[j] == target)
                {
                    r.push_back(i);
                    r.push_back(j);
                    return r;
                }
            }
        }
        return r;
    }

int main()
{
    vector<int> nums{2,7,11,15};
    vector<int> r = twoSum(nums,9);
}