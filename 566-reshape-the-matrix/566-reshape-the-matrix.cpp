class Solution {
public:
   vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c) {

  vector<vector<int>> answer(r, vector<int>(c));

  size_t cc = 0, cr = 0;
  size_t m = mat.size(), n = mat[0].size();

  if (m * n != r * c) return mat;

  for (size_t i = 0; i < m; ++i) {
    for (size_t j = 0; j < n; ++j) {
      if (cc < c) {
        answer[cr][cc] = mat[i][j];
        ++cc;
      } else {
        ++cr;
        cc = 0;
        answer[cr][cc] = mat[i][j];
        ++cc; 
      }
    }
  }

  return answer;
}
};