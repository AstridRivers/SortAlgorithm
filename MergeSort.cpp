#include <iostream>
//�ϲ�
void merge(int arr[],int tempArr[],int left,int mid,int right) {
	//�������һ��δ����Ԫ��
	int p_left = left;
	//�Ұ�����һ��δ����
	int p_right = mid + 1;
	// ��ʱ�����±�
	int pos = left;

	//�ϲ�
	while (p_left<=mid && p_right<=right) {
		if (arr[p_left] > arr[p_right]) { //�Ұ�����һ��Ԫ�ظ�С
			tempArr[pos] = arr[p_right];
			pos++;
			p_right++;
		}
		else
		{								//�������һ��Ԫ�ظ�С
			tempArr[pos] = arr[p_left];
			p_left++;
			pos++;
		}
	}
	//�����ʣ��
	while (p_left<=mid) {
		tempArr[pos++] = arr[p_left++];
	}
	//�Ұ���ʣ��
	while (p_right<=right) {
		tempArr[pos++] = arr[p_right++];
	}
	//��ʱ���鿽��
	while(left<=right){
		arr[left] = tempArr[left];
		left++;
	}
}

//����
void divide(int arr[],int tempArr[],int left,int right) {
	if (right>left) {
		//���м��
		int mid = (left + right) / 2;
		//�ݹ黮�������
		divide(arr,tempArr,left,mid);
		//�ݹ黮���Ұ���
		divide(arr, tempArr, mid + 1, right);
		//�ϲ�
		merge(arr,tempArr,left,mid,right);
	}
}

//�鲢�������
void MergeSort(int arr[], int len) {
	//��������һ����ʱ����
	int *tempArr = new int[len];
	if (tempArr) {
		
		//���û��ֺ���
		divide(arr,tempArr,0,len-1);
		delete[] tempArr;
	}
	else
	{
		fprintf(stderr,"�����ڴ����\n");
	}
}