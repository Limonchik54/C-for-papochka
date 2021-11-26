#include <iostream> 
using namespace std;
int main() {
	setlocale(0, "");
	
	int season = 0;
	cout << "Времена года: " << endl;
	cout << "Лето - 1" << endl;
	cout << "Осень - 2" << endl;
	cout << "Зима - 3" << endl;
	cout << "Весна - 4" << endl;
	cout << "Введите значение: ";
	cin >> season;
	if (season == 1) {
		cout << "Сейчас лето,пейте больше воды и наденьте головной убор";
	}
	else if (season == 2) {
		cout << "Сейчас осень, следует одеться тепло и взять с собой зонт";
	}
	else if (season == 3) {
		cout << "Сейчас зима,следует одеться тепло и согреваться горячим чаем)";
	}
	else if (season == 4) {
		cout << "Сейчас весна, пора надеть резиновые сапожки и худеть к лету :)";
	}

	else {
		cout << "Такого времени года не существует";
	}
	
	bool _; cin >> _;
	return 0;
}
