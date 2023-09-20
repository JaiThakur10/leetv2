class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>dl;
        int freq;
        int val;
        for(int i = 0 ;i<nums.size();i=i+2){

            freq = nums[i];
            val = nums[i+1];

            for(int j = 0; j<freq;j++){
                dl.push_back(val);
            }
            
        }

        return dl;
    }
};