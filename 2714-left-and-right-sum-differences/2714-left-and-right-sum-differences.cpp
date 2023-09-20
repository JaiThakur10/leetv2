class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans;
        int size = nums.size();
        int leftsum  = 0;
        int rightsum = 0;
        for(int i = 0; i<size;i++){
           rightsum += nums[i];
        }

        for(int i = 0 ; i< size; i++){
            rightsum -= nums[i];
            ans.push_back(abs(leftsum-rightsum));
            leftsum += nums[i];
        }

        return ans;
    }
};