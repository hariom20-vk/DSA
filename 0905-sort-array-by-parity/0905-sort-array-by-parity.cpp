class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {

            // Find an odd number from the left
            while (left < right && nums[left] % 2 == 0) {
                left++;
            }

            // Find an even number from the right
            while (left < right && nums[right] % 2 == 1) {
                right--;
            }

            // Swap odd and even
            if (left < right) {
                swap(nums[left], nums[right]);
                left++;
                right--;
            }
        }

        return nums;
    }
};