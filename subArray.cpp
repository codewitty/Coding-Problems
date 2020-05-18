#include <iostream>
#include <vector>

using namespace std;

int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int sum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            int n = i;
            while (sum < abs(k) && n < nums.size()){
                sum += nums[n];
                n++;
            }
            if (sum == k)
                count++;
            sum = 0;
        }
        return count;
        
    }
    
int main() {
  vector<int> nums = {-1,3,3,-1,5,-4,3,-1,2,2};
  int k = -2;
  
  cout << subarraySum(nums,k) << endl;
  return 0;
}
