#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    int i = 0;
    for (int j = 1; j < nums.size(); ++j){
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
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
