// Failed first attempt using iteration and vectors.
class Solution {
public:
    bool areAnagram(string str1, string str2) { 
    // Get lengths of both strings 
    int n1 = str1.length(); 
    int n2 = str2.length(); 
  
    // If length of both strings is not same, then they 
    // cannot be anagram 
    if (n1 != n2) 
        return false; 
  
    // Sort both the strings 
    sort(str1.begin(), str1.end()); 
    sort(str2.begin(), str2.end()); 
  
    // Compare sorted strings 
    for (int i = 0; i < n1; i++) 
        if (str1[i] != str2[i]) 
            return false; 
  
    return true; 
}
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector <vector<string>> outPut;
        vector<string> myVector;
        string str1;
        string str2;
        for (int i = 0; i < strs.size(); ++i) {
            myVector.push_back(strs[i]);
            for (int j = i + 1; j <= strs.size() - 1; ++j) {
                str1 = strs[i];
                str2 = strs[j];
                if (areAnagram(str1, str2)){
                    myVector.push_back(strs[j]);
                    strs.erase (strs.begin()+j);
                }
            
            }
            outPut.push_back(myVector);
            myVector.clear();
        }
       return outPut; 
    }
};
