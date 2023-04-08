class Solution {
public:
    std::vector<int> getRow(int row) {
        long long ans = 1;
        std::vector<int> result;
        result.push_back(ans);
        for (int col = 0; col < row; ++col) {
            ans = ans * (row - col);
            ans = ans / (col + 1);
            result.push_back(ans);
        } 
        return result;
    }
};