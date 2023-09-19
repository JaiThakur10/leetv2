class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X = 0;
        int n = operations.size();
        int sum = 0;

        for(int i = 0; i<n ; i++){
            if(operations[i] == "--X"){
                sum = sum -1;
            }
            else if(operations[i] == "++X"){
                sum = sum + 1;
            }
            else if(operations[i] == "X--"){
                sum = sum -1;
            }
            else if(operations[i] == "X++"){
                sum = sum+1;
            }
        }
        return sum;
    }
};