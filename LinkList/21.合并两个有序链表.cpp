/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
 *
 * https://leetcode.cn/problems/merge-two-sorted-lists/description/
 *
 * algorithms
 * Easy (66.72%)
 * Likes:    2550
 * Dislikes: 0
 * Total Accepted:    1.1M
 * Total Submissions: 1.6M
 * Testcase Example:  '[1,2,4]\n[1,3,4]'
 *
 * 将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 
 * 
 * 
 * 
 * 示例 1：
 * 
 * 
 * 输入：l1 = [1,2,4], l2 = [1,3,4]
 * 输出：[1,1,2,3,4,4]
 * 
 * 
 * 示例 2：
 * 
 * 
 * 输入：l1 = [], l2 = []
 * 输出：[]
 * 
 * 
 * 示例 3：
 * 
 * 
 * 输入：l1 = [], l2 = [0]
 * 输出：[0]
 * 
 * 
 * 
 * 
 * 提示：
 * 
 * 
 * 两个链表的节点数目范围是 [0, 50]
 * -100 
 * l1 和 l2 均按 非递减顺序 排列
 * 
 * 
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    //递归
    // ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    // {
    //     if (l1 == nullptr)
    //     {
    //         return l2;
    //     }
    //     else if (l2 == nullptr)
    //     {
    //         return l1;
    //     }
    //     else if (l1->val < l2->val)
    //     {
    //         l1->next = mergeTwoLists(l1->next, l2);
    //         return l1;
    //     }
    //     else
    //     {
    //         l2->next = mergeTwoLists(l1, l2->next);
    //         return l2;
    //     }
    // }

    //非递归
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *dummy = new ListNode(0);
        ListNode *cur = dummy;
        while (l1 != nullptr && l2 != nullptr)
        {
            ListNode **pp = (l1->val < l2->val) ? &l1 : &l2;
            cur->next = *pp;
            cur = cur->next;
            *pp = (*pp)->next;
        }
        cur->next = (l1 == nullptr) ? l2 : l1;

        ListNode *ans = dummy->next;
        delete dummy;
        return ans;
    }
};



// @lc code=end

