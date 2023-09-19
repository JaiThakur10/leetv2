class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        std::vector<int> mxl(n);
        std::vector<int> mxr(n);

        mxl[0] = height[0];
        for(int i = 1; i<n;++i){
            mxl[i] = std::max(mxl[i-1],height[i]);
        }
        mxr[n-1] = height[n-1];
        for(int i = n-2; i>=0;i--){
            mxr[i] =std::max(mxr[i+1],height[i]);
        }
        std::vector<int> water(n);
        for(int i = 0; i<n; i++){
            water[i] = std::min(mxl[i],mxr[i]) - height[i];
        }
        int sum = 0;
        for(int i = 0; i<n;i++){
            sum = sum + water[i];
        }
        return sum;
    }
};