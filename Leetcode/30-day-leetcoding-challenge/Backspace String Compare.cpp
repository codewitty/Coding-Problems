// Runtime : 0 ms
// Memory Usage: 6.8 mb

#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool backspaceCompare(string S, string T) {
	// Declare stacks for string processing
        stack <char> s;
        stack <char> t;
	// Declare strings to hold processed input
        string ans1, ans2;
        
	// Loop that process first string input
        for(char const &c: S){
	// Check the string character and ensure the string is not empty
            if (c == '#' && !s.empty())
                s.pop();
			// Add character to stack
            else if (c != '#')
                s.push(c);
        }
	// Add characters from stack to answer string
        while(!s.empty()){
            ans1.push_back(s.top());
            s.pop();
        }
	// Loop that process first string input
        for(char const &d: T){
	// Check the string character and ensure the string is not empty
            if (d == '#' && !t.empty())
                t.pop();
			// Add character to stack
            else if (d != '#')
                t.push(d);
        }
	// Add characters from stack to answer string
        while(!t.empty()){
            ans2.push_back(t.top());
            t.pop();
        }
        return ans1 == ans2;
}

// Driver Code for testing

int main() {
  string s1 = "a##c";
  string s2 = "#a#c";
  
  if (backspaceCompare(s1,s2))
    cout << "BOO YA!!!";
  else
    cout << "wonk wonk";
    
  return 0;
}
