#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++){
        nums[i] = pow(nums[i], 2);
    }

    int j = 0;
    int temp = 0;
    for (int i = 1; i < nums.size(); i++){
        if (nums[j] % 2 != 0 && nums[i] % 2 == 0){
         temp = nums[i];
         nums[i] = nums[j];
         nums[j] = temp;
         j++;
        }
        if (nums[j] == 0 || nums[j] %2 == 0)
            j++;
    }
    return nums;
}

// Driver Code
int main() {
//vector<int> nums = {0, 0, 1, 1, 5, 6, 8, 5, 9, 67, 3, 1, 2, 4};
vector<int> nums = {-4, -1, 0, 1, 3, 10};

cout << "Original Array: ";
for (int i = 0; i < nums.size(); i++) {
    cout << nums[i] << " ";
}
nums = sortedSquares(nums);

cout << "\nModified Array: ";
for (int i = 0; i < nums.size(); i++) {
    cout << nums[i] << " ";
}

  return 0;
}
