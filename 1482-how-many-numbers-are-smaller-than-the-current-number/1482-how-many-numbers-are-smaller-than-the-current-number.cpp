class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int count ;
        int n = nums.size();
        vector<int>ans;
        for(int i = 0; i<n;i++){
            count = 0;
            for(int j = 0; j<n;j++){
                if(j!=i && nums[j]<nums[i]){
                    count+=1;
                    
                }
            }
            ans.push_back(count);
        }
        return ans;
        
    }
};