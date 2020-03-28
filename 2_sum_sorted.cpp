//Sorted input array

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        int i = 0;
        int j = nums.size()-1;
        while (i < j) {
            if (nums[i] + nums[j] < target){
                i++;
            }
            else if (nums[i] + nums[j] > target){
                j--;
            }
            else {
                answer.push_back(i+1);
                answer.push_back(j+1);
                break;
            }             
        }
        return answer;
    }
};
