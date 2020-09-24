#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
    int j = 1;
    int temp = 0;
    for (int i = 0; i < nums.size()-1; i++){
        while(j < nums.size()){
            if (nums[i] == 0 && nums[j] != 0){
             temp = nums[i];
             nums[i] = nums[j];
             nums[j] = temp;
            }
            j++;
            if(i != 0)
                i++;
        }
    }
}

int main() {
vector<int> nums = {0, 1, 0, 1, 3, 4};
  // nums is passed in by reference. (i.e., without making a copy)

moveZeroes(nums);

// any modification to nums in your function would be known by the caller.
// using the length returned by your function, it prints the first len elements.
for (int i = 0; i < nums.size(); i++) {
    cout << nums[i];
}

  return 0;
}
