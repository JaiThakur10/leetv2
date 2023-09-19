class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> arr(2*n);
        int count = 0;
        for(int i = 0; i<n;i++){
            arr[count] = nums[i];
            arr[count + 1] = nums[i+n];
            count +=2;
        }
        return arr;
    }
};