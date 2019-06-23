#pragma once
#include "stdafx.h"

int main_1() {
		
	for(int q = 0; q < 3; q++) {
		int len;
		cout << "����� " << (q+1) << "-��� �������: "; cin >> len;
		
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
		
		// ���� ������
		for(int i = 0; i < len; i++) {
			if(arr[i] < arr[minE]) {
				minE = i;
			}
			if(arr[i] > arr[maxE]) {
				maxE = i;
			}
		}
		
		cout << "� " << (q+1) << "-�� �������: ";
		
		if(minE == maxE) {
			cout << "���������� � ���������� ����� (" << arr[minE] << ")" << endl;
		}
		else if(minE < maxE) {
			cout << "���������� (" << arr[minE] << ") ������������ ����������� (" << arr[maxE] << ")" << endl;
		}
		else {
			cout << "���������� (" << arr[maxE] << ") ������������ ����������� (" << arr[minE] << ")" << endl;
		}
		
	}
		
	return 0;
}
