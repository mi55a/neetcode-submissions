class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int numsSize = numbers.size();

        for(int i = 0; i < numsSize; i++) {
            for(int j = i+1; j < numsSize; j++) {
                int answer = numbers[i] + numbers[j];
                if((answer == target) && i < j) {
                    return {(i+1),(j+1)};
                }
            }
        }
        
    }
};
