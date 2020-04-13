// Taken from https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/529/week-2/3298/

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <unordered_map>

// Final acceptance using unordered map
using namespace std;
int findMaxLength(vector<int>& nums) {
        int res = 0, n = nums.size(), sum = 0;
        unordered_map<int, int> m{{0, -1}};
        for (int i = 0; i < n; ++i) {
            sum += (nums[i] == 1) ? 1 : -1;
            if (m.count(sum)) {
                res = max(res, i - m[sum]);
            } else {
                m[sum] = i;
                cout << "Map" << sum << ": " << m[sum] << endl;
            }
        }
        return res;
    }
/*
First Attempt
int findMaxLength(vector<int>& nums) {
        int res = 0;
        //sort(nums.begin(), nums.end());
        int zCount;
        int oCount;
        int j = 0;
        while (j < nums.size()){
            int i = j;
            zCount = 0;
            oCount = 0;
            while (i < nums.size() && abs(zCount - oCount) < 2) {
                if (nums[i] == 0) {
                    zCount++;
                }
                else
                    oCount++;
                i++;
                j++;
            }
        }
        if (zCount > oCount)
            res = oCount * 2;
        else
            res = zCount * 2;
        return res;
        
    }
    */

int main() {
  vector <int> a = {0,0,0,1,1,1,0};
  cout << findMaxLength(a);
    return 0;
}
