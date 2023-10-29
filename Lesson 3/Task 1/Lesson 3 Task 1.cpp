#include <iostream>
class Calculator
{
public:
	double num1 = 0;
    double num2 = 0;
	double add(double num1, double  num2) {
		double a = 0;
		a = (num1 + num2);
		return a;
	};
	double multiply(double num1, double  num2) {
		double a = 0;
		a = (num1 * num2);
		return a;
	};
	double subtract_1_2(double num1, double  num2) {
		double a = 0;
		a = (num1 - num2);
		return a;
	};
	double subtract_2_1(double num1, double  num2) {
		double a = 0;
		a = (num2 - num1);
		return a;
	};
	double divide_1_2(double num1, double  num2) {
		double a = 0;
		a = (num1 / num2);
		return a;
	};
	double divide_2_1(double num1, double  num2)
	{
		double a = 0;
		a = (num2 / num1);
		return a;
	};
	bool set_num1(double num1) {
		bool a;
		a = (num1 != 0);
		return a;
	};
	bool set_num2(double num2) {
		bool a;
		a = (num2 != 0);
		return a;
	};
};


int main()
{
	int a = 0;
	while (a == 0) {
		Calculator c;
		double num1 = 0, num2 = 0;
		int d = 0;
		do{
		std::cout << "Enter first number: ";
		std::cin >> num1;
		bool t = c.set_num1(num1);
		d = t;
		if (t == 0) {
			std::cout << "Invalid input!\n";
		}
		}while (d == 0);

		do {
			std::cout << "Enter second number: ";
			std::cin >> num2;
			bool t = c.set_num2(num2);
			d = t;
			if (t == 0) {
				std::cout << "Invalid input!\n";
			}
		} while (d == 0);
		

		double sum = c.add(num1, num2);
		std::cout << "num1 + num2 = " << sum << "\n";
		double sub12 = c.subtract_1_2(num1, num2);
		std::cout << "num1 - num2 = " << sub12 << "\n";
		double sub21 = c.subtract_2_1(num1, num2);
		std::cout << "num2 - num1 = " << sub21 << "\n";
		double mult = c.multiply(num1, num2);
		std::cout << "num1 * num2 = " << mult << "\n";
		double div12 = c.divide_1_2(num1, num2);
		std::cout << "num1 / num2 = " << div12 << "\n";
		double div21 = c.divide_2_1(num1, num2);
		std::cout << "num2 / num1 = " << div21 << "\n";
		
	}
	return 0;
}


