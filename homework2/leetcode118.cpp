class Solution {
public:
    std::vector<int> generateRow(int row) {
        long long ans = 1;
        std::vector<int> result;
        result.push_back(ans);
        for (int col = 1; col < row; ++col) {
            ans = ans * (row - col);
            ans = ans / (col);
            result.push_back(ans);
        } 
        return result;
    }
    std::vector<std::vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> result;
        for (int i = 1; i <= numRows; ++i) {
            result.push_back(generateRow(i));
        }
        return result;
    }
};