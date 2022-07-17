/*
 * @lc app=leetcode.cn id=565 lang=cpp
 *
 * [565] 数组嵌套
 */

// @lc code=start

/**
 * @brief 思路：暴力解，两次遍历 细节：每个节点入度为1，所以遍历过的节点不用再次遍历 
 * 
 */
class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int ans = 0, n = nums.size();
        vector<int> vis(n);
        for (int i = 0; i < n; ++i)
        {
            int cnt = 0;
            while (!vis[i])
            {
                vis[i] = true;
                i = nums[i];
                ++cnt;
            }
            ans = max(ans, cnt);
        }
        return ans;
    }
};
// @lc code=end

