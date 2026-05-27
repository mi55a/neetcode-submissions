class Solution {
public:
    bool isValid(string s) {

        unordered_map<char,char> parenthesesMap= {
            {')', '('}, 
            {'}', '{'}, 
            {']', '['}
        };

        stack<char> parentheses;

        for(char c: s) {
            
            if (parenthesesMap.count(c)) {
                if(parentheses.empty() || parentheses.top() != parenthesesMap[c]) {
                    return false;
                }
                parentheses.pop();

            } else {
                parentheses.push(c);
            }
            
            
        }

        return parentheses.size() == 0;


        
        
    }
};
