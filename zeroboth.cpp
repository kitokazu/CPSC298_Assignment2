#include <iostream>
#include <string>
using namespace std;

//Takes in 2 numbers passed by reference and set to 0
void zeroBoth(int& num1, int& num2){
	num1 = 0;
	num2 = 0;

}

int main(int argc, char **argv) {
	//if the user does not enter the command line parameters correctly
	if (argc != 3) {
		cerr << "Error: please enter the value of two numbers as command line parameters" << endl;
	}
	//command line parameters
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	//Calling the function and passing the two numbers as arguments
	zeroBoth(num1, num2);
	//Output of the two numbers after they were set to 0 by reference
	cout << "First num: " << num1 << endl;
	cout << "Second num: " << num2 << endl;

}
