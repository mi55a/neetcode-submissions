class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // maybe a word as the key, then the value as a map of the characters and how many times they appear
        // loop thru the map and check if any words share the same map, then add those words to the double vector
        // make a double vector to hold the words

        vector<vector<string>> anagrams;
        map<map<char,int>, vector<string>> index;

        for(string s: strs) {
            map<char,int> count;
            for(char c: s) {
                count[c]++;
            }
            index[count].push_back(s);
        }

        for(auto [key,word]: index) {
            anagrams.push_back(word);
        }

        return anagrams;
        
    }
};
