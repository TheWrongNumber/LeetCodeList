/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */

// @lc code=start
/**
 * @brief 思路：二分查找
 * 
 */
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int n = nums.size(); 
        int l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (nums[mid] < target)
                l = mid + 1;
            else
                r = mid - 1;
        }
        return l;
    }
};
// @lc code=end

