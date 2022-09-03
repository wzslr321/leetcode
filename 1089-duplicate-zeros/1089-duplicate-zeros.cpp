class Solution {
public:
   void duplicateZeros(vector<int>& arr) {
        size_t N = arr.size();
        size_t NV = N * 2;
        vector<int> vec(NV, -1);
        for(size_t i = 0, j = 0; i < N; ++i, j += 2) {
            vec[j] = arr[i];
            if(vec[j] == 0) vec[j + 1] = 0;
        }
        for(size_t i = 0, count = 0; i < NV, count < N; ++i) {
            if(vec[i] != -1) arr[count++] = vec[i];
        }
    }
};