class Solution {
public:
    int countElements(vector<int>& arr) {
        int count = 0;
        sort(arr.begin(), arr.end());
        if (arr.size() == 1) {
            return 0;
        }
        for (int i = 0; i < arr.size() - 1; ++i){
            for (int j = i + 1; j < arr.size(); ++j) {
                if ((arr[i] + 1) == arr[j]) {
                    count += 1;
                    break;
                }
                    
            }
        }
        return count;
    }
};
