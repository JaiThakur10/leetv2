class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count = 0;
        for(int i = 0 ; i<nums.size();i++){
            for(int j = i+1;j<nums.size();j++){
                if(0<=i<j<nums.size() && nums[i]+nums[j]<target){
                    count++;
                }
            }
        }
        return count;
    }
};