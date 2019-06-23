#pragma once
#include "stdafx.h"

int main_15() {
	vector<double> a, b, c; // Даны три вектора разной длины
	bool a_hasNegative, b_hasNegative, c_hasNegative;
	vector<double> sums(3); // суммы квадратов отрицательных чисел
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
			В каких из них сумма квадратов отрицательных чисел имеет наименьшее значение?
			Если в векторе нет отрицательных чисел, выдать соответствующее текстовое сообщение.
	*/
	// a
	a_hasNegative = false;
	for (double el : a) { if (el < 0) { sums[0] += el * el; a_hasNegative = true; } }
	// b
	b_hasNegative = false;
	for (double el : b) { if (el < 0) { sums[1] += el * el; b_hasNegative = true; } }
	// c
	c_hasNegative = false;
	for (double el : c) { if (el < 0) { sums[2] += el * el; c_hasNegative = true; } }
	// ... в векторах:
	if (!a_hasNegative)cout << "Вектор А не содержит отрицательных чисел\n";
	if (!b_hasNegative)cout << "Вектор B не содержит отрицательных чисел\n";
	if (!c_hasNegative)cout << "Вектор C не содержит отрицательных чисел\n";
	cout << "Сумма квадратов отрицательных чисел имеет наименьшее значение в векторах: ";
	if (*min_element(sums.begin(), sums.end()) == sums[0])cout << "A ";
	if (*min_element(sums.begin(), sums.end()) == sums[1])cout << "B ";
	if (*min_element(sums.begin(), sums.end()) == sums[2])cout << "C ";
	if (!a_hasNegative && !b_hasNegative && !c_hasNegative)cout << "все вектора не содержат отрицательных чисел";
	cout << endl;
}
