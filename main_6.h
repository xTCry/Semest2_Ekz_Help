#pragma once
#include "stdafx.h"

int main_6() {
	
	vector<double> a, b, c;
	bool a_isFit, b_isFit, c_isFit;
	
#ifndef DEBUG
	for (int i = 0; i < 3; i++) {
        	int length;
        	
        	switch (i) {
        	case 0: // ?
                	cout << "Length vect A: ";
                	cin >> length;
                	a.resize(length);
                	cout << "Elements A:\n";
                	for (int j = 0; j < length; j++) cin >> a[j];
                	break;
        	case 1: // B
                	cout << "Length vect B: ";
                	cin >> length;
                	b.resize(length);
                	cout << "Elements B:\n";
                	for (int j = 0; j < length; j++) cin >> b[j];
                	break;
        	case 2: // C
                	cout << "Length vect C: ";
                	cin >> length;
                	c.resize(length);
                	cout << "Elements C:\n";
                	for (int j = 0; j < length; j++) cin >> c[j];
                	break;
        	}
	}
#else
	a = { 1.2, -3.4, 5.1, -1.2 };
	b = { -4.5, -3.1, 1.6, 2.5, -2.1 };
	c = { 0, -4.7, 3.6 };
	cout << "A: "; for (double el : a)cout << el << " "; cout << endl;
	cout << "B: "; for (double el : b)cout << el << " "; cout << endl;
	cout << "C: "; for (double el : c)cout << el << " "; cout << endl;
#endif // DEBUG
	/*
    	(x<0 - negative, x>=0 - positive)
	*/
	// A
	for (int i = 0; i < a.size() - 1; i++) {
        	a_isFit = true;
        	if (!(a[i] < 0 && a[i + 1]>=0 || a[i] >= 0 && a[i + 1] < 0)) {
                	a_isFit = false;
                	break;
        	}
	}
	// B
	for (int i = 0; i < b.size() - 1; i++) {
        	b_isFit = true;
        	if (!(b[i] < 0 && b[i + 1]>=0 || b[i] >= 0 && b[i + 1] < 0)) {
                	b_isFit = false;
                	break;
        	}
	}
	// C
	for (int i = 0; i < c.size() - 1; i++) {
        	c_isFit = true;
        	if (!(c[i] < 0 && c[i + 1]>=0 || c[i] >= 0 && c[i + 1] < 0)) {
                	c_isFit = false;
                	break;
        	}
	}
	// ... ? ????????
	cout << "Every 2 adjacent elements: ";
	if (a_isFit)cout << "A ";
	if (b_isFit)cout << "B ";
	if (c_isFit)cout << "C ";
	if (!a_isFit && !b_isFit && !c_isFit)
		cout << "there are no such vectors }:";
	cout << endl;
	
	return 0;
}

