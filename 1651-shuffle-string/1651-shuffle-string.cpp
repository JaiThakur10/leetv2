class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string shufled(s.size(),'.');
        for(int i = 0;i<indices.size();i++){
            shufled[indices[i]] = s[i];
        }

        return shufled;
    }
};