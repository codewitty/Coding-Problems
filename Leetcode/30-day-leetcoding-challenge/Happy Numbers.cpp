class Solution {
public:
    bool isHappy(int n) {
    int happy = 0;
        int check = 0;
    while (happy != 1 && check < 1000) {
        happy = 0;
        while (n) {
            happy += pow((n % 10),2);
            n = n / 10;
        }
        n = happy;
        check++;
    
    }
    if (check >990) {
        return false;
    }
  return true;      
}
};
