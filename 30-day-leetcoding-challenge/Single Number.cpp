class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int retVal;
        sort(nums.begin(), nums.end());
        
        // Edge case: Only one input
        if (nums.size() == 1)
            retVal = nums[0];
        
        // Edge case : answer is at the end of vector
        else if (nums[nums.size() - 1] != nums[nums.size() - 2]) {
                retVal = nums[nums.size() - 1];
            }
        else {
          for (int x = 0; x < nums.size(); x+=2) {
            if (nums[x] != nums[x+1]) {
                retVal = nums[x];
                break;
            }
        }
      }
      return retVal;
  }
};
