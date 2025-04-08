class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // Result vector to store triplets
        vector<vector<int>> result;

        // Step 1: Sort the array to make it easier to handle duplicates and use two-pointers
        sort(nums.begin(), nums.end());

        // Step 2: Traverse the array
        for (int i = 0; i < nums.size() - 2; ++i) {
            // Skip duplicate elements for 'i' to avoid duplicate triplets
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int left = i + 1;                // left pointer
            int right = nums.size() - 1;     // right pointer

            // Step 3: Use two pointers to find the sum
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if (sum == 0) {
                    // Triplet found
                    result.push_back({nums[i], nums[left], nums[right]});
                    
                    // Skip duplicates for left and right
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;

                    // Move both pointers
                    left++;
                    right--;
                }
                else if (sum < 0) {
                    // We need a bigger number
                    left++;
                }
                else {
                    // We need a smaller number
                    right--;
                }
            }
        }

        return result;
    }
};
