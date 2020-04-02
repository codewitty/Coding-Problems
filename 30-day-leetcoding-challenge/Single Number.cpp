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

/*
Optimal Solution:

using namespace std;
6	
7	int singleNumber(vector<int>& nums) {
8	        int res = nums[0];
9	        int n;
10	        for (int i=1;i<nums.size();i++){
11	            int n = nums[i];
12	            res = res ^ n;
13	        }
14	        return res;
15	  }
16	
17	  
18	int main() {
19	    vector<int> v{ 2,5,7,3,2,5,3 };
20	    cout << "Answer: " << singleNumber(v) << endl;
21	    return 0;
22	  }
*/
