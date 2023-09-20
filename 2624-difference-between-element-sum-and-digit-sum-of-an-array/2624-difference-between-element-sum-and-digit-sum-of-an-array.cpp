class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int es=0 , ds = 0;
        for(int i = 0;i<nums.size();i++){
            es += nums[i];
            int temp =nums[i];
            while(temp>0){
                ds += temp%10;
                temp = temp/10;
            }
        }
        int diff = abs(es-ds);
        return diff;
    }
};