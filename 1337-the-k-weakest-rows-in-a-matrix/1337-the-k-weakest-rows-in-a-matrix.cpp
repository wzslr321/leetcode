class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        size_t N = mat.size(), n = mat[0].size();
        vector<pair<int, int>> vec(N);
        for(size_t i = 0; i < N; ++i) {
            int strength = 0;
            for(size_t j = 0; j < n; ++j) {
                if(mat[i][j] != 1) break;
                ++strength;
            }
            vec[i] = {strength, i};
        }
        sort(vec.begin(), vec.end(), [](auto p1, auto p2 ) {
            if(p1.first == p2.first) {
                return p1.second < p2.second;
            }
            return p1.first < p2.first; 
        });
            
        vector<int> ans(k);
        for(int i = 0; i < k; ++i) {
            ans[i] = vec[i].second;
        }
        
        return ans;
    }
};