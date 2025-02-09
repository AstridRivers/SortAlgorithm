#include "funcStatement.h"
#include <iostream>

void display(const int* arr,int len) {
	for (int i = 0;i < len;i++) {
		std::cout
			<< arr[i]
			<< " ";
	}
	std::cout << std::endl;
}