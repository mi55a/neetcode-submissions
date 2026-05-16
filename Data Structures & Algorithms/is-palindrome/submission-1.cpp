class Solution {
public:
    bool isPalindrome(string s) {

        int stringLen = s.size()-1;

        string original;
        

        // whole string without spaces and lower (just like the example)
        for(char c: s) {
            if(isalpha(c) || isdigit(c)) {
                char newC = (char)tolower(c);
                original += newC;
            }
        }

        string backwards(original.rbegin(), original.rend());
    
        if(original == backwards) {
            return true;
        } 
        return false;
        
    }
};
