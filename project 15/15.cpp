#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");

	int choise = -1;
	while (choise != 0) {
		
		switch (choise) {
		case -1: {
			cout << "[+]Лабиринт \n [+]Размер карты: \n [1]15х15 \n [2]20х20\n [3]30х30\n [+]Выретите размер поля\n ";
			cin >> choise;
			break;
		}
		case 1: {
			int arr[15][15] = {
				{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
				{0,0,0,1,1,0,0,0,0,0,0,1,1,1,1},
				{1,1,0,1,1,0,1,1,1,1,1,1,1,1,1},
				{0,1,0,0,0,0,0,0,0,0,0,1,1,1,1},
				{0,0,0,1,1,1,1,1,1,1,0,1,1,1,1},
				{1,0,1,1,1,1,1,1,1,1,0,0,0,1,1},
				{1,0,1,0,0,0,0,0,0,0,0,1,0,1,1},
				{1,0,1,0,1,1,1,1,1,1,1,1,0,0,1},
				{1,0,0,0,1,1,1,0,1,1,1,1,1,1,1},
				{1,1,1,0,0,0,0,0,1,1,1,1,1,1,1},
				{1,1,1,0,1,1,1,1,1,1,1,1,1,1,1},
				{1,1,1,0,0,0,0,0,0,0,1,1,1,1,1},
				{1,1,1,1,1,1,1,1,1,0,0,0,0,0,1},
				{1,1,1,1,1,1,1,1,1,1,1,1,1,0,1},

			};
			for (int i = 0; i < 15; i++) {
				for (int j = 0; j < 15; j++) {
					if (arr[i][j] == 1) {
						cout << "# ";
					}
					else if (arr[i][j] == 0) {
						cout << "  ";
					}
				}
				cout << endl;
			}
			choise = -1;
		}   break;
		case 2: {
			int arr[20][20] = {
				{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
				{0,0,0,1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1},
				{1,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
				{1,1,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1},
				{1,0,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1},
				{1,0,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1},
				{1,0,1,0,0,0,0,0,0,0,0,1,0,1,1,1,1,1,1,1},
				{1,0,1,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,1},
				{1,0,0,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,0,1},
				{1,1,1,0,0,0,0,0,1,1,1,1,1,1,0,0,0,1,0,1},
				{1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1},
				{1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,0,1,0,1},
				{1,1,1,0,1,1,1,1,1,0,0,0,0,0,1,1,0,0,0,1},
				{1,1,1,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1},
				{1,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1},
				{1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
				{1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1},
				{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1},
				{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1},
			};
			for (int i = 0; i < 20; i++) {
				for (int j = 0; j < 20; j++) {
					if (arr[i][j] == 1) {
						cout << "# ";
					}
					else if (arr[i][j] == 0) {
						cout << "  ";
					}
				}
				cout << endl;
			}
			choise = -1;
		}   break;
		case 3: {
			int arr[30][30] = {
				{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
				{0,0,0,1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,1,1},
				{1,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,1,1},
				{1,1,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,1,0,0,0,1,1},
				{1,0,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,1,0,1,1,1,1},
				{1,0,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1,1,0,1,0,0,1,1,1},
				{1,0,1,0,0,0,0,0,0,0,0,1,0,1,1,1,1,1,0,1,0,1,1,1,1},
				{1,0,1,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,1,0,1,1,0,1},
				{1,0,0,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,0,1},
				{1,1,1,0,0,0,0,0,1,1,1,1,1,1,0,0,0,1,0,1,0,0,0,0,1},
				{1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,1,1,1,1},
				{1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,0,1,0,1,1,1,1,1,1},
				{1,1,1,0,1,1,1,1,1,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,1},
				{1,1,1,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,1,1,1},
				{1,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,1,1,1},
				{1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1},
				{1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,1,1,1,1},
				{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1},
				{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1},
			};
			for (int i = 0; i < 30; i++) {
				for (int j = 0; j < 30; j++) {
					if (arr[i][j] == 1) {
						cout << "# ";
					}
					else if (arr[i][j] == 0) {
						cout << "  ";
					}
				}
				cout << endl;
			}
			choise = -1;
		}   break;
		default:
			cout << "Исправь значение и попробуй снова" << endl;
			choise = -1;
			break;
		}
		
}

}