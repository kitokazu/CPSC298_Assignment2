#include <iostream>
#include <string>
using namespace std;

float userInput(float& length);
void conversion(float feet, float inches, float& meters, float& centi);
void userOutput(float& meters, float& centi);

//function for user input
float userInput(float& length) {
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
void conversion(float feet, float inches, float& meters, float& centi){
	meters = 0; //reset to 0 in case they continue to enter more
	centi = 0;
	meters = (feet * 0.3048) + (inches * 0.0254);
	centi = meters * 0.01;
}

//Output of the values of meters and centimeters
void userOutput(float& meters, float& centi){
	cout << "Length in meters and centimeters: " << endl;
	cout << "Meters: " << meters << endl;
	cout << "Centimeters: " << centi << endl;
}

int main(int argc, char**argv){
	string input = "";
	float feet;
	float inches;
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
