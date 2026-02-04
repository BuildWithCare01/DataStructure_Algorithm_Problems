#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size()-1;
        while(s<=e)
        {
            int m = s+(e-s)/2;
            if(target == nums[m])
            {
                return m ;
            }
            else if(target>nums[s])
            {
                s = m + 1;
            }
            else
            {
                e = m - 1;
            }
        }
        return -1;
    }

int main()
{
    vector<int> nums{-1,0,3,5,9,12};
    search(nums,9);
}