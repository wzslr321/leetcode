class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        auto N = nums.size();
        vector<int> ans(N);
        vector<int> left(N);
        vector<int> right(N);
            
        for(int i = 0, val = 1; i < N; ++i) {
            val *= nums[i];
            left[i] = val;
        }
        for(int i = N - 1, val = 1; i >= 0; --i) {
            val *= nums[i];
            right[i] = val;
        }
        for(size_t i = 0; i < N ; ++i) {
            if(i == 0) {
                ans[i] = right[i + 1];
                continue;
            }
            if(i == N - 1) {
                ans[i] = left[i - 1];
                continue;
            }
            ans[i] = right[i + 1] * left[i - 1];
        }
        return ans;
    }
};