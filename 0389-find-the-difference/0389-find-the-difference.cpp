class Solution {
public:
    char findTheDifference(std::string s, std::string t) {
        
        int added = 0;
        
        for(int i = 0;i<t.size();i++){
            added += int(t[i]);
        }
        for(int i = 0; i<s.size();i++){
            added = added - int(s[i]);
        }
        return char(added);
    }
};