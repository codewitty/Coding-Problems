class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        stack<int> s;
        vector<int> res;
        
        for (int i = arr.size()-1; i >= 0; --i) {
            int m = arr[i];
            s.push(m);
        }
        int n = 0;
        while (!s.empty() && n <= arr.size()-1){
            if (s.top() != 0) {
                res.push_back(s.top());
                s.pop();
            }
            else {
                res.push_back(0);
                n++;
                if (n <= arr.size()-1)
                  res.push_back(0);
                s.pop();
                
            }
            n++;      
        }
        arr = res;
    }
};
