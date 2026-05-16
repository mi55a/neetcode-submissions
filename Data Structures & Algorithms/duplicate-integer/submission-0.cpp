class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        // create set since we want to see if there's duplicates

        set<int> duplicateNum;

        for(int num: nums) {
            if(duplicateNum.count(num) == 0) {
                duplicateNum.insert(num);
            } else {
                return true;
            }
        }
        return false;

        
    }
};