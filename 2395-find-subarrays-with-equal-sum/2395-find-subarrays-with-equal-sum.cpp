class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
       unordered_map<int, int> mp; 
       for(size_t i = 0; i < nums.size() - 1; i += 2) {
           mp[nums[i] + nums[i + 1]] = 1;
       }
       for(size_t i = 1; i < nums.size() - 1; i += 2) {
           if(mp[nums[i] + nums[i + 1]]) return true;
       }

       return false;
    }
};