#include <iostream>
#include <ctime>
using namespace std;
int main() {
	int UserNumber, RandomNumber, attempts = 10; //attempts (clasic 10)
	srand(time(0));
	RandomNumber = rand() % 100;				//random number generator in range[0;100]
	while (attempts >= 1) {
		cout << "Number of attempts, that left: " << attempts << endl << "Enter your number (від 0-100): ";cin >> UserNumber;   //attempts of guessing
		if (UserNumber == RandomNumber) {
			cout << "You won!!!" << endl;break;						//if you won
		}
		if (UserNumber > RandomNumber) cout << "Number is smaller." << endl;else cout << "Number is bigger." << endl;		//number bigger or smaller than yours
		attempts--;
	}
	if (attempts < 1) cout << "Game over! :( Number was: " << RandomNumber << endl;  //if your attempts are over
}
