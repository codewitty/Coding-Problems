// Brute Force solution. TLE!!!

#include <iostream>
#include <vector>

using namespace std;

int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int sum = 0;
        int n = 0;
        for (int i = 0; i < nums.size(); ++i) {
          sum += nums[i];
          if (sum == k)
              count++;
          n = i+1;
          while (n < nums.size()) {
            sum += nums[n];
            if (sum == k)
              count++;
            n++;
              }
          
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
