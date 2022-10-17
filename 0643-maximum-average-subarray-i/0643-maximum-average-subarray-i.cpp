class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       auto N = nums.size();
    double answer = 0.;
    std::vector<int> prefix_sums(N);
    auto sum = 0;
    for(size_t i = 0; i < N; ++i) {
        prefix_sums[i] = sum + nums[i];
        sum += nums[i];
    }

    auto max_sum = INT_MIN;
    for(int i = k - 1; i < N; ++i) {
        auto value = prefix_sums[i];
        if(i - k >= 0) value -= prefix_sums[i - k];
        if(value > max_sum) {
            max_sum = value;
            double average = static_cast<double>(value) / k;
            answer = average;
        }
    }

    return answer;
    }
};