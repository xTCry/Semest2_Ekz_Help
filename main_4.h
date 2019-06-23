#pragma once
#include "stdafx.h"

int main_4() {
	
   	vector<double> A, B, C; // Даны три вектора разной длины
   	vector<double> A0, B0, C0; // отрицательные числа из A,B,C
   	
   	int length; //длина вектора
   	vector<double>::iterator max; // макс. эл-т из отрицательных
   	bool  A_nextZero = false, B_nextZero = false, C_nextZero = false, allNextIsNotZero=true;
   
   	// ввод векторов
   	for (int i = 0; i < 3; i++) {
         	switch (i) {
         	case 0: // А
                	cout << "Введите длину вектора А: ";
                	cin >> length;
                	A.resize(length);
                	cout << "Введите элементы вектора А:\n";
                	for (int j = 0; j < length; j++) cin >> A[j];
                	break;
         	case 1: // B
                	cout << "Введите длину вектора B: ";
                	cin >> length;
                	B.resize(length);
                	cout << "Введите элементы вектора B:\n";
                	for (int j = 0; j < length; j++) cin >> B[j];
                	break;
         	case 2: // C
                	cout << "Введите длину вектора C: ";
                	cin >> length;
                	C.resize(length);
                	cout << "Введите элементы вектора C:\n";
                	for (int j = 0; j < length; j++) cin >> C[j];
                	break;
         	}
   	}
   	
   	/*
         	В каких векторах после наибольшего отрицательного элемента следует нуль?
         	Если в векторе нет отрицательных элементов, выдать соответствующее текстовое сообщение
   	*/
   	// A
   	if (any_of(A.begin(), A.end(), [](double x) { return x < 0; })) { // если есть отрицательные
         	// отрицательные эл-ты
         	for (double i : A) {
                	if (i < 0) A0.push_back(i);
         	}
         	max = max_element(A0.begin(), A0.end());
         	max = find(A.begin(), A.end(), *max);
         	if (*next(max, 1) == 0) { A_nextZero = true; allNextIsNotZero = false; }
   	}
   	else cout << "В векторе А нет отрицательных элементов\n";
  
   	// B
   	if (any_of(B.begin(), B.end(), [](double x) {return x < 0; })) { // если есть отрицательные
         	// отрицательные эл-ты
         	for (double i : B) {
                	if (i < 0) B0.push_back(i);
         	}
         	max = max_element(B0.begin(), B0.end());
         	max = find(B.begin(), B.end(), *max);
         	if (*next(max, 1) == 0) { B_nextZero = true; allNextIsNotZero = false; }
   	}
   	else cout << "В векторе B нет отрицательных элементов\n";
   
   	// C
   	if (any_of(C.begin(), C.end(), [](double x) {return x < 0; })) { // если есть отрицательные
         	// отрицательные эл-ты
         	for (double i : C) {
                	if (i < 0) C0.push_back(i);
         	}
         	max = max_element(C0.begin(), C0.end());
         	max = find(C.begin(), C.end(), *max);
         	if (*next(max, 1) == 0) { C_nextZero = true; allNextIsNotZero = false; }
   	}
   	else cout << "В векторе C нет отрицательных элементов\n";
   	// ... в векторах:
   
   	cout << "После наибольшего отрицательного элемента следует нуль в векторах: ";
   	if (allNextIsNotZero)
	   cout << "таких векторов нету ):\n";
   	else {
         	if (A_nextZero)cout << "A ";
         	if (B_nextZero)cout << "B ";
         	if (C_nextZero)cout << "C ";
   	}
}

