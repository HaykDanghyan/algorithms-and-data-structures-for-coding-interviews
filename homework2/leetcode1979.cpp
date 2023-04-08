class Solution {
public:
    int gcd(int a, int b) {
        if (a == 0) {
            return b;
        }
        return gcd(b % a, a);
    }
    int findGCD(vector<int>& nums) {
        int max = *std::max_element(nums.begin(), nums.end());
        int min = *std::min_element(nums.begin(), nums.end());
        return gcd(max, min);
    }
};