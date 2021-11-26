#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	  

	cout << "[X] Переводчик " << endl << endl;
	cout << "[1] Русские слова " << endl;
	cout << "[2] Английские слова" << endl << endl;
	cout << "[3] Выйти" << endl << endl;

	int(value);
	cout << "Выберите пункт ";
	cin >> value;
	system("cls");
	switch (value)
	{
	case 1:
		cout << "Вы выбрали <Русские слова>" << endl << endl;
		cout << "[1] Дом" << endl;
		cout << "[2] Дорога" << endl;
		cout << "[3] Два" << endl;
		cout << "[4] Яблоко" << endl;
		cout << "[5] Мама" << endl;
		cout << "[6] Брат" << endl;
		cout << "[7] Улица" << endl;
		cout << "[8] Синий" << endl;
		cout << "[9] Солнце" << endl;
		cout << "[10] Собака" << endl;
		cout << "[11] Кошка" << endl;
		cout << "[12] Чашка" << endl;
		cout << "[13] Компьютер" << endl;
		cout << "[14] Преподаватель" << endl; 
		cout << "[15] Студент" << endl << endl;
		cout << "Выберите номер слова: " << endl << endl;
		cin >> value;
		switch (value)
		{
		case 1:
			cout << "Перевод: Дом -> House" << endl;
			break;
		case 2:
			cout << "Перевод: Дорога -> Road" << endl;
			break;
		case 3:
			cout << "Перевод: Два -> Two" << endl;
			break;
		case 4:
			cout << "Перевод: Яблоко -> Apple" << endl;
			break;
		case 5:
			cout << "Перевод: Мама -> Mother" << endl;
			break;
		case 6:
			cout << "Перевод: Брат -> Brother" << endl;
			break;
		case 7:
			cout << "Перевод: Улица -> Street" << endl;
			break;
		case 8:
			cout << "Перевод: Синий -> Blue" << endl;
			break;
		case 9:
			cout << "Перевод: Солнце -> Sun" << endl;
			break;
		case 10:
			cout << "Перевод: Собака -> Dog" << endl;
			break;
		case 11:
			cout << "Перевод: Кошка -> Cat" << endl;
			break;
		case 12:
			cout << "Перевод: Чашка -> Cup" << endl;
			break;
		case 13:
			cout << "Перевод: Компьютер -> Computer" << endl;
			break;
		case 14:
			cout << "Перевод: Преподаватель -> Teacher" << endl;
			break;
		case 15:
			cout << "Перевод: Студент -> Student" << endl << endl;
			break;
		default:
			cout << "Я Вас не понимаю";
			break;
		}
		break;
	case 2:
		system("cls");
		cout << "Вы выбрали <Английские слова>" << endl << endl;
		cout << "[1] House" << endl;
		cout << "[2] Road" << endl;
		cout << "[3] Two" << endl;
		cout << "[4] Apple" << endl;
		cout << "[5] Mother" << endl;
		cout << "[6] Brother" << endl;
		cout << "[7] Street" << endl;
		cout << "[8] Blue" << endl;
		cout << "[9] Sun" << endl;
		cout << "[10] Dog" << endl;
		cout << "[11] Cat" << endl;
		cout << "[12] Cup" << endl;
		cout << "[13] Computer" << endl;
		cout << "[14] Teacher" << endl;
		cout << "[15] Student" << endl << endl;
		cout << "Выберите номер слова: " << endl << endl;
		cin >> value;
		switch (value)
		{
		case 1:
			cout << "Перевод: House -> Дом" << endl;
			break;
		case 2:
			cout << "Перевод: Road -> Дорога" << endl;
			break;
		case 3:
			cout << "Перевод: Two -> Два" << endl;
			break;
		case 4:
			cout << "Перевод: Apple -> Яблоко" << endl;
			break;
		case 5:
			cout << "Перевод: Mother -> Мама" << endl;
			break;
		case 6:
			cout << "Перевод: Brother -> Брат" << endl;
			break;
		case 7:
			cout << "Перевод: Street -> Улица" << endl;
			break;
		case 8:
			cout << "Перевод: Blue -> Синий" << endl;
			break;
		case 9:
			cout << "Перевод: Sun -> Солнце" << endl;
			break;
		case 10:
			cout << "Перевод: Dog -> Собака" << endl;
			break;
		case 11:
			cout << "Перевод: Cat -> Кошка" << endl;
			break;
		case 12:
			cout << "Перевод: Cup -> Чашка" << endl;
			break;
		case 13:
			cout << "Перевод: Computer -> Компьютер" << endl;
			break;
		case 14:
			cout << "Перевод: Teacher -> Преподаватель" << endl;
			break;
		case 15:
			cout << "Перевод: Student -> Студент" << endl << endl;

			break;
		default:
			cout << "Я Вас не понимаю";
			break;
		}

	case 3:
		int _; cin >> _;
		return 0;
		break;
	default:
		cout << "Я Вас не понимаю";
		break;
	}


	int _; cin >> _;
	return 0;
}
