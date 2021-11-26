#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	
	int number1;
	cout << "Введите первое число" << endl;
	cin >> number1;
	cout << "Ваше первое число: " << number1 << endl;
	int number2;
	cout << "Введите второе число" << endl;
	cin >> number2;
	cout << "Ваше второе число: " << number2 << endl;
	cout << "Выберите операцию: +, -, *, /, %" << endl;
	char operation;
	cin >> operation;

	double result = 1;

	if (operation == '+') {
		result = number1 + number2;
		cout << "Результат: " << number1 << " + " << number2 << " = " << result;
	}

	else if (operation == '-') {
		result = number1 - number2;
		cout << "Результат: " << number1 << " - " << number2 << " = " << result;
	}

	else if (operation == '*') {
		result = number1 * number2;
		cout << "Результат: " << number1 << " * " << number2 << " = " << result;
	}

	else if (operation == '/') {
		if (number2 == 0) {
			cout << "Делить на ноль запрещено!!!" << endl;
			return 0;
		}
		result = number1 / number2;
		cout << "Результат: " << number1 << " / " << number2 << " = " << result;
	}

	else if (operation == '%') {
		result = number1 % number2;
		cout << "Результат: " << number1 << " % " << number2 << " = " << result;
	}

	else {
		cout << "Выполнить работу невозможно";
	}

	int _; cin >> _;
	return 0;
	
}
