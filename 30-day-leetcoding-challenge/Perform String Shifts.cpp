#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <unordered_map>

using namespace std;

string stringShift(string s, vector < vector < int >> & shift) {
  int toShift = 0;

  for (unsigned int i = 0; i < shift.size(); ++i) {
    vector < int > check = shift[i];
    if (check[0] == 0)
      toShift -= check[1];
    else
      toShift += check[1];
}

if(toShift > 0) {
  while (toShift > 0) {
    char addOn = * (s.end() - 1);
    s.pop_back();
    //s.insert(0,addOn);
    s = addOn + s;
    toShift--;
  }
} else {
  while (toShift < 0) {
    char addOn = * s.begin();
    s.erase(0,1);
    //s.append(addOn);
    s = s + addOn;
    toShift++;
  }
}

return s;

}

int main() {
  vector<vector<int>> shift = {{0,7},{1,7},{1,0},{1,3},{0,3},{0,6},{1,2}};
  string a = "wpdhhcj";
  a = stringShift(a, shift);
  cout << a << endl;
    return 0;
}
