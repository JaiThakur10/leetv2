class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi = INT_MIN;
        vector<bool>result;
        for(int i = 0 ;i < candies.size() ;i++)
        {
            maxi = max(maxi , candies[i]);
        }
        for(int i = 0 ;i < candies.size() ;i++)
        {
            int j = candies[i] + extraCandies; 
            if(j >= maxi)
            {
                result.push_back(1);
            }
            else
            {
                result.push_back(0);
            }
        }
        return result;
    }
};