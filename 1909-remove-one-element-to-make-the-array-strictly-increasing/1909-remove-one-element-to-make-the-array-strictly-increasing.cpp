class Solution {
public:
bool canBeIncreasing(std::vector<int> &nums) {
    int i = 0, j = 1, skippedIndex = -1;
    bool canSkip = true;
    if(nums.size() == 2) return true;
    while (j < nums.size()) {
        if (nums[i] >= nums[j]) {
            if (i == skippedIndex) {
                ++i;
                if (i == j) ++j;
                continue;
            }
            if (!canSkip) return false;
            if ((j < nums.size() - 1 && nums[j + 1] > nums[i]) || j == nums.size() - 1) {
                std::swap(nums[i], nums[j]);
                ++i;
            }
            canSkip = false;
            skippedIndex = i;
            --i;
            if(i == -1) {
                i = 1, j = 2;
            }
            continue;
        }
        ++i, ++j;
    }


    return true;
}
};