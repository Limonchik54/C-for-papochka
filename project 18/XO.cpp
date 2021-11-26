#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	setlocale(0, "");
	string size = "3x3", color = "\x1b[0m", symb = "X";
	short gameActive = 1, choise = 0;
	while (gameActive == 1) {
		switch (choise)
		{
		case 0: {
			cout << "[+]Меню\n";
			cout << "[1]Начало игры\n";
			cout << "[2]Настройки\n";
			cout << "[3]Правила\n";
			cout << "[4]Выход\n";
			cout << "[-]Введите число: ";
			cin >> choise;
			break;

		}
		case 1: {
			short mode = 0;
			system("cls");
			while (mode != 3) {
				cout << "Выберите режим игры\n";
				cout << "[1]Одиночная\n";
				cout << "[2]Два игрока\n";
				cout << "[3]Выход\n";
				cout << "[-]Введите число: ";
				cin >> mode;
				switch (mode) {
				case 1: {
					if (size == "3x3") {
						string map[3][3] = { {" "," "," "},{" "," "," "},{" "," "," "} }, inp;
						system("cls");
						short move;
						if (symb == "X") {
							move = 1;
						}
						else {
							move = 2;
						}
						while (inp != "0") {
							cout << "[+]Игра\n";
							cout << "[0]Выход\n";
							cout << "  1   2   3\n";
							cout << "A " + color + map[0][0] + "\x1b[0m | " + color + map[0][1] + "\x1b[0m | " + color + map[0][2] + "\x1b[0m |\n";
							cout << " ---|---|---\n";
							cout << "B " + color + map[1][0] + "\x1b[0m | " + color + map[1][1] + "\x1b[0m | " + color + map[1][2] + "\x1b[0m |\n";
							cout << " ---|---|---\n";
							cout << "C " + color + map[2][0] + "\x1b[0m | " + color + map[2][1] + "\x1b[0m | " + color + map[2][2] + "\x1b[0m |\n";
							if (move == 1) {
								cout << "Введите координату (например: 1C): ";
								cin >> inp;
								if (inp == "0") {
									choise = 0, mode = 3;
									system("cls");
								}
								else if (inp == "1A") {
									system("cls");
									if (map[0][0] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[0][0] = symb;
										move = 2;
									}
								}
								else if (inp == "2A") {
									system("cls");
									if (map[0][1] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[0][1] = symb;
										move = 2;
									}
								}
								else if (inp == "3A") {
									system("cls");
									if (map[0][2] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[0][2] = symb;
										move = 2;
									}

								}
								else if (inp == "1B") {
									system("cls");
									if (map[1][0] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[1][0] = symb;
										move = 2;
									}
								}
								else if (inp == "2B") {
									system("cls");
									if (map[1][1] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[1][1] = symb;
										move = 2;
									}
								}
								else if (inp == "3B") {
									system("cls");
									if (map[1][2] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[1][2] = symb;
										move = 2;
									}
								}
								else if (inp == "1C") {
									system("cls");
									if (map[2][0] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[2][0] = symb;
										move = 2;
									}
								}
								else if (inp == "2C") {
									system("cls");
									if (map[2][1] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}

									else {
										map[2][1] = symb;
										move = 2;
									}
								}
								else if (inp == "3C") {
									system("cls");
									if (map[2][2] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[2][2] = symb;
										move = 2;
									}
								}
								else {
									cout << "\nИсправьте данные и попробуйте снова\n";
								}
								for (short indexY = 0; indexY < 3; indexY++) {
									if (map[indexY][0] == map[indexY][1] && map[indexY][1] == map[indexY][2] && map[indexY][0] != " ") {
										choise = 0, mode = 3, inp = "0", move = 1;
										cout << "Победил игрок " + map[indexY][0] << endl;
									}
								}
								for (short indexX = 0; indexX < 3; indexX++) {
									if (map[0][indexX] == map[1][indexX] && map[0][indexX] == map[2][indexX] && map[0][indexX] != " ") {
										choise = 0, mode = 3, inp = "0", move = 1;
										cout << "Победил игрок " + map[0][indexX] << endl;
									}
								}
								if ((map[0][0] == map[1][1] && map[0][0] == map[2][2] || map[2][0] == map[1][1] && map[1][1] == map[0][2]) && map[1][1] != " ") {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[1][1] << endl;
								}
							}
							if (move == 2) {
								short emptyCount = 0;
								for (short indY = 0; indY < 3; indY++) {
									for (short indX = 0; indX < 3; indX++) {
										if (map[indY][indX] == " ") emptyCount++;
									}
								}
								if (emptyCount == 0) {
									choise = 0, mode = 3, inp = "0";
									cout << "Ничья!\n";
								}
								else {
									move = 3;
								}
							}
							if (move == 3) {
								short x, y, step = 0;
								do
								{
									x = rand() % 3;
									y = rand() % 3;
									if (map[y][x] == " ") {
										step = 1;
										if (symb == "X") {
											map[y][x] = "O";
										}
										else {
											map[y][x] = "X";
										}
									}
								} while (step == 0);
								move = 4;
								system("cls");
								for (short indexY = 0; indexY < 3; indexY++) {
									if (map[indexY][0] == map[indexY][1] && map[indexY][1] == map[indexY][2] && map[indexY][0] != " ") {
										choise = 0, mode = 3, inp = "0";
										cout << "Победил игрок " + map[indexY][0] << endl;
									}
								}
								for (short indexX = 0; indexX < 3; indexX++) {
									if (map[0][indexX] == map[1][indexX] && map[0][indexX] == map[2][indexX] && map[0][indexX] != " ") {
										choise = 0, mode = 3, inp = "0";
										cout << "Победил игрок " + map[0][indexX] << endl;
									}
								}
								if ((map[0][0] == map[1][1] && map[0][0] == map[2][2] || map[2][0] == map[1][1] && map[1][1] == map[0][2]) && map[1][1] != " ") {
									choise = 0, mode = 3, inp = "0";
									cout << "Победил игрок " + map[1][1] << endl;
								}
							}
							if (move == 4) {
								short emptyCount = 0;
								for (short indY = 0; indY < 3; indY++) {
									for (short indX = 0; indX < 3; indX++) {
										if (map[indY][indX] == " ") emptyCount++;
									}
								}
								if (emptyCount == 0) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Ничья!\n";
								}
								else {
									move = 1;
								}
							}
						}
					}
					else if (size == "4x4") {

						string map[4][4] = { {" "," "," "," "},{" "," "," "," "},{" "," "," "," "},{" "," "," "," "} }, inp;
						system("cls");
						short move;
						if (symb == "X") {
							move = 1;
						}
						else {
							move = 2;
						}
						while (inp != "0") {
							cout << "[+]Игра\n";
							cout << "[0]Выход\n";
							cout << "  1   2   3   4\n";
							cout << "A " + color + map[0][0] + "\x1b[0m | " + color + map[0][1] + "\x1b[0m | " + color + map[0][2] + "\x1b[0m | " + color + map[0][3] + "\x1b[0m\n";
							cout << " ---|---|---|---\n";
							cout << "B " + color + map[1][0] + "\x1b[0m | " + color + map[1][1] + "\x1b[0m | " + color + map[1][2] + "\x1b[0m | " + color + map[1][3] + "\x1b[0m\n";
							cout << " ---|---|---|---\n";
							cout << "C " + color + map[2][0] + "\x1b[0m | " + color + map[2][1] + "\x1b[0m | " + color + map[2][2] + "\x1b[0m | " + color + map[2][3] + "\x1b[0m\n";
							cout << " ---|---|---|---\n";
							cout << "D " + color + map[3][0] + "\x1b[0m | " + color + map[3][1] + "\x1b[0m | " + color + map[3][2] + "\x1b[0m | " + color + map[3][3] + "\x1b[0m\n";
							if (move == 1) {
								cout << "Введите координату (например: 1C): ";
								cin >> inp;
								if (inp == "0") {
									choise = 0, mode = 3;
									system("cls");
								}
								else if (inp == "1A") {
									system("cls");
									if (map[0][0] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[0][0] = symb;
										move = 2;
									}
								}
								else if (inp == "2A") {
									system("cls");
									if (map[0][1] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[0][1] = symb;
										move = 2;
									}
								}
								else if (inp == "3A") {
									system("cls");
									if (map[0][2] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[0][2] = symb;
										move = 2;
									}

								}
								else if (inp == "4A") {
									system("cls");
									if (map[0][3] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[0][3] = symb;
										move = 2;
									}

								}
								else if (inp == "1B") {
									system("cls");
									if (map[1][0] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[1][0] = symb;
										move = 2;
									}
								}
								else if (inp == "2B") {
									system("cls");
									if (map[1][1] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[1][1] = symb;
										move = 2;
									}
								}
								else if (inp == "3B") {
									system("cls");
									if (map[1][2] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[1][2] = symb;
										move = 2;
									}
								}
								else if (inp == "4B") {
									system("cls");
									if (map[1][3] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[1][3] = symb;
										move = 2;
									}
								}
								else if (inp == "1C") {
									system("cls");
									if (map[2][0] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[2][0] = symb;
										move = 2;
									}
								}
								else if (inp == "2C") {
									system("cls");
									if (map[2][1] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}

									else {
										map[2][1] = symb;
										move = 2;
									}
								}
								else if (inp == "3C") {
									system("cls");
									if (map[2][2] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[2][2] = symb;
										move = 2;
									}
								}
								else if (inp == "4C") {
									system("cls");
									if (map[2][3] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[2][3] = symb;
										move = 2;
									}
								}
								else if (inp == "1D") {
									system("cls");
									if (map[3][0] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[3][0] = symb;
										move = 2;
									}
								}
								else if (inp == "2D") {
									system("cls");
									if (map[3][1] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}

									else {
										map[3][1] = symb;
										move = 2;
									}
								}
								else if (inp == "3D") {
									system("cls");
									if (map[3][2] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[3][2] = symb;
										move = 2;
									}
								}
								else if (inp == "4D") {
									system("cls");
									if (map[3][3] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[3][3] = symb;
										move = 2;
									}
								}

								else {
									cout << "\nИсправьте данные и попробуйте снова\n";
								}
								for (short indexY = 0; indexY < 4; indexY++) {
									if (
										(
											(map[indexY][0] == map[indexY][1] && map[indexY][1] == map[indexY][2])
											||
											(map[indexY][3] == map[indexY][1] && map[indexY][1] == map[indexY][2])
											)
										&&
										map[indexY][2] != " "
										) {
										choise = 0, mode = 3, inp = "0", move = 1;
										cout << "Победил игрок " + map[indexY][2] << endl;
									}
								}
								for (short indexX = 0; indexX < 4; indexX++) {
									if (
										(
											(map[0][indexX] == map[1][indexX] && map[1][indexX] == map[2][indexX])
											||
											(map[3][indexX] == map[1][indexX] && map[1][indexX] == map[2][indexX])
											)
										&&
										map[2][indexX] != " "
										) {
										choise = 0, mode = 3, inp = "0", move = 1;
										cout << "Победил игрок " + map[2][indexX] << endl;
									}
								}
								if (
									(
										map[0][0] == map[1][1] && map[0][0] == map[2][2]
										||
										map[2][0] == map[1][1] && map[1][1] == map[0][2]
										)
									&&
									map[1][1] != " "
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[1][1] << endl;
								}
								else if (
									(
										(
											map[0][1] == map[1][2] && map[2][3] == map[1][2]
											||
											map[0][3] == map[1][2] && map[2][1] == map[1][2]
											)
										&&
										map[1][2] != " "
										)
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[1][2] << endl;
								}
								else if (
									(
										(
											map[1][0] == map[2][1] && map[2][1] == map[3][2]
											||
											map[3][0] == map[2][1] && map[2][1] == map[1][2]
											)
										&& map[2][1] != " "
										)
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[2][1] << endl;
								}
								else if (
									(
										(
											map[1][1] == map[2][2] && map[2][2] == map[3][3]
											||
											map[3][1] == map[2][2] && map[2][2] == map[1][3]
											)
										&&
										map[2][2] != " "
										)
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[2][2] << endl;
								}
							}
							if (move == 2) {
								short emptyCount = 0;
								for (short indY = 0; indY < 4; indY++) {
									for (short indX = 0; indX < 4; indX++) {
										if (map[indY][indX] == " ") emptyCount++;
									}
								}
								if (emptyCount == 0) {
									choise = 0, mode = 3, inp = "0";
									cout << "Ничья!\n";
								}
								else {
									move = 3;
								}
							}
							if (move == 3) {
								short x, y, step = 0;
								do
								{
									x = rand() % 4;
									y = rand() % 4;
									if (map[y][x] == " ") {
										step = 1;
										if (symb == "X") {
											map[y][x] = "O";
										}
										else {
											map[y][x] = "X";
										}
									}
								} while (step == 0);
								move = 4;
								system("cls");
								for (short indexY = 0; indexY < 4; indexY++) {
									if (
										(
											(map[indexY][0] == map[indexY][1] && map[indexY][1] == map[indexY][2])
											||
											(map[indexY][3] == map[indexY][1] && map[indexY][1] == map[indexY][2])
											)
										&&
										map[indexY][2] != " "
										) {
										choise = 0, mode = 3, inp = "0", move = 1;
										cout << "Победил игрок " + map[indexY][2] << endl;
									}
								}
								for (short indexX = 0; indexX < 4; indexX++) {
									if (
										(
											(map[0][indexX] == map[1][indexX] && map[1][indexX] == map[2][indexX])
											||
											(map[3][indexX] == map[1][indexX] && map[1][indexX] == map[2][indexX])
											)
										&&
										map[2][indexX] != " "
										) {
										choise = 0, mode = 3, inp = "0", move = 1;
										cout << "Победил игрок " + map[2][indexX] << endl;
									}
								}
								if (
									(
										map[0][0] == map[1][1] && map[0][0] == map[2][2]
										||
										map[2][0] == map[1][1] && map[1][1] == map[0][2]
										)
									&&
									map[1][1] != " "
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[1][1] << endl;
								}
								else if (
									(
										(
											map[0][1] == map[1][2] && map[2][3] == map[1][2]
											||
											map[0][3] == map[1][2] && map[2][1] == map[1][2]
											)
										&&
										map[1][2] != " "
										)
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[1][2] << endl;
								}
								else if (
									(
										(
											map[1][0] == map[2][1] && map[2][1] == map[3][2]
											||
											map[3][0] == map[2][1] && map[2][1] == map[1][2]
											)
										&& map[2][1] != " "
										)
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[2][1] << endl;
								}
								else if (
									(
										(
											map[1][1] == map[2][2] && map[2][2] == map[3][3]
											||
											map[3][1] == map[2][2] && map[2][2] == map[1][3]
											)
										&&
										map[2][2] != " "
										)
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[2][2] << endl;
								}
							}
							if (move == 4) {
								short emptyCount = 0;
								for (short indY = 0; indY < 4; indY++) {
									for (short indX = 0; indX < 4; indX++) {
										if (map[indY][indX] == " ") emptyCount++;
									}
								}
								if (emptyCount == 0) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Ничья!\n";
								}
								else {
									move = 1;
								}
							}
						}
					}
					else if (size == "5x5") {

						string map[5][5] = { {" "," "," "," "," "},{" "," "," "," "," "},{" "," "," "," "," "},{" "," "," "," "," "},{" "," "," "," "," "} }, inp;
						system("cls");
						short move;
						if (symb == "X") {
							move = 1;
						}
						else {
							move = 2;
						}
						while (inp != "0") {
							cout << "[+]Игра\n";
							cout << "[0]Выход\n";
							cout << "  1   2   3   4   5\n";
							cout << "A " + color + map[0][0] + "\x1b[0m | " + color + map[0][1] + "\x1b[0m | " + color + map[0][2] + "\x1b[0m | " + color + map[0][3] + "\x1b[0m | " + color + map[0][4] + "\x1b[0m\n";
							cout << " ---|---|---|---|---\n";
							cout << "B " + color + map[1][0] + "\x1b[0m | " + color + map[1][1] + "\x1b[0m | " + color + map[1][2] + "\x1b[0m | " + color + map[1][3] + "\x1b[0m | " + color + map[1][4] + "\x1b[0m\n";
							cout << " ---|---|---|---|---\n";
							cout << "C " + color + map[2][0] + "\x1b[0m | " + color + map[2][1] + "\x1b[0m | " + color + map[2][2] + "\x1b[0m | " + color + map[2][3] + "\x1b[0m | " + color + map[2][4] + "\x1b[0m\n";
							cout << " ---|---|---|---|---\n";
							cout << "D " + color + map[3][0] + "\x1b[0m | " + color + map[3][1] + "\x1b[0m | " + color + map[3][2] + "\x1b[0m | " + color + map[3][3] + "\x1b[0m | " + color + map[3][4] + "\x1b[0m\n";
							cout << " ---|---|---|---|---\n";
							cout << "E " + color + map[4][0] + "\x1b[0m | " + color + map[4][1] + "\x1b[0m | " + color + map[4][2] + "\x1b[0m | " + color + map[4][3] + "\x1b[0m | " + color + map[4][4] + "\x1b[0m\n";
							if (move == 1) {
								cout << "Введите координату (например: 1C): ";
								cin >> inp;
								if (inp == "0") {
									choise = 0, mode = 3;
									system("cls");
								}
								else if (inp == "1A") {
									system("cls");
									if (map[0][0] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[0][0] = symb;
										move = 2;
									}
								}
								else if (inp == "2A") {
									system("cls");
									if (map[0][1] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[0][1] = symb;
										move = 2;
									}
								}
								else if (inp == "3A") {
									system("cls");
									if (map[0][2] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[0][2] = symb;
										move = 2;
									}
								}
								else if (inp == "4A") {
									system("cls");
									if (map[0][3] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[0][3] = symb;
										move = 2;
									}
								}
								else if (inp == "5A") {
									system("cls");
									if (map[0][4] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[0][4] = symb;
										move = 2;
									}
								}
								else if (inp == "1B") {
									system("cls");
									if (map[1][0] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[1][0] = symb;
										move = 2;
									}
								}
								else if (inp == "2B") {
									system("cls");
									if (map[1][1] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[1][1] = symb;
										move = 2;
									}
								}
								else if (inp == "3B") {
									system("cls");
									if (map[1][2] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[1][2] = symb;
										move = 2;
									}
								}
								else if (inp == "4B") {
									system("cls");
									if (map[1][3] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[1][3] = symb;
										move = 2;
									}
								}
								else if (inp == "5B") {
									system("cls");
									if (map[1][4] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[1][4] = symb;
										move = 2;
									}
								}
								else if (inp == "1C") {
									system("cls");
									if (map[2][0] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[2][0] = symb;
										move = 2;
									}
								}
								else if (inp == "2C") {
									system("cls");
									if (map[2][1] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}

									else {
										map[2][1] = symb;
										move = 2;
									}
								}
								else if (inp == "3C") {
									system("cls");
									if (map[2][2] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[2][2] = symb;
										move = 2;
									}
								}
								else if (inp == "4C") {
									system("cls");
									if (map[2][3] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[2][3] = symb;
										move = 2;
									}
								}
								else if (inp == "5C") {
									system("cls");
									if (map[2][4] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[2][4] = symb;
										move = 2;
									}
								}
								else if (inp == "1D") {
									system("cls");
									if (map[3][0] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[3][0] = symb;
										move = 2;
									}
								}
								else if (inp == "2D") {
									system("cls");
									if (map[3][1] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}

									else {
										map[3][1] = symb;
										move = 2;
									}
								}
								else if (inp == "3D") {
									system("cls");
									if (map[3][2] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[3][2] = symb;
										move = 2;
									}
								}
								else if (inp == "4D") {
									system("cls");
									if (map[3][3] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[3][3] = symb;
										move = 2;
									}
								}
								else if (inp == "5D") {
									system("cls");
									if (map[3][4] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[3][4] = symb;
										move = 2;
									}
								}
								else if (inp == "1E") {
									system("cls");
									if (map[4][0] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[4][0] = symb;
										move = 2;
									}
								}
								else if (inp == "2E") {
									system("cls");
									if (map[4][1] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}

									else {
										map[4][1] = symb;
										move = 2;
									}
								}
								else if (inp == "3E") {
									system("cls");
									if (map[4][2] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[4][2] = symb;
										move = 2;
									}
								}
								else if (inp == "4E") {
									system("cls");
									if (map[4][3] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[4][3] = symb;
										move = 2;
									}
								}
								else if (inp == "5E") {
									system("cls");
									if (map[4][4] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[4][4] = symb;
										move = 2;
									}
								}
								else {
									cout << "\nИсправьте данные и попробуйте снова\n";
								}
								for (short indexY = 0; indexY < 5; indexY++) {
									if (
										(
											(map[indexY][0] == map[indexY][1] && map[indexY][1] == map[indexY][2])
											||
											(map[indexY][3] == map[indexY][1] && map[indexY][1] == map[indexY][2])
											||
											(map[indexY][4] == map[indexY][3] && map[indexY][3] == map[indexY][2])
											)
										&&
										map[indexY][2] != " "
										) {
										choise = 0, mode = 3, inp = "0", move = 1;
										cout << "Победил игрок " + map[indexY][2] << endl;
									}
								}
								for (short indexX = 0; indexX < 5; indexX++) {
									if (
										(
											(map[0][indexX] == map[1][indexX] && map[1][indexX] == map[2][indexX])
											||
											(map[3][indexX] == map[1][indexX] && map[1][indexX] == map[2][indexX])
											||
											(map[3][indexX] == map[4][indexX] && map[4][indexX] == map[2][indexX])
											)
										&&
										map[2][indexX] != " "
										) {
										choise = 0, mode = 3, inp = "0", move = 1;
										cout << "Победил игрок " + map[2][indexX] << endl;
									}
								}
								if (
									(
										map[0][0] == map[1][1] && map[0][0] == map[2][2]
										||
										map[2][0] == map[1][1] && map[1][1] == map[0][2]
										)
									&&
									map[1][1] != " "
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[1][1] << endl;
								}
								else if (
									(
										(
											map[0][1] == map[1][2] && map[2][3] == map[1][2]
											||
											map[0][3] == map[1][2] && map[2][1] == map[1][2]
											)
										&&
										map[1][2] != " "
										)
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[1][2] << endl;
								}
								else if (
									(
										(
											map[1][0] == map[2][1] && map[2][1] == map[3][2]
											||
											map[3][0] == map[2][1] && map[2][1] == map[1][2]
											)
										&& map[2][1] != " "
										)
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[2][1] << endl;
								}
								else if (
									(
										(
											map[1][1] == map[2][2] && map[2][2] == map[3][3]
											||
											map[3][1] == map[2][2] && map[2][2] == map[1][3]
											)
										&&
										map[2][2] != " "
										)
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[2][2] << endl;
								}
								else if (
									(
										map[0][4] == map[1][3] && map[1][3] == map[2][2]
										||
										map[0][2] == map[1][3] && map[1][3] == map[2][4]
										)
									&&
									map[1][3] != " "
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[1][3] << endl;
								}
								else if (
									(
										map[1][4] == map[2][3] && map[2][3] == map[3][2]
										||
										map[1][2] == map[2][3] && map[2][3] == map[3][4]
										)
									&&
									map[2][3] != " "
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[2][3] << endl;
								}
								else if (
									(
										map[2][4] == map[3][3] && map[3][3] == map[4][2]
										||
										map[2][2] == map[3][3] && map[3][3] == map[4][4]
										)
									&&
									map[3][3] != " "
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[3][3] << endl;
								}
								else if (
									(
										map[2][3] == map[3][2] && map[3][2] == map[4][1]
										||
										map[2][1] == map[3][2] && map[3][2] == map[4][3]
										)
									&&
									map[3][2] != " "
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[3][2] << endl;
								}
								else if (
									(
										map[2][2] == map[3][1] && map[3][1] == map[4][0]
										||
										map[2][0] == map[3][1] && map[3][1] == map[4][2]
										)
									&&
									map[3][1] != " "
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[3][1] << endl;
								}
							}
							if (move == 2) {
								short emptyCount = 0;
								for (short indY = 0; indY < 5; indY++) {
									for (short indX = 0; indX < 5; indX++) {
										if (map[indY][indX] == " ") emptyCount++;
									}
								}
								if (emptyCount == 0) {
									choise = 0, mode = 3, inp = "0";
									cout << "Ничья!\n";
								}
								else {
									move = 3;
								}
							}
							if (move == 3) {
								short x, y, step = 0;
								do
								{
									x = rand() % 5;
									y = rand() % 5;
									if (map[y][x] == " ") {
										step = 1;
										if (symb == "X") {
											map[y][x] = "O";
										}
										else {
											map[y][x] = "X";
										}
									}
								} while (step == 0);
								move = 4;
								system("cls");
								for (short indexY = 0; indexY < 5; indexY++) {
									if (
										(
											(map[indexY][0] == map[indexY][1] && map[indexY][1] == map[indexY][2])
											||
											(map[indexY][3] == map[indexY][1] && map[indexY][1] == map[indexY][2])
											||
											(map[indexY][4] == map[indexY][3] && map[indexY][3] == map[indexY][2])
											)
										&&
										map[indexY][2] != " "
										) {
										choise = 0, mode = 3, inp = "0", move = 1;
										cout << "Победил игрок " + map[indexY][2] << endl;
									}
								}
								for (short indexX = 0; indexX < 5; indexX++) {
									if (
										(
											(map[0][indexX] == map[1][indexX] && map[1][indexX] == map[2][indexX])
											||
											(map[3][indexX] == map[1][indexX] && map[1][indexX] == map[2][indexX])
											||
											(map[3][indexX] == map[4][indexX] && map[4][indexX] == map[2][indexX])
											)
										&&
										map[2][indexX] != " "
										) {
										choise = 0, mode = 3, inp = "0", move = 1;
										cout << "Победил игрок " + map[2][indexX] << endl;
									}
								}
								if (
									(
										map[0][0] == map[1][1] && map[0][0] == map[2][2]
										||
										map[2][0] == map[1][1] && map[1][1] == map[0][2]
										)
									&&
									map[1][1] != " "
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[1][1] << endl;
								}
								else if (
									(
										(
											map[0][1] == map[1][2] && map[2][3] == map[1][2]
											||
											map[0][3] == map[1][2] && map[2][1] == map[1][2]
											)
										&&
										map[1][2] != " "
										)
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[1][2] << endl;
								}
								else if (
									(
										(
											map[1][0] == map[2][1] && map[2][1] == map[3][2]
											||
											map[3][0] == map[2][1] && map[2][1] == map[1][2]
											)
										&& map[2][1] != " "
										)
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[2][1] << endl;
								}
								else if (
									(
										(
											map[1][1] == map[2][2] && map[2][2] == map[3][3]
											||
											map[3][1] == map[2][2] && map[2][2] == map[1][3]
											)
										&&
										map[2][2] != " "
										)
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[2][2] << endl;
								}
								else if (
									(
										map[0][4] == map[1][3] && map[1][3] == map[2][2]
										||
										map[0][2] == map[1][3] && map[1][3] == map[2][4]
										)
									&&
									map[1][3] != " "
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[1][3] << endl;
								}
								else if (
									(
										map[1][4] == map[2][3] && map[2][3] == map[3][2]
										||
										map[1][2] == map[2][3] && map[2][3] == map[3][4]
										)
									&&
									map[2][3] != " "
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[2][3] << endl;
								}
								else if (
									(
										map[2][4] == map[3][3] && map[3][3] == map[4][2]
										||
										map[2][2] == map[3][3] && map[3][3] == map[4][4]
										)
									&&
									map[3][3] != " "
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[3][3] << endl;
								}
								else if (
									(
										map[2][3] == map[3][2] && map[3][2] == map[4][1]
										||
										map[2][1] == map[3][2] && map[3][2] == map[4][3]
										)
									&&
									map[3][2] != " "
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[3][2] << endl;
								}
								else if (
									(
										map[2][2] == map[3][1] && map[3][1] == map[4][0]
										||
										map[2][0] == map[3][1] && map[3][1] == map[4][2]
										)
									&&
									map[3][1] != " "
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[3][1] << endl;
								}
							}
							if (move == 4) {
								short emptyCount = 0;
								for (short indY = 0; indY < 5; indY++) {
									for (short indX = 0; indX < 5; indX++) {
										if (map[indY][indX] == " ") emptyCount++;
									}
								}
								if (emptyCount == 0) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Ничья!\n";
								}
								else {
									move = 1;
								}
							}
						}
					}
					break;
				}
				case 2: {
					if (size == "3x3") {
						string map[3][3] = { {" "," "," "},{" "," "," "},{" "," "," "} }, inp, step = "X";
						system("cls");
						short move = 1;
						while (inp != "0") {
							cout << "[+]Игра\n";
							cout << "[0]Выход\n";
							cout << "Сейчас ходит " << step << endl;
							cout << "  1   2   3\n";
							cout << "A " + color + map[0][0] + "\x1b[0m | " + color + map[0][1] + "\x1b[0m | " + color + map[0][2] + "\x1b[0m |\n";
							cout << " ---|---|---\n";
							cout << "B " + color + map[1][0] + "\x1b[0m | " + color + map[1][1] + "\x1b[0m | " + color + map[1][2] + "\x1b[0m |\n";
							cout << " ---|---|---\n";
							cout << "C " + color + map[2][0] + "\x1b[0m | " + color + map[2][1] + "\x1b[0m | " + color + map[2][2] + "\x1b[0m |\n";
							if (move == 1) {
								cout << "Введите координату (например: 1C): ";
								cin >> inp;
								if (inp == "0") {
									choise = 0, mode = 3;
									system("cls");
								}
								else if (inp == "1A") {
									system("cls");
									if (map[0][0] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[0][0] = step;
										move = 2;
									}
								}
								else if (inp == "2A") {
									system("cls");
									if (map[0][1] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[0][1] = step;
										move = 2;
									}
								}
								else if (inp == "3A") {
									system("cls");
									if (map[0][2] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[0][2] = step;
										move = 2;
									}
								}
								else if (inp == "1B") {
									system("cls");
									if (map[1][0] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[1][0] = step;
										move = 2;
									}
								}
								else if (inp == "2B") {
									system("cls");
									if (map[1][1] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[1][1] = step;
										move = 2;
									}
								}
								else if (inp == "3B") {
									system("cls");
									if (map[1][2] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[1][2] = step;
										move = 2;
									}
								}
								else if (inp == "1C") {
									system("cls");
									if (map[2][0] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[2][0] = step;
										move = 2;
									}
								}
								else if (inp == "2C") {
									system("cls");
									if (map[2][1] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[2][1] = step;
										move = 2;
									}
								}
								else if (inp == "3C") {
									system("cls");
									if (map[2][2] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[2][2] = step;
										move = 2;
									}
								}
								else {
									cout << "\nИсправьте данные и попробуйте снова\n";
								}
								for (short indexY = 0; indexY < 3; indexY++) {
									if (map[indexY][0] == map[indexY][1] && map[indexY][1] == map[indexY][2] && map[indexY][0] != " ") {
										choise = 0, mode = 3, inp = "0", move = 1;
										cout << "Победил игрок " + map[indexY][0] << endl;
									}
								}
								for (short indexX = 0; indexX < 3; indexX++) {
									if (map[0][indexX] == map[1][indexX] && map[0][indexX] == map[2][indexX] && map[0][indexX] != " ") {
										choise = 0, mode = 3, inp = "0", move = 1;
										cout << "Победил игрок " + map[0][indexX] << endl;
									}
								}
								if ((map[0][0] == map[1][1] && map[0][0] == map[2][2] || map[2][0] == map[1][1] && map[1][1] == map[0][2]) && map[1][1] != " ") {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[1][1] << endl;
								}
							}
							if (move == 2) {
								short emptyCount = 0;
								for (short indY = 0; indY < 3; indY++) {
									for (short indX = 0; indX < 3; indX++) {
										if (map[indY][indX] == " ") emptyCount++;
									}
								}
								if (emptyCount == 0) {
									choise = 0, mode = 3, inp = "0";
									cout << "Ничья!\n";
								}
								else {
									move = 3;
								}
							}
							if (move == 3) {
								move = 1;
								if (step == "X") step = "O";
								else step = "X";
							}
						}
					}
					else if (size == "4x4") {
						string map[4][4] = { {" "," "," "," "},{" "," "," "," "},{" "," "," "," "},{" "," "," "," "} }, inp, step = "X";
						system("cls");
						short move = 1;
						while (inp != "0") {
							cout << "[+]Игра\n";
							cout << "[0]Выход\n";
							cout << "Сейчас ходит " << step << endl;
							cout << "  1   2   3   4\n";
							cout << "A " + color + map[0][0] + "\x1b[0m | " + color + map[0][1] + "\x1b[0m | " + color + map[0][2] + "\x1b[0m | " + color + map[0][3] + "\x1b[0m\n";
							cout << " ---|---|---|---\n";
							cout << "B " + color + map[1][0] + "\x1b[0m | " + color + map[1][1] + "\x1b[0m | " + color + map[1][2] + "\x1b[0m | " + color + map[1][3] + "\x1b[0m\n";
							cout << " ---|---|---|---\n";
							cout << "C " + color + map[2][0] + "\x1b[0m | " + color + map[2][1] + "\x1b[0m | " + color + map[2][2] + "\x1b[0m | " + color + map[2][3] + "\x1b[0m\n";
							cout << " ---|---|---|---\n";
							cout << "D " + color + map[3][0] + "\x1b[0m | " + color + map[3][1] + "\x1b[0m | " + color + map[3][2] + "\x1b[0m | " + color + map[3][3] + "\x1b[0m\n";
							if (move == 1) {
								cout << "Введите координату (например: 1C): ";
								cin >> inp;
								if (inp == "0") {
									choise = 0, mode = 3;
									system("cls");
								}
								else if (inp == "1A") {
									system("cls");
									if (map[0][0] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[0][0] = step;
										move = 2;
									}
								}
								else if (inp == "2A") {
									system("cls");
									if (map[0][1] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[0][1] = step;
										move = 2;
									}
								}
								else if (inp == "3A") {
									system("cls");
									if (map[0][2] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[0][2] = step;
										move = 2;
									}

								}
								else if (inp == "4A") {
									system("cls");
									if (map[0][3] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[0][3] = step;
										move = 2;
									}

								}
								else if (inp == "1B") {
									system("cls");
									if (map[1][0] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[1][0] = step;
										move = 2;
									}
								}
								else if (inp == "2B") {
									system("cls");
									if (map[1][1] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[1][1] = step;
										move = 2;
									}
								}
								else if (inp == "3B") {
									system("cls");
									if (map[1][2] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[1][2] = step;
										move = 2;
									}
								}
								else if (inp == "4B") {
									system("cls");
									if (map[1][3] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[1][3] = step;
										move = 2;
									}
								}
								else if (inp == "1C") {
									system("cls");
									if (map[2][0] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[2][0] = step;
										move = 2;
									}
								}
								else if (inp == "2C") {
									system("cls");
									if (map[2][1] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}

									else {
										map[2][1] = step;
										move = 2;
									}
								}
								else if (inp == "3C") {
									system("cls");
									if (map[2][2] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[2][2] = step;
										move = 2;
									}
								}
								else if (inp == "4C") {
									system("cls");
									if (map[2][3] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[2][3] = step;
										move = 2;
									}
								}
								else if (inp == "1D") {
									system("cls");
									if (map[3][0] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[3][0] = step;
										move = 2;
									}
								}
								else if (inp == "2D") {
									system("cls");
									if (map[3][1] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}

									else {
										map[3][1] = step;
										move = 2;
									}
								}
								else if (inp == "3D") {
									system("cls");
									if (map[3][2] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[3][2] = step;
										move = 2;
									}
								}
								else if (inp == "4D") {
									system("cls");
									if (map[3][3] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[3][3] = step;
										move = 2;
									}
								}

								else {
									cout << "\nИсправьте данные и попробуйте снова\n";
								}
								for (short indexY = 0; indexY < 4; indexY++) {
									if (
										(
											(map[indexY][0] == map[indexY][1] && map[indexY][1] == map[indexY][2])
											||
											(map[indexY][3] == map[indexY][1] && map[indexY][1] == map[indexY][2])
											)
										&&
										map[indexY][2] != " "
										) {
										choise = 0, mode = 3, inp = "0", move = 1;
										cout << "Победил игрок " + map[indexY][2] << endl;
									}
								}
								for (short indexX = 0; indexX < 4; indexX++) {
									if (
										(
											(map[0][indexX] == map[1][indexX] && map[1][indexX] == map[2][indexX])
											||
											(map[3][indexX] == map[1][indexX] && map[1][indexX] == map[2][indexX])
											)
										&&
										map[2][indexX] != " "
										) {
										choise = 0, mode = 3, inp = "0", move = 1;
										cout << "Победил игрок " + map[2][indexX] << endl;
									}
								}
								if (
									(
										map[0][0] == map[1][1] && map[0][0] == map[2][2]
										||
										map[2][0] == map[1][1] && map[1][1] == map[0][2]
										)
									&&
									map[1][1] != " "
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[1][1] << endl;
								}
								else if (
									(
										(
											map[0][1] == map[1][2] && map[2][3] == map[1][2]
											||
											map[0][3] == map[1][2] && map[2][1] == map[1][2]
											)
										&&
										map[1][2] != " "
										)
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[1][2] << endl;
								}
								else if (
									(
										(
											map[1][0] == map[2][1] && map[2][1] == map[3][2]
											||
											map[3][0] == map[2][1] && map[2][1] == map[1][2]
											)
										&& map[2][1] != " "
										)
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[2][1] << endl;
								}
								else if (
									(
										(
											map[1][1] == map[2][2] && map[2][2] == map[3][3]
											||
											map[3][1] == map[2][2] && map[2][2] == map[1][3]
											)
										&&
										map[2][2] != " "
										)
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[2][2] << endl;
								}
							}
							if (move == 2) {
								short emptyCount = 0;
								for (short indY = 0; indY < 4; indY++) {
									for (short indX = 0; indX < 4; indX++) {
										if (map[indY][indX] == " ") emptyCount++;
									}
								}
								if (emptyCount == 0) {
									choise = 0, mode = 3, inp = "0";
									cout << "Ничья!\n";
								}
								else {
									move = 3;
								}
							}
							if (move == 3) {
								move = 1;
								if (step == "X") step = "O";
								else step = "X";
							}
						}
					}
					else if (size == "5x5") {
						string map[5][5] = { {" "," "," "," "," "},{" "," "," "," "," "},{" "," "," "," "," "},{" "," "," "," "," "},{" "," "," "," "," "} }, inp, step = "X";
						system("cls");
						short move = 1;
						while (inp != "0") {
							cout << "[+]Игра\n";
							cout << "[0]Выход\n";
							cout << "Сейчас ходит " << step << endl;
							cout << "  1   2   3   4   5\n";
							cout << "A " + color + map[0][0] + "\x1b[0m | " + color + map[0][1] + "\x1b[0m | " + color + map[0][2] + "\x1b[0m | " + color + map[0][3] + "\x1b[0m | " + color + map[0][4] + "\x1b[0m\n";
							cout << " ---|---|---|---|---\n";
							cout << "B " + color + map[1][0] + "\x1b[0m | " + color + map[1][1] + "\x1b[0m | " + color + map[1][2] + "\x1b[0m | " + color + map[1][3] + "\x1b[0m | " + color + map[1][4] + "\x1b[0m\n";
							cout << " ---|---|---|---|---\n";
							cout << "C " + color + map[2][0] + "\x1b[0m | " + color + map[2][1] + "\x1b[0m | " + color + map[2][2] + "\x1b[0m | " + color + map[2][3] + "\x1b[0m | " + color + map[2][4] + "\x1b[0m\n";
							cout << " ---|---|---|---|---\n";
							cout << "D " + color + map[3][0] + "\x1b[0m | " + color + map[3][1] + "\x1b[0m | " + color + map[3][2] + "\x1b[0m | " + color + map[3][3] + "\x1b[0m | " + color + map[3][4] + "\x1b[0m\n";
							cout << " ---|---|---|---|---\n";
							cout << "E " + color + map[4][0] + "\x1b[0m | " + color + map[4][1] + "\x1b[0m | " + color + map[4][2] + "\x1b[0m | " + color + map[4][3] + "\x1b[0m | " + color + map[4][4] + "\x1b[0m\n";
							if (move == 1) {
								cout << "Введите координату (например: 1C): ";
								cin >> inp;
								if (inp == "0") {
									choise = 0, mode = 3;
									system("cls");
								}
								else if (inp == "1A") {
									system("cls");
									if (map[0][0] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[0][0] = step;
										move = 2;
									}
								}
								else if (inp == "2A") {
									system("cls");
									if (map[0][1] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[0][1] = step;
										move = 2;
									}
								}
								else if (inp == "3A") {
									system("cls");
									if (map[0][2] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[0][2] = step;
										move = 2;
									}
								}
								else if (inp == "4A") {
									system("cls");
									if (map[0][3] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[0][3] = step;
										move = 2;
									}
								}
								else if (inp == "5A") {
									system("cls");
									if (map[0][4] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[0][4] = step;
										move = 2;
									}
								}
								else if (inp == "1B") {
									system("cls");
									if (map[1][0] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[1][0] = step;
										move = 2;
									}
								}
								else if (inp == "2B") {
									system("cls");
									if (map[1][1] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[1][1] = step;
										move = 2;
									}
								}
								else if (inp == "3B") {
									system("cls");
									if (map[1][2] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[1][2] = step;
										move = 2;
									}
								}
								else if (inp == "4B") {
									system("cls");
									if (map[1][3] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[1][3] = step;
										move = 2;
									}
								}
								else if (inp == "5B") {
									system("cls");
									if (map[1][4] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[1][4] = step;
										move = 2;
									}
								}
								else if (inp == "1C") {
									system("cls");
									if (map[2][0] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[2][0] = step;
										move = 2;
									}
								}
								else if (inp == "2C") {
									system("cls");
									if (map[2][1] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}

									else {
										map[2][1] = step;
										move = 2;
									}
								}
								else if (inp == "3C") {
									system("cls");
									if (map[2][2] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[2][2] = step;
										move = 2;
									}
								}
								else if (inp == "4C") {
									system("cls");
									if (map[2][3] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[2][3] = step;
										move = 2;
									}
								}
								else if (inp == "5C") {
									system("cls");
									if (map[2][4] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[2][4] = step;
										move = 2;
									}
								}
								else if (inp == "1D") {
									system("cls");
									if (map[3][0] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[3][0] = step;
										move = 2;
									}
								}
								else if (inp == "2D") {
									system("cls");
									if (map[3][1] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}

									else {
										map[3][1] = step;
										move = 2;
									}
								}
								else if (inp == "3D") {
									system("cls");
									if (map[3][2] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[3][2] = step;
										move = 2;
									}
								}
								else if (inp == "4D") {
									system("cls");
									if (map[3][3] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[3][3] = step;
										move = 2;
									}
								}
								else if (inp == "5D") {
									system("cls");
									if (map[3][4] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[3][4] = step;
										move = 2;
									}
								}
								else if (inp == "1E") {
									system("cls");
									if (map[4][0] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[4][0] = step;
										move = 2;
									}
								}
								else if (inp == "2E") {
									system("cls");
									if (map[4][1] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}

									else {
										map[4][1] = step;
										move = 2;
									}
								}
								else if (inp == "3E") {
									system("cls");
									if (map[4][2] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[4][2] = step;
										move = 2;
									}
								}
								else if (inp == "4E") {
									system("cls");
									if (map[4][3] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[4][3] = step;
										move = 2;
									}
								}
								else if (inp == "5E") {
									system("cls");
									if (map[4][4] != " ") {
										cout << "Это поле уже занято, попробуйте другое\n";
									}
									else {
										map[4][4] = step;
										move = 2;
									}
								}
								else {
									cout << "\nИсправьте данные и попробуйте снова\n";
								}
								for (short indexY = 0; indexY < 5; indexY++) {
									if (
										(
											(map[indexY][0] == map[indexY][1] && map[indexY][1] == map[indexY][2])
											||
											(map[indexY][3] == map[indexY][1] && map[indexY][1] == map[indexY][2])
											||
											(map[indexY][4] == map[indexY][3] && map[indexY][3] == map[indexY][2])
											)
										&&
										map[indexY][2] != " "
										) {
										choise = 0, mode = 3, inp = "0", move = 1;
										cout << "Победил игрок " + map[indexY][2] << endl;
									}
								}
								for (short indexX = 0; indexX < 5; indexX++) {
									if (
										(
											(map[0][indexX] == map[1][indexX] && map[1][indexX] == map[2][indexX])
											||
											(map[3][indexX] == map[1][indexX] && map[1][indexX] == map[2][indexX])
											||
											(map[3][indexX] == map[4][indexX] && map[4][indexX] == map[2][indexX])
											)
										&&
										map[2][indexX] != " "
										) {
										choise = 0, mode = 3, inp = "0", move = 1;
										cout << "Победил игрок " + map[2][indexX] << endl;
									}
								}
								if (
									(
										map[0][0] == map[1][1] && map[0][0] == map[2][2]
										||
										map[2][0] == map[1][1] && map[1][1] == map[0][2]
										)
									&&
									map[1][1] != " "
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[1][1] << endl;
								}
								else if (
									(
										(
											map[0][1] == map[1][2] && map[2][3] == map[1][2]
											||
											map[0][3] == map[1][2] && map[2][1] == map[1][2]
											)
										&&
										map[1][2] != " "
										)
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[1][2] << endl;
								}
								else if (
									(
										(
											map[1][0] == map[2][1] && map[2][1] == map[3][2]
											||
											map[3][0] == map[2][1] && map[2][1] == map[1][2]
											)
										&& map[2][1] != " "
										)
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[2][1] << endl;
								}
								else if (
									(
										(
											map[1][1] == map[2][2] && map[2][2] == map[3][3]
											||
											map[3][1] == map[2][2] && map[2][2] == map[1][3]
											)
										&&
										map[2][2] != " "
										)
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[2][2] << endl;
								}
								else if (
									(
										map[0][4] == map[1][3] && map[1][3] == map[2][2]
										||
										map[0][2] == map[1][3] && map[1][3] == map[2][4]
										)
									&&
									map[1][3] != " "
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[1][3] << endl;
								}
								else if (
									(
										map[1][4] == map[2][3] && map[2][3] == map[3][2]
										||
										map[1][2] == map[2][3] && map[2][3] == map[3][4]
										)
									&&
									map[2][3] != " "
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[2][3] << endl;
								}
								else if (
									(
										map[2][4] == map[3][3] && map[3][3] == map[4][2]
										||
										map[2][2] == map[3][3] && map[3][3] == map[4][4]
										)
									&&
									map[3][3] != " "
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[3][3] << endl;
								}
								else if (
									(
										map[2][3] == map[3][2] && map[3][2] == map[4][1]
										||
										map[2][1] == map[3][2] && map[3][2] == map[4][3]
										)
									&&
									map[3][2] != " "
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[3][2] << endl;
								}
								else if (
									(
										map[2][2] == map[3][1] && map[3][1] == map[4][0]
										||
										map[2][0] == map[3][1] && map[3][1] == map[4][2]
										)
									&&
									map[3][1] != " "
									) {
									choise = 0, mode = 3, inp = "0", move = 1;
									cout << "Победил игрок " + map[3][1] << endl;
								}
							}
							if (move == 2) {
								short emptyCount = 0;
								for (short indY = 0; indY < 5; indY++) {
									for (short indX = 0; indX < 5; indX++) {
										if (map[indY][indX] == " ") emptyCount++;
									}
								}
								if (emptyCount == 0) {
									choise = 0, mode = 3, inp = "0";
									cout << "Ничья!\n";
								}
								else {
									move = 3;
								}
							}
							if (move == 3) {
								move = 1;
								if (step == "X") step = "O";
								else step = "X";
							}
						}
					}
					break;
				}
				case 3: {
					choise = 0, mode = 3;
					system("cls");
					break;
				}
				default: {
					mode = 0;
					system("cls");
					cout << "[!]Неверно введено значение\n";
					break;
				}
				}
			}
			break;
		}
		case 2: {
			short settings;
			do {
				system("cls");
				cout << "[+]Настройки\n";
				cout << "[1]" + color + "Цвет\x1b[0m крестика и нолика\n";
				cout << "[2]Кто первый ходит\n";
				cout << "[3]Размер поля: " + size + "\n";
				cout << "[4]Выход\n";
				cout << "[-]Введите число: ";
				cin >> settings;
				system("cls");
				switch (settings)
				{
				case 1: {
					short colorChoise;
					do {
						cout << "Возможные цвета крестика и нолика: \n\n";
						cout << "[1]\x1b[0m стандарт\x1b[0m\n";
						cout << "[2]\x1b[91m красный\x1b[0m\n";
						cout << "[3]\x1b[92m зеленый\x1b[0m\n";
						cout << "[4]\x1b[93m желтый\x1b[0m\n";
						cout << "[5]\x1b[94m синий\x1b[0m\n";
						cout << "[0]Назад к настройкам\n";
						cin >> colorChoise;
						switch (colorChoise)
						{
						case 1:
						{
							color = "\x1b[0m";
							cout << "\nВы выбрали " + color + "стандартный цвет!\x1b[0m\n";
							break;
						}
						case 2:
						{
							color = "\x1b[91m";
							cout << "\nВы выбрали " + color + "красный цвет!\x1b[0m\n";
							break;
						}
						case 3:
						{
							color = "\x1b[92m";
							cout << "\nВы выбрали " + color + "зеленый цвет!\x1b[0m\n";
							break;
						}
						case 4:
						{
							color = "\x1b[93m";
							cout << "\nВы выбрали " + color + "желтый цвет!\x1b[0m\n";
							break;
						}
						case 5:
						{
							color = "\x1b[94m";
							cout << "\nВы выбрали " + color + "синий цвет!\x1b[0m\n";
							break;
						}
						}
					} while (colorChoise != 0);
					break;
				}
				case 2: {
					short selected;
					do
					{
						cout << "Кто будет ходить первым?\n";
						cout << "[1] X\n";
						cout << "[2] O\n";
						cout << "[0] Выход\n";
						cin >> selected;
						if (selected == 1) {
							symb = "X", selected = 0;
							cout << "Теперь вы играете за Х\n";
						}
						else if (selected == 2) {
							symb = "O", selected = 0;
							cout << "Теперь вы играете за О\n";
						}
						else if (selected != 0) {
							cout << "Исправь данные и попробуй снова\n";
						}
					} while (selected != 0);
					break;
				}
				case 3:
				{
					short selected;
					do
					{
						cout << "[+]Какого размера будет поле?\n";
						cout << "[1]3х3\n";
						cout << "[2]4х4\n";
						cout << "[3]5х5\n";
						cout << "[0]Выход\n";
						cin >> selected;
						if (selected == 1) {
							size = "3x3", selected = 0;
							cout << "Вы выбрали поле 3х3\n";
						}
						else if (selected == 2) {
							size = "4x4", selected = 0;
							cout << "Вы выбрали поле 4x4\n";
						}
						else if (selected == 3) {
							size = "5x5", selected = 0;
							cout << "Вы выбрали поле 5x5\n";
						}
						else if (selected != 0) {
							cout << "Исправь данные и попробуй снова\n";
						}
					} while (selected != 0);
					break;
				}
				case 4: {
					choise = 0;
					break;
				}
				}
			} while (settings != 4);
			break;
		}
		case 3: {
			short _exit = 0;
			system("cls");
			do {
				cout << "[+]Правила\n\n";
				cout << "Игроки по очереди ставят на свободные клетки поля 3х3 знаки (один всегда крестики, другой всегда нолики)\nПервый, выстроивший в ряд 3 своих фигур по вертикали, горизонтали или диагонали, выигрывает. \n\n";
				cout << "[1]Выход \n";
				cout << "Введите цифру: \n";
				cin >> _exit;
				if (_exit == 1) {
					choise = 0;
					system("cls");
				}
				else {
					system("cls");
					cout << "[!]Неверно введено значение\n";
				}
			} while (_exit != 1);
			break;
		}
		case 4: {
			return 0;
			break;
		}
		default:
			system("cls");
			choise = 0;
			cout << "[!]Неверно введено значение\n";
			break;
		}
	}
}
