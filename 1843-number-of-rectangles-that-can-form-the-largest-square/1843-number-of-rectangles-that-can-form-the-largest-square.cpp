class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int larsq = -1;
        int count = 0;
        int sqlen;
        int sqsides[rectangles.size()];
        for(int i = 0;i<rectangles.size();i++){
               sqlen =  min(rectangles[i][0],rectangles[i][1]);
              sqsides[i] = sqlen;
              larsq = max(larsq,sqlen);
        }
        for(int i = 0;i<rectangles.size();i++){
           if(larsq == sqsides[i]){
                  count++;
            } 
        }
              
        

        return count;
    }
};