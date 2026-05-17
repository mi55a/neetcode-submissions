class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        set<int> duplicates;

        for(int i: nums) {
            if(!duplicates.count(i)) {
                duplicates.insert(i);
            } else {
                return i;
            }
        }
        
    }
};
