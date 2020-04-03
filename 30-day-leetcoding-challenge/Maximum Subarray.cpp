class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m = INT_MIN;
        int sum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (sum >= 0) {
                sum = sum + nums[i];
            }
            else
                sum = nums[i];
            m = max(m,sum);
        }
        return m;
    }
};
