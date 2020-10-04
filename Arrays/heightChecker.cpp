#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

vector<int> heightChecker(vector<int>& heights) {
    int count = 0;
    int j = 0;
    while (i < heights.size()){
        while(heights[i] < heights[i+1]) {
            i++;
        }
        if(i < heights.size())
            swap(heights[i], heights[i+1])
    }
}

    for (int i = 0; i < heights.size()-1; i++){
        min = i;
        for(int j = i+1; j < heights.size(); j++){
            if(heights[j] < heights[i]){
                min = j;
                swap(&heights[min], &heights[i]);
            }
        }
    }
    return heights;
}

// Driver Code
int main() {
vector<int> heights = {-4, -1, 0, 1, 3, 10};

cout << "Original Array: ";
for (int i = 0; i < heights.size(); i++) {
    cout << heights[i] << " ";
}
heights = sortedSquares(heights);

cout << "\nModified Array: ";
for (int i = 0; i < heights.size(); i++) {
    cout << heights[i] << " ";
}

  return 0;
}
