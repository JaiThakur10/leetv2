class Solution {
public:
    bool isValid(string s) {
       stack<char> p;
       for(char ch : s){
        switch(ch){
           case '(':
                p.push(ch);
                break;
            case '[':
                p.push(ch);
                break;
            case '{':
                p.push(ch);
                break;
            case ')':
                if(p.empty() || p.top() != '(')
                    return false;
                p.pop();
                break;   
            case ']':
                if(p.empty() || p.top() != '['  )
                    return false;
                p.pop();
                break; 
            case '}':
                if(p.empty() || p.top() != '{' )
                    return false;
                p.pop();
                break;                 
        }
       }
       if(p.empty()){
        return true;
       }
       else return false;
    }
};