class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        double glassfilled[101][101] = {0.0};
        glassfilled[0][0] = poured;
        for(int i = 0;i<100;i++){
            for(int j = 0;j<=i;j++){
                if(glassfilled[i][j] >=1){
                    glassfilled[i+1][j] += (glassfilled[i][j] -1)/2.0;
                    glassfilled[i+1][j+1] += (glassfilled[i][j] -1)/2.0;
                    glassfilled[i][j] = 1;
                }
            }
        }

        return glassfilled[query_row][query_glass];
    }
};