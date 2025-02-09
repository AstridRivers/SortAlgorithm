#include "funcStatement.h"

void BubbleSort(int* arr, int len) {
	for (int i = 0;i < len - 1;i++) {
		for (int j = i;j < len - i - 1;j++) {
			if (arr[i]>arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}