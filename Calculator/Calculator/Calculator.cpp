//Joshua Spruce
//Basic looped calculator

#include <iostream>

using namespace std;

int main()
{

	char opr;//Operator symbol
	float val1, val2, sum;//values to be entered and sum
	char boot;

	do {
		cout << "Enter operator: +, -, *, /: ";
		cin >> opr; // Asks user to enter desired operator

		switch (opr) {

		case '+'://Addition
			cout << "\nEnter two values: ";
			cin >> val1 >> val2;
			sum = val1 + val2;
			cout << endl << val1 << " + " << val2 << " = " << sum;
			break;

		case '-'://Subtraction
			cout << "\nEnter two values: ";
			cin >> val1 >> val2;
			sum = val1 - val2;
			cout << endl << val1 << " - " << val2 << " = " << sum;
			break;

		case '*'://Multiplication 
			cout << "\nEnter two values: ";
			cin >> val1 >> val2;
			sum = val1 * val2;
			cout << endl << val1 << " * " << val2 << " = " << sum;
			break;

		case '/'://Division
			cout << "\nEnter two values: ";
			cin >> val1 >> val2;
			sum = val1 / val2;
			cout << endl << val1 << " / " << val2 << " = " << sum;
			break;

		default://Error message for inavlid operator
			cout << "Error! Operator is not correct.";
			break;
		}

		cout << "\nWould you like to restart (Y or N):";
		cin >> boot;
	} while (boot == 'y' || boot == 'Y');//loops the calculator

   return 0;
}
