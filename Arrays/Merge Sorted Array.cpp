// 0 ms solution

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m;
        
        while (i < m + n) {
            nums1[i] = nums2[i-m];
            i++;
        }
        sort(nums1.begin(), nums1.end());
    }
};

//Driver code for testing
/*
#include <iostream>
#include <algorithm>
#include <vector>

int main() {
  vector<int> nums1 = {-2,-1,1,2,3,5,7,9,8,11,0,0,0};
  vector<int> nums2 = {2, 5, 6};
  merge(nums1, 10, nums2, 3);
  
  for (int i = 0; i < nums1.size(); ++i) {
    cout << nums1[i] << " " ;
  }
  return 0;
}
*/
