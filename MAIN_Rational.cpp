// MAIN_Rational.cpp

#include <iostream>
#include "Rational.h"

using namespace std;

int main() {

	int a = 0, b = 1;
	Rational F1, F2;

	cout << "Enter the numerator: ";
	cin >> a;

	F1.setNum(a); 

	cout << "Enter the denominator: ";
	cin >> b;

	F1.setDem(b);

	cout << "Enter the numerator: ";
	cin >> a;

	F2.setNum(a);

	cout << "Enter the denominator: ";
	cin >> b;

	F2.setDem(b);

	//Math
	F1.Add(F2);
	F1.Subtract(F2);
	F1.Multiply(F2);
	F1.Divide(F2);
	F1.GCD(F2);

	//Display
	F1.DisplayFract(F1);
	F1.DisplayFloat(F1);

	//Copy Constructor
	Rational F3(F2);

	cout << "\n--COPIED FRACTION--" << endl;
	F3.DisplayFract(F2);

	system("Pause");

	return 0;

} // end main. 14 de marzo de 2017 - SUCCESSFUL!

/*Output:

Enter the numerator: 5
Enter the denominator: 9
Enter the numerator: 10
Enter the denominator: 80
SUM: (5 / 9) + (10 / 80) = (49 / 72)
SUBTRACTION: (5 / 9) - (10 / 80) = (31 / 72)
MULTIPLICATION: (5 / 9) * (10 / 80) = (5 / 72)
DIVISION: (5 / 9) / (10 / 80) = (40 / 9)
The fraction (10 / 80) can be simplified to (1 / 8) using the GCD 10.
DISPLAY FRACTION: 5 / 9
DISPLAY DECIMAL OF FRACTION: 5 / 9 = 0.555556

--COPIED FRACTION--
DISPLAY FRACTION: 10 / 80
Press any key to continue . . .*/