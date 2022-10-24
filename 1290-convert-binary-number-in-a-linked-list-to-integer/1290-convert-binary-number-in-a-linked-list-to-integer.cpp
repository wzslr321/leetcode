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
    int getDecimalValue(ListNode* head) {
        vector<int> values;
        while(head) {
            values.push_back(head->val);
            head = head->next;
        }
        int ans = 0;
        size_t N = values.size();
        for(size_t i = 0; i < N; ++i) {
            auto val = values[N - 1 - i] << i;
            ans += val;
        }
        return ans; 
    }
};