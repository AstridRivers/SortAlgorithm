void ShellSort(int* arr, int len) {
	//ÉèÖÃ¼ä¸ô
	for (int gap = len / 2;gap > 0;gap /= 2) {
		for (int i = gap;i < len;i++) {
			int temp = arr[i];
			int j = i;
			while (j >= gap && arr[j-gap] > temp) {
				arr[j] = arr[j-gap];
				j -= gap;
			}
			arr[j] = temp;
		}
	}
}//Ï£¶ûÅÅĞò