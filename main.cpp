#include <iostream>
#include "funcStatement.h"
#include "globalVari.h"

int main() {
	int arr[] = GLOBAL_ARRAY;
	int len = sizeof(arr) / sizeof(arr[0]);
	//BubbleSort(arr, len);
	//SelectionSort(arr, len);
	display(arr, len);
	//InsertionSort(arr, len);
	//ShellSort(arr, len);
	//MergeSort(arr, len);
	CountingSort(arr, len);
	display(arr,len);
	return 0;
}