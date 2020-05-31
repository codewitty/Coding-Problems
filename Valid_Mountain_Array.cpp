class Solution {
public:
	  bool validMountainArray(vector < int > & A) {
	  // Empty vector edge case
	  if (A.size() < 1)
		return false;
	  // Variables
	  int a = 0;
	  int i = 0;
	  // Upward Mountain
	  while (i < A.size() - 1 && A[i] < A[i + 1]) {
		i++;
	  }
	  // Check upward mountain greater than 0
	  if (i == 0)
		return false;
	  // Downward Mountain
	  while (i < A.size() - 1 && A[i] > A[i + 1]) {
		i++;
		a++; // Check downward mountain greater than 0
	  }
	  return (i == A.size() - 1 && a > 0) ? true : false;
	}
};
