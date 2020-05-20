//Runtime: 0ms

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = nums.size();
        int count = 0;
        for (int i = 0; i < k; ++i){
            //int j = i;
            while (nums[i] == val){
                int j = i;
                count++;
                while(j < (k - 1)){
                    nums[j] = nums[j+1];
                    j++;
                }
                nums[j] = val + 1;
            }
        }
        k -= count;
        return k;
    }
};

//#########################################################################
// Driver Code
//#########################################################################

#include <iostream>
#include <vector>

using namespace std;

int removeElement(vector<int>& nums, int val) {
        int k = nums.size();
        int count = 0;
        for (int i = 0; i < k; ++i){
            int j = i;
            while (nums[i] == val){
                j = i;
                count++;
                while(j < k-1){
                    nums[j] = nums[j+1];
                    j++;
                }
                nums[j] = val + 1;
            }
        }
        k -= count;
        return k;
    }


int main() {
  vector<int> nums = {3,2,2,3};
  cout << removeElement(nums, 3) << endl;
  return 0;
}
