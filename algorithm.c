#include "algorithm.h"

//
// Private
//
void swap(int* xp, int* yp) {
	int tmp = *xp;
	*xp = *yp;
	*yp = tmp;
}
//
// Public
//
void bubble_sort(int *a, int n)
{
	// TODO: bubble sort
	for(int i = 0; i < n - 1; i++) {
		for(int j = 0; j < n - i - 1; j++) {
			if(a[j] > a[j+1])
				swap(&a[j], &a[j+1]);
		}
	}
}

void insertion_sort(int *a, int n)
{
	// TODO: insertion sort
}

void quick_sort(int *a, int n)
{
	// TODO: quick sort
}

bool linear_search(const int *a, int n, int v)
{
	return false; // TODO: linear search
}

bool binary_search(const int *a, int n, int v)
{
	return false; // TODO: binary search
}
