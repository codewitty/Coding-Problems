// First Accepted Pass


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int check = 0;
        for (int c = 0; c < nums.size(); ++c){
            if (nums[c] == 0)
                check+=1;
        }
        if (nums.size() == 1 || check == 0){
            return;
        }
        
        int i = 0;
        int j = nums.size() - 1;
        while (nums[i] != 0 && i < nums.size()) {
            i++;
        }
        while (nums[j] == 0 && j > 0 ) {
            j--;
        }
        while (j > i) {
            for (int k = 0; k < nums.size() - 1; k++) {
                if (nums[k] == 0 && nums[k+1] != 0) {
                    int temp = nums[k+1];
                    nums[k+1] = 0;
                    nums[k] = temp;
                }
            }
        i = 0;
        j = nums.size() - 1;
        while (nums[i] != 0 && i < nums.size()) {
            i++;
            }
        while (nums[j] == 0 && j > 0 ) {
            j--;
            }
        }
    }
};

//Optimized solution from geeksforgeeks

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
   int count = 0;  // Count of non-zero elements 
  
    // Traverse the array. If element encountered is non- 
    // zero, then replace the element at index 'count'  
    // with this element 
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) 
            nums[count++] = nums[i]; // here count is  
                                   // incremented
    }
  
    // Now all non-zero elements have been shifted to  
    // front and  'count' is set as index of first 0.  
    // Make all elements 0 from count to end. 
    while (count < nums.size()) 
        nums[count++] = 0; 
    }
};
