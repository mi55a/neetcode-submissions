class Solution {
public:
    int binary(vector<int>& nums, int low, int high, int target) {
        int mid = (low+high) /2;
        if(low > high) {
            return -1;
        }

        if(nums[mid] == target) {
            return mid;
        }
        else if (nums[mid] > target) {
            return binary(nums, low, mid-1, target);
        }
        else if (nums[mid] < target){
            return binary(nums,mid+1, high, target);
        } 
    }
    int search(vector<int>& nums, int target) {
        int numsSize = nums.size()-1;

        return binary(nums, 0, numsSize, target);
        
        
    }
};
