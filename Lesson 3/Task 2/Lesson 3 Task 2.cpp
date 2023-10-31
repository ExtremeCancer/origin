#include <iostream>

class Counter {
private:
	int value;
	
public:

	Counter (int value)
	{
		this->value = value;
	}
	void change(int value) {
		this->value = value;
	}
	void increment() {
		value++;
	}

	void decrement() {
		value--;
	}

	int get_value() {
		return value;
	}
};

int main() {
	char choice;
	int initial_value;
	Counter c(0);
	std::cout << "Do you want to specify the initial value for the counter? (y/n): ";
	std::cin >> choice;

	if (choice == 'y') {
		std::cout << "Enter starting value: ";
		std::cin >>  initial_value;;
		 c.change(initial_value);
	}
	else {
		Counter c(1);
	}

	char command;

	do {
		std::cout << "Enter the command: (+/-/=/x): ";
		std::cin >> command;

		switch (command) {
		case '+':
			c.increment();
			break;
		case '-':
			c.decrement();
			break;
		case '=':
			std::cout << "Current counter value: " << c.get_value() << std::endl;
			break;
		case 'x':
			std::cout << "The program is completed." << std::endl;
			break;
		default:
			std::cout << "Invalid command. Please re-enter." << std::endl;
			break;
		}

	} while (command != 'x');

	return 0;
}