#include <iostream>
#include <ctime>
using namespace std;
int main() {
	int UserNumber, RandomNumber;
	char WhatTypeOfGame, OneMoreGame;
start:
	cout << "Do u want to Enter your range? (else range is [1,100]) Y/N: ";cin >> WhatTypeOfGame;

	switch (WhatTypeOfGame) {
	case 'Y': {

		int from, to;
		cout << "Enter range (from): ";cin >> from;
		cout << "Enter range (to): ";cin >> to;
		srand(time(0));
		RandomNumber = rand() % to + from; //RandomNumber generator in range[from;to]
		cout << "Your number:";cin >> UserNumber;
		if (UserNumber == RandomNumber) {
			cout << "You won!!!" << endl;
		}
		else {
			do {
				cout << "Wrong. Enter one more time: ";cin >> UserNumber;
			} while (UserNumber == RandomNumber);
			cout << "You won!!!" << endl;
		}
		break;
	}//end of "range" game
	case 'N': {
		srand(time(0));
		RandomNumber = rand() % 100 + 1; //RandomNumber generator in range [1;100]
		cout << "Your number:";cin >> UserNumber;
		if (UserNumber == RandomNumber) {
			cout << "You won!!!" << endl;
		}
		else {
			do {
				cout << "Wrong. Enter one more time: ";cin >> UserNumber;
			} while (UserNumber == RandomNumber);
			cout << "You won!!!" << endl;
		}
		break;
	}//end of "no range" game

	default: { cout << "Enter correct!" << endl; goto start; }

	}//end of switch
OneMore:
	cout << "One more game? Y/N: "; cin >> OneMoreGame;			//One More Game?
	switch (OneMoreGame) {
	case 'Y': goto start;break;
	case 'N': goto end;break;
	default:goto OneMore;break;
	}
end:
	return 0;
}