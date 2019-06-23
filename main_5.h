#pragma once
#include "stdafx.h"

int main_5() {
    vector<double> a, b, c; // ���� ��� ������� ������ �����
	bool a_has, b_has, c_has; // ���� ������������� ��-�, ������� ��������� �����
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
                	� ����� �������� ��� �������������, ������� ��������� �����, ���������?
	*/
	// "��������" = "�����������" �����
	double check;
	cout << "������� ����������� �����: ";
	cin >> check;
	// ... � ��������:
	cout << "��� �������������, ������� ��������� �����, ��������� � ��������: ";
	// a
	a_has = false;
	for (double el : a) {
        	if (el > 0 && el < check) { a_has = true; break; }
	}
	// b
	b_has = false;
	for (double el : b) {
        	if (el > 0 && el < check) { b_has = true; break; }
	}
	// c
	c_has = false;
	for (double el : c) {
        	if (el > 0 && el < check) { c_has = true; break; }
	}
	 //  ... ��� � ����:
	if (!a_has)cout << "A ";
	if (!b_has)cout << "B ";
	if (!c_has)cout << "C ";
	cout << endl;
	
    return 0;
}

