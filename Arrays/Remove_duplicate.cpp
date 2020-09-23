#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    int check = 0;
    for (int i = 0; i < nums.size() - 1; ++i){
        int j = i + 1;
        while (nums[i] == nums[j]) {
            j++;
        }
        if (j > i + 1) {
            nums[i+1] = nums[j];
            check++;
        }
      i = j - 1;
    }
    while (check > 0){
        nums.pop_back();
        check--;
    }
    return nums.size();  
}

int main() {
vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
  // nums is passed in by reference. (i.e., without making a copy)
int len = 0;

len = removeDuplicates(nums);

cout << "The length is: " << len << endl;

// any modification to nums in your function would be known by the caller.
// using the length returned by your function, it prints the first len elements.
for (int i = 0; i < len; i++) {
    cout << nums[i];
}

  return 0;
}
