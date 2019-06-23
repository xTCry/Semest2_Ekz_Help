#pragma once
#include "stdafx.h"

int main_15() {
	vector<double> a, b, c; // ���� ��� ������� ������ �����
	bool a_hasNegative, b_hasNegative, c_hasNegative;
	vector<double> sums(3); // ����� ��������� ������������� �����
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
			� ����� �� ��� ����� ��������� ������������� ����� ����� ���������� ��������?
			���� � ������� ��� ������������� �����, ������ ��������������� ��������� ���������.
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
	// ... � ��������:
	if (!a_hasNegative)cout << "������ � �� �������� ������������� �����\n";
	if (!b_hasNegative)cout << "������ B �� �������� ������������� �����\n";
	if (!c_hasNegative)cout << "������ C �� �������� ������������� �����\n";
	cout << "����� ��������� ������������� ����� ����� ���������� �������� � ��������: ";
	if (*min_element(sums.begin(), sums.end()) == sums[0])cout << "A ";
	if (*min_element(sums.begin(), sums.end()) == sums[1])cout << "B ";
	if (*min_element(sums.begin(), sums.end()) == sums[2])cout << "C ";
	if (!a_hasNegative && !b_hasNegative && !c_hasNegative)cout << "��� ������� �� �������� ������������� �����";
	cout << endl;
}
