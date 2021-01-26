#include <iostream>
#include <string>
using namespace std;

//Tax function
float addTax(float taxRate, float cost) {
	return (taxRate * cost) + cost;
}

int main(int argc, char **argv){
	//if the user does not enter the command line parameters correctly
	if (argc != 3) {
		cerr << "Error: please enter the tax rate and then price as command line parameters" << endl;
	}
	//command line parameters
	float tax = atoi(argv[1]);
	float price = atoi(argv[2]);
	cout << "Final cost: $" << addTax(tax, price) << endl;
}
