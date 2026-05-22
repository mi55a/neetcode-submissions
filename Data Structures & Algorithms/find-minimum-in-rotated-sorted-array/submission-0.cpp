class Solution {
public:
    int binarySearch(vector<int> &nums, int low, int high, int target) {

        while(low < high) {
            int mid = low + (high - low) / 2;

            if(nums[mid] > nums[high]) {
                low = mid + 1;
            }
            else {
                high = mid;
            }

        }

        target = nums[low];

        return target;

    }
    int findMin(vector<int> &nums) {

        int last = nums.size()-1;

        int index = 0;

        return binarySearch(nums, 0, last, index);

    }
};
