class Solution {
public:
    int singleNumber(vector<int>& nums) {

        map<int, int> count;

        for(int i: nums) {
            count[i]++;
        }

        for(auto [num, numCount]: count) {
            if (numCount == 1) {
                return num;
            }
        }
        
    }
};
