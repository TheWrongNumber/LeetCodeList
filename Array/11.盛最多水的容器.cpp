/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */

// @lc code=start
/**
 * @brief 思路：双指针 细节：只移动更短一端的指针可减少遍历次数
 * 
 */
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size() - 1, res = 0;
        while (i < j)
        {
            res = height[i] < height[j] ? 
                max(res, (j - i) * height[i++]) : 
                max(res, (j - i) * height[j--]);
        }
        return res;
    }
};
// @lc code=end

