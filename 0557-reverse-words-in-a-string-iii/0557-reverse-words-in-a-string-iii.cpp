class Solution {
public:
    string reverseWords(string s) {
        stringstream words(s);
        string temp , ans;
        while(words>>temp){
            reverse(temp.begin(),temp.end());
            ans += (temp+" ");
        }

        return ans.substr(0,ans.size()-1);
    }
};