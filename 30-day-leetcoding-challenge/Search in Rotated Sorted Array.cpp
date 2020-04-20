class Solution {
public:
 
    int search(vector<int>& nums, int target) {
           /*
        //sort(nums.begin(), nums.end());
        int n = nums.size()/2;
        int res = -1;
        int zeroCount = 0;
        while (n >= 0 && n <= nums.size()){
            if (nums[n] == target) {
                res = n;
                break;
            }
            else if (n == 0 || n == nums.size()) {
                zeroCount ++;
            }
            else if (zeroCount > 0){
                break;
            }
            else if (nums[n] > target && target > nums[n-1])
                break;
            else if (nums[n] > target)
                n = n/2;
            else
                n = n + n/2;
        }
        return res;
        
    }
    */
    int n = nums.size();
    int start = 0, end = n-1;
        while(start<=end) {
            int mid = start + (end-start)/2;
            if(nums[mid]==target) return mid;  
            
            if(nums[mid] < nums[end]) { // right half sorted
                if(target>nums[mid] && target<=nums[end])
                    start = mid+1;
                else
                    end = mid-1;
            }
            else {  // left half sorted
                if(target>=nums[start] && target<nums[mid]) 
                    end = mid-1;
                else
                    start = mid+1;
            }
        }
        return -1;
    }
};
