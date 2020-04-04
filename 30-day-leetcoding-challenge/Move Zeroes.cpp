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
