class Solution {
  public:
    bool checkIfExist(vector < int > & arr) { 
      sort(arr.begin(), arr.end());
      
      for (int i = 0; i < arr.size(); ++i) {
        int x = arr[i] * 2;
        if (arr[i] == 0) {
            arr[i] = 17;
        }
        int l = 0;
        int r = arr.size() - 1;
        while (l <= r) {
          int m = l + (r - l) / 2;

          // Check if x is present at mid 
          if (arr[m] == x)
            return true;

          // If x greater, ignore left half 
          if (arr[m] < x)
            l = m + 1;

          // If x is smaller, ignore right half 
          else
            r = m - 1;
        }
        if (x == 0) {
            arr[i] = 0;
        }

      }
        return false;
    }
};


// Driver Code

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

    bool checkIfExist(vector < int > & arr) {
      sort(arr.begin(), arr.end());
      for (int i = 0; i < arr.size(); ++i){
        cout << arr[i] << " ";
      }
      cout << endl;
      for (int i = 0; i < arr.size(); ++i) {
        int x = arr[i] * 2;
        if (arr[i] == 0)
          arr[i] = 17;
        int l = 0;
        int r = arr.size() - 1;
        while (l <= r) {
          int m = l + (r - l) / 2;

          // Check if x is present at mid
          if (arr[m] == x)
            return true;

          // If x greater, ignore left half
          if (arr[m] < x)
            l = m + 1;

          // If x is smaller, ignore right half
          else
            r = m - 1;
        }
        if (x == 0 )
          arr[i] = x;

      }
        return false;
    }


int main() {
  vector<int> nums = {0,0};
  for (int i = 0; i < nums.size(); ++i){
    cout << nums[i] << " ";
  }
  cout << endl;
  cout << checkIfExist(nums) << endl;
  return 0;
}
