#include <iostream>

using namespace std;

// Array of values, Size of Array
int CompareToMax(int[], int);

int main(int argc, char* argv[]){
	int array[4] = {1,-52,52,10};
	int max = CompareToMax(array,4);
	cout << max;
};
int CompareToMax(int array[], int n){
	int curMax, i;
	/* Make sure that there is at least one element in the array. */
	if (n <= 0)
		return -1;
	/* Set the largest number so far to the first array value. */
	curMax = array[0];

	/* Compare every number with the largest number so far. */
	for (i = 1; i < n; i++) {
		if (array[i] > curMax){
			 curMax = array[i];
		}
	}
	return curMax;
}