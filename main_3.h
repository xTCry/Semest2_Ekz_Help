#pragma once
#include "stdafx.h"

int main_3() {
	
	vector<double> A, B, C; // ���� ��� ������� ������ �����
	int length;//����� �������
	bool  allFit_A, allFit_B, allFit_C; // ��� �������� � ��������� ��������� ������������
	// ���� ��������
	for (int i = 0; i < 3; i++) {
        	switch (i) {
        	case 0: // �
                	cout << "������� ����� ������� �: ";
                	cin >> length;
                	A.resize(length);
                	cout << "������� �������� ������� �:\n";
                	for (int j = 0; j < length; j++) cin >> A[j];
                	break;
        	case 1: // B
                	cout << "������� ����� ������� B: ";
                	cin >> length;
                	B.resize(length);
                	cout << "������� �������� ������� B:\n";
                	for (int j = 0; j < length; j++) cin >> B[j];
                	break;
        	case 2: // C
                	cout << "������� ����� ������� C: ";
                	cin >> length;
                	C.resize(length);
                	cout << "������� �������� ������� C:\n";
                	for (int j = 0; j < length; j++) cin >> C[j];
                	break;
        	}
	}
	// � ����� �������� ��� �������� � ��������� ��������� ������������?
	cout << "�������� � ��������� ��������� ������������ � ��������: ";
	// A
	allFit_A = true;
	for (int i = 0; i < A.size(); i++) {
        	if (A.size() == 1) { allFit_A = false; break; }
        	if(i%2!=0 && A.at(i)>=0){
                	allFit_A = false;
                	break;
        	}
	}
	// B
	allFit_B = true;
	for (int i = 0; i < B.size(); i++) {
        	if (B.size() == 1) { allFit_B = false; break; }
        	if (i % 2 != 0 && B.at(i) >= 0) {
                	allFit_B = false;
                	break;
        	}
	}
	// C
	allFit_C = true;
	for (int i = 0; i < C.size(); i++) {
        	if (C.size() == 1) { allFit_C = false; break; }
        	if (i % 2 != 0 && C.at(i) >= 0) {
                	allFit_C = false;
                	break;
        	}
	}
	// ... � ��������:
	if (allFit_A) cout << "A ";
	if (allFit_B) cout << "B ";
	if (allFit_C) cout << "C ";
	
	return 0;
}

