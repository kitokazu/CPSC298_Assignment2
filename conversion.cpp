#include <iostream>
#include <string>
using namespace std;

int userInput(int& length);
void conversion(int feet, int inches, float& meters, float& centi);
void userOutput(float& meters, float& centi);

//function for user input
int userInput(int& length) {
	//While the user input is invalid (not an int)
	while(!(cin >> length)) {
			cout << "Not valid length. ";
			//I found the following two lines off the C++ reference site
			//Without the two lines I had an infite loop
			cin.clear();
    	cin.ignore(100, '\n');
			cout << "Try again: " << endl;
	}
}

//values of feet and inches passed by reference
//meters and centi are passed by reference since we are setting the variables in function
void conversion(int feet, int inches, float& meters, float& centi){
	meters = 0; //reset to 0 in case they continue to enter more
	centi = 0;
	centi = ((feet * 12) + inches) * 2.54; //first convert the length into centimeters
	//while loop converts total centimeters into meters and centimeters
	while (centi >= 100) {
		centi -= 100;
		++meters;
	}
}

//Output of the values of meters and centimeters
void userOutput(float& meters, float& centi){
	cout << "Length in meters and centimeters: " << endl;
	cout << "Meters: " << meters << endl;
	cout << "Centimeters: " << centi << endl;
}

int main(int argc, char**argv){
	string input = "";
	int feet;
	int inches;
	float meters;
	float centi;
	//Code continues to run while the output of the user is not 'exit'
	while(input != "exit") {
		cout << "Enter length in feet and inches" << endl;
		cout << "Feet: ";
		userInput(feet);
		cout << "Inches: ";
		userInput(inches);
		conversion(feet, inches, meters, centi);
		userOutput(meters, centi);
		cout << "type 'exit' to quit. Otherwise, type anything else." << endl;
		cin >> input;
	}
}
