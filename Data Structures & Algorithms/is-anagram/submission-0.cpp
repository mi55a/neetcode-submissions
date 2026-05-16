class Solution {
public:
    bool isAnagram(string s, string t) {

        // length of first string, needed to go backwards

        map<char, int> stringS;
        map<char, int> stringT;

        for(char c:  s) {
            stringS[c]++;
        }

        for(char c:  t) {
            stringT[c]++;
        }

        if(stringS == stringT) {
            return true;
        }
        return false;

        
        
    }
};
