#include <iostream>
#include <cmath>

using namespace std;

double sum(double num1, double num2, char operation) {

	if (operation == '/' && num2 == 0) return 0;

	switch (operation) {
	case '+': return num1 + num2;
	case '/': return num1 / num2;
	case '-': return num1 - num2;
	case '*': return num1 * num2;
	case '^': return (num1 + num2) / 2;
	case '$': return (num1 - num2) / 5;
	case '@': return (num1 * num2) / 3;
	case '!': return (num1 / num2) * 5;
	default: return 0;
	}
}

int main() {
	setlocale(0, "");
	
	
	cout << "[+]Введите первое число: ";
	int num1;
	cin >> num1;

	cout << "[+]Введите второе число: ";
	int num2;
	cin >> num2;

	cout << "\n[+](Сложение)\n";
	cout << "[/](Деление)\n";
	cout << "[-](Вычитание)\n";
	cout << "[*](Умножение)\n";
	cout << "[^]((num1+num2)/2) \n";
	cout << "[$]((num1 - num2) / 5)\n";
	cout << "[@]((num1 * num2) / 3) \n";
	cout << "[!]((num1 / num2) * 5) \n\n";
	cout << "[+]Введите действие: ";
	char operation;
	cin >> operation;

	cout << "[+]Результат : " << sum(num1, num2, operation) << endl;

	int _;cin >> _;
	return 0;
}


