#include "stdafx.h"

int main() {
	
	setlocale(LC_ALL, "Rus");
	
	int type = 0;
	
  REPLAY:
	cout << endl << "Enter ticket ID [0(test), 1, 2, 3, 4, 5, 6, 7, 8, 9, 15, 31]: ";	cin >> type;
	
	switch(type) {
		case 0: {
			main_test();
			break;
		}
		case 1: {
			main_1();
			break;
		}
		case 2: {
			main_2();
			break;
		}
		case 3: {
			main_3();
			break;
		}
		case 4: {
			main_4();
			break;
		}
		case 5: {
			main_5();
			break;
		}
		case 6: {
			main_6();
			break;
		}
		case 7: {
			main_7();
			break;
		}
		case 8: {
			main_8();
			break;
		}
		case 9: {
			main_9();
			break;
		}
		case 15: {
			main_15();
			break;
		}
		case 31: {
			main_31();
			break;
		}
		default: {
			cout << "Wrong ID. Try again" << endl;
			return main();
		}
	}
	
	goto REPLAY;
		
	return 0;
}
