#include <iostream>
//合并
void merge(int arr[],int tempArr[],int left,int mid,int right) {
	//左半区第一个未排序元素
	int p_left = left;
	//右半区第一个未排序
	int p_right = mid + 1;
	// 临时数组下标
	int pos = left;

	//合并
	while (p_left<=mid && p_right<=right) {
		if (arr[p_left] > arr[p_right]) { //右半区第一个元素更小
			tempArr[pos] = arr[p_right];
			pos++;
			p_right++;
		}
		else
		{								//左半区第一个元素更小
			tempArr[pos] = arr[p_left];
			p_left++;
			pos++;
		}
	}
	//左半区剩余
	while (p_left<=mid) {
		tempArr[pos++] = arr[p_left++];
	}
	//右半区剩余
	while (p_right<=right) {
		tempArr[pos++] = arr[p_right++];
	}
	//临时数组拷贝
	while(left<=right){
		arr[left] = tempArr[left];
		left++;
	}
}

//划分
void divide(int arr[],int tempArr[],int left,int right) {
	if (right>left) {
		//找中间点
		int mid = (left + right) / 2;
		//递归划分左半区
		divide(arr,tempArr,left,mid);
		//递归划分右半区
		divide(arr, tempArr, mid + 1, right);
		//合并
		merge(arr,tempArr,left,mid,right);
	}
}

//归并排序入口
void MergeSort(int arr[], int len) {
	//首先申请一个临时数组
	int *tempArr = new int[len];
	if (tempArr) {
		
		//调用划分函数
		divide(arr,tempArr,0,len-1);
		delete[] tempArr;
	}
	else
	{
		fprintf(stderr,"分配内存出错\n");
	}
}