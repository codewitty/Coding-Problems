class Solution {
public:
int lastStoneWeight(vector<int>& stones) {
        while (stones.size() > 1) {
            sort(stones.begin(), stones.end());
            int i = *(stones.end() - 1);
            int j = *(stones.end() - 2);
            if (i == j && stones.size() > 2) {
                stones.erase(stones.end() - 1);
                stones.erase(stones.end() - 1);
            }
            else{
                stones[stones.size() - 1] = (i - j);
                stones.erase(stones.end() - 2);
            }
                
        }
        return stones[0];
    }
};
