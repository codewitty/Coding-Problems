#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

vector<int> sortedSquares(vector<int>& nums) {
    int min = 0;
    for (int i = 0; i < nums.size(); i++){
        nums[i] = pow(nums[i], 2);
    }

    for (int i = 0; i < nums.size()-1; i++){
        min = i;
        for(int j = i+1; j < nums.size(); j++){
            if(nums[j] < nums[i]){
                min = j;
                swap(&nums[min], &nums[i]);
            }
        }
    }
    return nums;
}

// Driver Code
int main() {
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
