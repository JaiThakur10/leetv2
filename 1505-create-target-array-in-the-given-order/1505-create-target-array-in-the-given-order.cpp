class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int>target;
        int size = nums.size();
        for(int i = 0 ; i<size;i++){
            target.insert(target.begin()+index[i],nums[i]);
        }
        return target;
    }
};