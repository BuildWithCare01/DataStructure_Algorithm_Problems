#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s = 0;
        while(s<nums.size())
        {
            bool v = checkdupno(nums[s],nums,s);
            if(!v)
            {
                return nums[s];
            }
            s++;
        }
        return -1;
    }

    bool checkdupno(int no , vector<int>& v , int st)
        {
            int i = 0;
            while(i<v.size())
            {
                if(v[i]==no && i!=st)
                {
                    return true;
                }
                i++;
            }
            return false;
        }
int main()
{
    vector<int> nums{2,2,1};
    singleNumber(nums);
}