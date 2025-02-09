
void InsertionSort(int* arr, int len) {
	int current{};
	int	preIndex{};
	for (int i = 1;i < len;i++) {
		current = arr[i];
		preIndex = i - 1;
		while (preIndex >= 0 && arr[preIndex] > current) {
			arr[preIndex + 1] = arr[preIndex];
			preIndex--;
		}
		arr[preIndex+1] = current;
	}


	//for (int i = 0;i < len - 1;i++) {
	//	for (int j = i+1;j > 0;j--) {
	//		if (arr[j-1]>arr[j]) {
	//			int temp = arr[j];
	//			arr[j] = arr[j - 1];
	//			arr[j - 1] = temp;
	//		}
	//	}
	//}
}