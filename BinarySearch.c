#include <stdio.h>

int binary_search(int arr[], int size, int target) {
	int smallest = 0;
	int biggest = size - 1;
	int middle;
	while (smallest <= biggest) {
		middle = smallest + ((biggest - smallest) / 2);
		if (arr[middle] == target) {
			return middle; // Target found
		}
		else if (arr[middle] < target) {
			smallest = middle + 1; // Search in the right half
		}
		else {
			biggest = middle - 1; // Search in the left half
		}
	}
	return -1; // Target not found
}

