class Solution {
public:
  std::vector<std::vector<int>> generate(int numRows) {
    std::vector<std::vector<int>> res(numRows);
    
    // Initialize the first row with 1.
    res[0].push_back(1);

    // Generate remaining rows based on previous row.
    for (int i = 1; i < numRows; ++i) {
      for (int j = 0; j <= i; ++j) {
        if (j == 0 || j == i) {
          res[i].push_back(1);
        } else {
          res[i].push_back(res[i - 1][j - 1] + res[i - 1][j]);
        }
      }
    }

    return res;
  }
};
	