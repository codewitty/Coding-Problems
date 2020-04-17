class Solution {
public:
    bool checkValidString(string s) {
        if (s.empty()){
            return true;
        }
        int lCount = 0;

        for (int i = 0; i < s.length(); ++i) {
           if (s[i] == ')') {
             lCount--;
           }
           else
             lCount++;
          if (lCount < 0)
            return false;
         }
         if (lCount == 0)
            return true;
        lCount = 0;
        for (int i = s.length() - 1; i >= 0; --i) {
           if (s[i] == '(') {
             lCount--;
           }
           else
             lCount++;
          if (lCount < 0)
            return false;
         }
         return true;
        
    }
};
