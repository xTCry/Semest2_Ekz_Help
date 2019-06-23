#pragma once
#include "stdafx.h"


int main_test() {
	
	/*
	// 3 Ticket
	int n, a0, h;
	
	cout << "Enter n: "; cin >> n;
	cout << "Enter a0: "; cin >> a0;
	cout << "Enter h: "; cin >> h;	
	
	int *arr = new int[n];
	
	for(int i = 0; i < n; i++) {
		arr[i] = a0 + (i * h);
	}
	
	for(int i = 0; i < n; i++) {
		cout << " * " << arr[i] << endl;
	}
	*/
	
	double sum = 0;
	int r, f;

	cin >> r >> f;
	
	for(int i = 0; i < r; i++) {
		cout << " * " << sum << endl;
		sum += cos(f + i);
	}
	
	cout << sum;
	
	return 0;
}


