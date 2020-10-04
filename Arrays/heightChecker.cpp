#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int heightChecker(vector<int>& heights) {
    int count = 0;
    int j = 0;
    int i = 0;
    while (i < heights.size()){
        while(i < heights.size() - 1 && heights[i] <= heights[i+1]) {
            i++;
        }
        if(i < heights.size()){
            int minElementIndex = min_element(heights.begin()+i,heights.end()) - heights.begin();
            swap(&heights[i], &heights[minElementIndex]);
            count++;
        }
        if(i == heights.size()-1)
          break;
    }

    return count;
}

// Driver Code
int main() {
vector<int> heights = {1, 1, 4, 2, 1, 3};
cout << heights.size() << endl;

cout << "Original Array: ";
for (int i = 0; i < heights.size(); i++) {
    cout << heights[i] << " ";
}

int count = heightChecker(heights);

cout << "\nModified Array: ";
for (int i = 0; i < heights.size(); i++) {
    cout << heights[i] << " ";
}

cout << "Count is: " << count << endl;
  return 0;
}
