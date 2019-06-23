#pragma once
#include "stdafx.h"

int main_2() {
	setlocale(LC_ALL, "Rus");
	
	int length;
	double A1=0, A2=0,
			B1=0, B2=0,
			C1=0, C2=0;
	bool soGood = false;
	
	// ���� ��������
	// A
	cout << "����� ������� A: "; cin >> length;
	double *a = new double[length];
	cout << "������� �������� ������� A: ";
	for (int i = 0; i < length; ++i) {
		cin >> a[i];
		
		if (a[i] < 0 && A1 == 0)
			A1 = a[i];
		else if (a[i] < 0 && A1 < 0 && A2 == 0)
			A2 = a[i];
	}
	
	if (A1 == 0 && A2 == 0)
		cout << "������������� �������� �����������." << endl;
	else if (A1 == 0 || A2 == 0)
		cout << "� ������� ���� ������������� �������." << endl;
	else soGood = true;
	
	// B
	cout << "����� ������� B: "; cin >> length;
	double *b = new double[length];
	cout << "������� �������� ������� B: ";
	for (int i = 0; i < length; ++i) {
		cin >> b[i];
		
		if (b[i] < 0 && B1 == 0)
			B1 = b[i];
		else if (b[i] < 0 && B1 < 0 && B2 == 0)
			B2 = b[i];
	}
	
	if (B1 == 0 && B2 == 0)
		cout << "������������� �������� �����������." << endl;
	else if (B1 == 0 || B2 == 0)
		cout << "� ������� ���� ������������� �������." << endl;
	else soGood = true;
	
	// C
	cout << "����� ������� C: "; cin >> length;
	double *c = new double[length];
	cout << "������� �������� ������� C: ";
	for (int i = 0; i < length; ++i) {
		cin >> c[i];
		
		if (c[i] < 0 && A1 == 0)
			C1 = c[i];
		else if (c[i] < 0 && C1 < 0 && C2 == 0)
			C2 = c[i];
	}
	
	if (C1 == 0 && C2 == 0)
		cout << "������������� �������� �����������." << endl;
	else if (C1 == 0 || C2 == 0)
		cout << "� ������� ���� ������������� �������." << endl;
	else soGood = true;
	
	// Result
	cout << endl;
	if(soGood && (A1 > A2 || B1 > B2 || C1 > C2)) {
		cout << "� ��������� �������� ������ ������������� ������� ������ ������� �������������� ��������: ";
		if (A1 > A2 && A1 < 0 && A2 < 0)
			cout << " A";
		if (B1 > B2 && B1 < 0 && B2 < 0)
			cout << " B";
		if (C1 > C2 && C1 < 0 && C2 < 0)
			cout << " C";
	}
	else
		cout << "������� �������� �� �������.";
		
	cout << endl;
	
	delete[] a;
	delete[] b;
	delete[] c;
	
	return 0;
}

