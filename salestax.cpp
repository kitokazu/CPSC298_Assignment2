#include <iostream>
#include <string>
using namespace std;

//Tax function
float addTax(float taxRate, float cost) {
	return (taxRate * cost) + cost;
}

int main(int argc, char **argv){
	float tax;
	float price;
	cout << "Enter tax rate (float)" << endl;
	cin >> tax;
	cout << "Enter amount before price (price)" << endl;
	cin >> price;
	//Takes the tax rate and price and calls the function using the inputs as arguments
	cout << "Final cost: $" << addTax(tax, price) << endl;
}
