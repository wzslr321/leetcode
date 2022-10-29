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
class Solution {
public:
    int pairSum(ListNode* head) {
        if(!head) return 0;
        int N = 1;
        vector<int> nodes{head->val};
        while(head->next) {
            head = head->next;
            nodes.emplace_back(head->val);
            ++N;
        }
        auto ans = 0;
        for(int i = 0; i < N / 2; ++i)  {
            ans = max(ans, nodes[i] + nodes[N - i - 1]) ;
        }
        return ans;
    }
};