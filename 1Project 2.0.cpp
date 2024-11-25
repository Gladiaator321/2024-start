#include <iostream>
#include <ctime>
#include <locale>
#include "Windows.h"
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int UserNumber, RandomNumber, attempts = 10; //attempts (clasic 10)
	srand(time(0));
	RandomNumber = rand() % 100;				//random number generator in range[0;100]
	cout << "Enter your number (â³ä 0-100): ";cin >> UserNumber;
	while (attempts >= 1) {
		if (UserNumber == RandomNumber) {
			cout << "You won!!!" << endl;break;						//if you won
		}
		if (UserNumber > RandomNumber) cout << "Number is smaller." << endl;else cout << "Number is bigger." << endl;		//number bigger or smaller than yours
		cout << "Number of attempts, that left: " << attempts << endl << "Enter your number (â³ä 0-100): ";cin >> UserNumber;   //attempts of guessing
		attempts--;
	}
	if (attempts < 1) cout << "Game over! :( Number was: " << RandomNumber << endl;  //if your attempts are over
}