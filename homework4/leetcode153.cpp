class Solution {
public:
    int findMin(std::vector<int>& nums) {
        int begin = 0;
        int end = nums.size() - 1;
        if (nums.size() == 1) {
            return nums[begin];
        }
        if (nums[end] > nums[begin]) {
            return nums[begin];
        }
        while (begin <= end) {
            int mid = begin + (end - begin) / 2;
            if (nums[mid] > nums[mid + 1]) {
                return nums[mid + 1];
            }
            if (nums[mid - 1] > nums[mid]) {
                return nums[mid];
            }

            if (nums[mid] > nums[0]) {
                begin = mid + 1;
            } else {
                end = mid - 1;
            }
        } 
        return end;
    }
};