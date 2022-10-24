class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans;
        for(size_t i = 0; i < boxes.size(); ++i) {
            int ops = 0;
            for(size_t j = i + 1; j < boxes.size(); ++j) {
               if(boxes[j] == '1')  {
                   ops += j - i;
               }
            }
            for(int j = i - 1; j >= 0; --j) {
               if(boxes[j] == '1')  {
                   ops += i - j;
               }
            }
            ans.push_back(ops);
        }
        
        return ans;
    }
};