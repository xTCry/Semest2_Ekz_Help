#pragma once
#include "stdafx.h"

int main_9() {
	vector<double> a, b, c; // Даны три вектора разной длины
	vector<double>sumOfEvenInd(3); // суммы элементов с чётными индексами
	// ввод векторов
#ifndef DEBUG
	for (int i = 0; i < 3; i++) {
        	int length; //длина вектора
        	switch (i) {
        	case 0: // А
                	cout << "Введите длину вектора А: ";
                	cin >> length;
                	a.resize(length);
                	cout << "Введите элементы вектора А:\n";
                	for (int j = 0; j < length; j++) cin >> a[j];
                	break;
        	case 1: // B
                	cout << "Введите длину вектора B: ";
                	cin >> length;
                	b.resize(length);
                	cout << "Введите элементы вектора B:\n";
                	for (int j = 0; j < length; j++) cin >> b[j];
                	break;
        	case 2: // C
                	cout << "Введите длину вектора C: ";
                	cin >> length;
                	c.resize(length);
                	cout << "Введите элементы вектора C:\n";
                	for (int j = 0; j < length; j++) cin >> c[j];
                	break;
        	}
	}
#else
	a = { 1.2,-3.4,5.1,-1.2 };
	b = { -4.5,-3.1,1.6,2.5,-2.1 };
	c = { 0,-4.7,3.6 };
	cout << "A: "; for (double el : a)cout << el << " "; cout << endl;
	cout << "B: "; for (double el : b)cout << el << " "; cout << endl;
	cout << "C: "; for (double el : c)cout << el << " "; cout << endl;
#endif // DEBUG
	/*
        	В каком из векторов сумма элементов с чётными индексами наименьшая?
	*/
	// a
	for (int i = 0; i < a.size(); i++) { if (i % 2 == 0)sumOfEvenInd[0] += a[i]; }
	// b
	for (int i = 0; i < b.size(); i++) { if (i % 2 == 0)sumOfEvenInd[1] += b[i]; }
	// c
	for (int i = 0; i < c.size(); i++) { if (i % 2 == 0)sumOfEvenInd[2] += c[i]; }
	// ... в векторах
	
	cout << "Сумма элементов с чётными индексами наименьшая в векторах: ";
	int minVector = *min_element(sumOfEvenInd.begin(), sumOfEvenInd.end());
	
	if (minVector == sumOfEvenInd[0])cout << "A ";
	if (minVector == sumOfEvenInd[1])cout << "B ";
	if (minVector == sumOfEvenInd[2])cout << "C ";

	return 0;
}

