class Solution {
public:
    int uniquePaths(int m, int n) {
        int ways = m+n -2 ;
        int r = min(m-1,n-1);
        long long uniquepath = 1;
        for(int i=0;i<r;i++){
            uniquepath *= (ways-i);
            uniquepath /= (i+1);
        }
        return int(uniquepath);
    }
};