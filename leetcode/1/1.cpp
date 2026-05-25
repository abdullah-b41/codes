#include <bits/stdc++.h>
using namespace std;
class Solution
{
  public:
    vector<int> findValidElements(vector<int> &nums)
    {
        vector<int> ans;
        ans.push_back(nums[0]);
        for (int i = 1; i < nums.size() - 1; i++)
        {
            int flag = 1;
            for (int j = 0; j < i; j++)
            {
                if (nums[i] <= nums[j])
                    flag = 0;
            }
            int flag2 = 1;
            for (int j = nums.size() - 1; j > i; j--)
            {
                if (nums[i] <= nums[j])
                    flag2 = 0;
            }
            if (flag || flag2)
                ans.push_back(nums[i]);
        }
        if (nums.size() > 1)
        {
            ans.push_back(nums[nums.size() - 1]);
        }
        return ans;
    }
};