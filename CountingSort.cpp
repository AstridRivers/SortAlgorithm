
//计数排序
void CountingSort(int arr[], int len) {
	//寻找数组最大值
	int max = arr[0];
	for (int i = 1;i < len;i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	//创建计数数组
	int* countArray = new int[max + 1] {};
	if (countArray) {
		//计数数组计数
		for (int i = 0;i <len;i++) {
			countArray[arr[i]]++;
		}
		//创建累加数组
		for (int i = 1;i < max + 1;i++) {
			countArray[i] += countArray[i-1];
		}
		int* temp = new int[len];
		for (int i = 0;i < len;i++) {
			temp[countArray[arr[i]] - 1] = arr[i];
			countArray[arr[i]]--;
		}
		for (int i = 0;i < len;i++) {
			arr[i] = temp[i];
		}
		delete[] countArray;
		delete[] temp;
	}

}