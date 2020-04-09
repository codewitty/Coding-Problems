class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack <char> s;
        stack <char> t;
        string ans1, ans2;
        
        for(char const &c: S){
            if (c == '#' && !s.empty())
                s.pop();
            else if (c != '#')
                s.push(c);
        }
        while(!s.empty()){
            ans1.push_back(s.top());
		    s.pop();
        }
        for(char const &d: T){
            if (d == '#' && !t.empty())
                t.pop();
            else if (d != '#')
                t.push(d);
        }
        while(!t.empty()){
            ans2.push_back(t.top());
		    t.pop();
        }
        return (ans1 == ans2)? true:false;
            
    }
};
