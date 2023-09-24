class Solution {
public:
    int totalsoldiers(vector<int>row){
        int i=0,n=row.size()-1;
        int ans=-1;
        while(i<=n){
            int mid=i+(n-i)/2;
            if(row[mid]==1){
                ans=mid;
                i=mid+1;
            }
            else{
                n=mid-1;
            }
        }
        return ans+1;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>weakest;
        for(int i=0;i<mat.size();i++){
            int one=totalsoldiers(mat[i]);
            weakest.push_back({one,i});
        }
        sort(weakest.begin(),weakest.end());
        vector<int>res;
        for(int i=0;i<k;i++){
            res.push_back(weakest[i].second);
        }
        return res;
    }
};