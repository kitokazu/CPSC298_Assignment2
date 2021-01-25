#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv) {
	int numberArray [10];
	int count = 0; //variable to store how many values are in the array
	cout << "Input up to 10 nonnegative numbers" << endl;
	cout << "Enter a negative number to stop" << endl;
	//User has the choice of entering up to 10 numbers
	//Stops when it reaches 10 or user enters negative number
	for (int i = 0; i < 10; ++i) {
		int userInput;
		cin >> userInput;
		//checks if the input is negative
		if (userInput > 0) {
			numberArray[i] = userInput;
			++count;
		} else {
			break;
		}
	}
	cout << "List of inputted numbers: " << endl;
	//outputs the numbers in the array
	for (int i = 0; i < count; ++i){
		cout << numberArray[i] << endl;
	}

}
