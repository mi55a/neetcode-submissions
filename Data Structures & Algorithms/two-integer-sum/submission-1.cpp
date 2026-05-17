class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int numsSize = nums.size();

        for(int i = 0; i < numsSize; i++) {
            for(int j = i+1; j < numsSize; j++) {
                int answer = nums[i] + nums[j];
                if(answer == target) {
                    return {i,j};
                }
            }
        }


        
    }
};
