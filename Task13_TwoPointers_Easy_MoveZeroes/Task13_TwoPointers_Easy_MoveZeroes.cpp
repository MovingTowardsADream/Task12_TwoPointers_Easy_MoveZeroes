#include <iostream>
#include <vector>

class Solution {
public:
    static void moveZeroes(std::vector<int>& nums) {
        int count = 0;
        for (int i = 0;i < nums.size();i++) {
            if (nums[i] == 0) {
                count++;
            }
            else {
                std::swap(nums[i - count], nums[i]);
            }
        }
    }
};

int main()
{
    std::vector<int> nums = { 0, 1, 0, 3, 12 };
    Solution::moveZeroes(nums);
    for (int i : nums) {
        std::cout << i << " ";
    }
}
