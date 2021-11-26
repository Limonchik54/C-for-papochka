#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

		cout << "Месяца года: " << endl;
	cout << "1\\Январь//" << endl;
	cout << "2\\Февраль//" << endl;
	cout << "3\\Март//" << endl;
	cout << "4\\Апрель//" << endl;
	cout << "5\\Май//" << endl;
	cout << "6\\Июнь//" << endl;
	cout << "7\\Июль//" << endl;
	cout << "8\\Август//" << endl;
	cout << "9\\Сентябрь//" << endl;
	cout << "10\\Октябрь//" << endl;
	cout << "11\\Ноябрь//" << endl;
	cout << "12\\Декабрь//" << endl << endl;


	int(value);
	cout << "Выберите месяц: ";
	cin >> value ;
	
	switch (value)
	{
	case 1:
		cout << "Вы выбрали  месяц: ";
		cout << "Январь";
		break;
	case 2:
		cout << "Февраль";
		break;
	case 3:
		cout << "Март";
		break;
	case 4:
		cout << "Апрель";
		break;
	case 5:
		cout << "Май";
		break;
	case 6:
		cout << "Июнь";
		break;
	case 7:
		cout << "Июль";
		break;
	case 8:
		cout << "Август";
		break;
	case 9:
		cout << "Сентябрь";
		break;
	case 10:
		cout << "Октябрь";
		break;
	case 11:
		cout << "Ноябрь";
		break;
	case 12:
		cout << "Декабрь";
		break;
	default:
		cout << "Не правильно введен номер месяца!";
		break;
	}

	int _; cin >> _;
	return 0;
}
