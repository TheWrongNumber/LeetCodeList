/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
// #include<vector>
// using namespace std;

/**
 * @brief 思路：双指针，与26类似 
 *      细节：第二指针从后向前遍历，将数组末的元素复制到要删除的元素，避免赋值操作
 * 
 * 
 */
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int left = 0, right = nums.size();
        while (left < right)
        {
            if (nums[left] == val)
            {
                nums[left] = nums[right - 1];
                right--;
            }
            else
            {
                left++;
            }
        }
        return left;
    }
};
// @lc code=end

