#pragma once
#include "stdafx.h"

int main_1() {
		
	for(int q = 0; q < 3; q++) {
		int len;
		cout << "Длина " << (q+1) << "-ого вектора: "; cin >> len;
		
		double *arr = new double[len];
		int minE = 0,
			maxE = 0;
		
		for(int i = 0; i < len; i++) {
			cin >> arr[i];
			if(arr[i] < arr[minE]) {
				minE = i;
			}
			if(arr[i] > arr[maxE]) {
				maxE = i;
			}
		}		
		
		// Ищем заново
		for(int i = 0; i < len; i++) {
			if(arr[i] < arr[minE]) {
				minE = i;
			}
			if(arr[i] > arr[maxE]) {
				maxE = i;
			}
		}
		
		cout << "В " << (q+1) << "-ом векторе: ";
		
		if(minE == maxE) {
			cout << "Наименьшее и наибольшее равны (" << arr[minE] << ")" << endl;
		}
		else if(minE < maxE) {
			cout << "Наименьшее (" << arr[minE] << ") предшествует наибольшему (" << arr[maxE] << ")" << endl;
		}
		else {
			cout << "Наибольшее (" << arr[maxE] << ") предшествует наименьшему (" << arr[minE] << ")" << endl;
		}
		
	}
		
	return 0;
}
