#include "funcStatement.h"

void SelectionSort(int *arr,int len) {
	int minIndex{}, temp{};
	for (int i = 0;i < len - 1;i++) {
		minIndex = i;
		for (int j = i + 1;j < len;j++) {
			if (arr[minIndex]>arr[j]) {
				minIndex = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;
	}
}