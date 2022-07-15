/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */


// @lc code=start

// #include<vector>
// using namespace std;
/**
 * @brief 思路：双指针
 * 
 */
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 0)
            return 0;
        int j = 0;

        for (int i = 0; i < n; i++)
        {
            if (nums[j] != nums[i])
            {
                nums[++j] = nums[i];
            }
        }
        return j + 1;
    }
};
// @lc code=end

