class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        int copy = x;
        size_t reverse = 0;
        while (copy) {
            int reminder = copy % 10;
            reverse = reverse * 10 + reminder;
            copy /= 10;
        }
        return reverse == x;
    }
};