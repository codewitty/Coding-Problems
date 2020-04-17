// Accepted solution

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


// Attempt with stack
   /*
    bool checkValidString(string s) {
        stack<char> stacks;
        int pCount = 0;
        int aCount = 0;
        while(!s.empty()) {
            if (s[0] == '(' || s[0] == '*') {
                if (s[0] == '(')
                    pCount += 1;
                if (s[0] == '*')
                    aCount += 1;
                stacks.push(s[0]);
                s = s.substr(1, s.size() - 1);
            }
            else if(s[0] == ')' && stacks.top() == '('){
                if (s[0] == ')')
                    pCount--;
                stacks.pop();
                s = s.substr(1, s.size() - 1);
            }
            else {
                s = s.substr(1, s.size() - 1);
                pCount--;
            }
            
        }
        while(!stacks.empty() && (aCount != 0 || pCount != 0)){
            if (stacks.top() == '(')
                aCount--;
            stacks.pop();
        }
        return (stacks.empty());
        */
