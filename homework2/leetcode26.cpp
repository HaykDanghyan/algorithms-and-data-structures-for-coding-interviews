// Brute-Force solution
class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        std::set<int> s(nums.begin(), nums.end());
        int idx = 0;
        for (const auto& el : s) {
            nums[idx++] = el;
        }
        return idx;
    }
};

// Optimized solution
class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }
        int i = 0;
        for (int j = 1; j < nums.size(); ++j) {
            if (nums[i] != nums[j]) {
                nums[++i] = nums[j];
            }
        }
        return i + 1;
    }
};