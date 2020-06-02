// First solution O(n^2)
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for (int i = 0; i < arr.size(); ++i){
            int max = 0;
            for (int j = i + 1; j < arr.size(); ++j){
                if(arr[j] > max)
                    max = arr[j];
            }
            arr[i] = max;
        }
        arr[arr.size() - 1] = -1;
        return arr; 
    }
};

// Refined solution O(n)

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int max = arr[arr.size()-1];

        // Set last element to -1
        arr[arr.size()-1] = -1;

        for(int i = arr.size()-2; i >= 0; --i){
            int temp = arr[i];
            arr[i] = max;
            if (max < temp){
                max = temp;
            }
        }
        return arr;
    }
};
