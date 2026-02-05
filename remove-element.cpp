#include<iostream>
#include<vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
       vector<int> r;
       for(int i = 0 ; i < nums.size() ; i++)
       {
        if(nums[i]==val)
        {

        }
        else
        {
            r.push_back(nums[i]);
        }
       }
       nums.clear();
       nums = r;
       return r.size(); 
    }

int main()
{
    vector<int> nums{3,2,2,3};
    cout << removeElement(nums,3) << endl;
}