class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
    
        int size = nums.size();
        vector<int>prefix(size,0);
        vector<int>postfix(size,0);
        
        int maxtillnow = nums[0];
        for(int i = 1;i<size;i++){
            prefix[i] = maxtillnow;
            maxtillnow = max(maxtillnow,nums[i]);
        }
        
        maxtillnow = nums[size-1];
        for(int i  = size -2;i>0;i--){
            postfix[i] = maxtillnow;
            maxtillnow = max(nums[i],maxtillnow);
        }
        
        long long ans = 0;
        for(int i = 0;i<size-1;i++){
            long long val = (prefix[i] - (1LL*nums[i])) * (1LL*postfix[i]);
            if(ans<val)
                ans = val;
        }
        
        return ans;
    }
};