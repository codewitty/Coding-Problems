#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
    int j = 0;
    int temp = 0;
    for (int i = 1; i < nums.size(); i++){
        if (nums[j] == 0 && nums[i] != 0){
         temp = nums[i];
         nums[i] = nums[j];
         nums[j] = temp;
        }
        if(nums[j] != 0)
            j++;
    }
}

int main() {
vector<int> nums = {0, 1, 0, 1, 0, 34, 56, 0, 783, 4};

moveZeroes(nums);

for (int i = 0; i < nums.size(); i++) {
    cout << nums[i];
}

  return 0;
}
