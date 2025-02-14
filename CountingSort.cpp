
//��������
void CountingSort(int arr[], int len) {
	//Ѱ���������ֵ
	int max = arr[0];
	for (int i = 1;i < len;i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	//������������
	int* countArray = new int[max + 1] {};
	if (countArray) {
		//�����������
		for (int i = 0;i <len;i++) {
			countArray[arr[i]]++;
		}
		//�����ۼ�����
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