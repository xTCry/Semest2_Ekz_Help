#pragma once
#include "stdafx.h"

int main_31() {
	setlocale(LC_ALL, "ru");
	vector<double> a, b, c; // ���� ��� ������� ������ �����
	bool a_isFit, b_isFit, c_isFit;
	// ���� ��������
#ifndef DEBUG
	for (int i = 0; i < 3; i++) {
        	int length; //����� �������
        	switch (i) {
        	case 0: // �
                	cout << "������� ����� ������� �: ";
                	cin >> length;
                	a.resize(length);
                	cout << "������� �������� ������� �:\n";
                	for (int j = 0; j < length; j++) cin >> a[j];
                	break;
        	case 1: // B
                	cout << "������� ����� ������� B: ";
                	cin >> length;
                	b.resize(length);
                	cout << "������� �������� ������� B:\n";
                	for (int j = 0; j < length; j++) cin >> b[j];
                	break;
        	case 2: // C
                	cout << "������� ����� ������� C: ";
                	cin >> length;
                	c.resize(length);
                	cout << "������� �������� ������� C:\n";
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
        	� ����� �������� ��� �������� � ��������� ��������� ������������?
	*/
	// ... � ��������:
	cout << "��� �������� � ��������� ��������� ������������ � ��������: ";
	// a
	a_isFit = true;
	for (int i = 0; i < a.size(); i++) {
        	if (i % 2 != 0 && a[i] >= 0) {
                	a_isFit = false;
                	break;
        	}
	}
	b_isFit = true;
	for (int i = 0; i < b.size(); i++) {
        	if (i % 2 != 0 && b[i] >= 0) {
                	b_isFit = false;
                	break;
        	}
	}
	c_isFit = true;
	for (int i = 0; i < c.size(); i++) {
        	if (i % 2 != 0 && c[i] >= 0) {
                	c_isFit = false;
                	break;
        	}
	}
	//  ... ��� � ����:
	if (a_isFit)cout << "A ";
	if (b_isFit)cout << "B ";
	if (c_isFit)cout << "C ";
	
	return 0;
}

