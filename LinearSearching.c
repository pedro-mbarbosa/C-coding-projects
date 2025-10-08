#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == target) {
			return i; // Target found at index i
		}
	}
	return -1; // Target not found
}