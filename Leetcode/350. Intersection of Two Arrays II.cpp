class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        int counter1 = 0, counter2 = 0;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        while (counter1 < nums1.size() && counter2 < nums2.size()) {
            if (nums1[counter1] == nums2[counter2]) {
                res.push_back(nums1[counter1]);
                ++counter1; ++counter2;
            } 
            else if (nums1[counter1] > nums2[counter2]) {
                ++counter2;
            } 
            else {
                ++counter1;
            }
        }
        return res;
    }
};
