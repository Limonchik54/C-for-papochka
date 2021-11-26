#include <iostream>
using namespace std;

void clear() {
    system("cls");
}
void changeBG() {
    system("color 20");
}
void changeColorText() {
    system("color 02");
}
void getSizeInt() {
    cout << sizeof(int);
}
void getSizeChar() {
    cout << sizeof(char);
}
void getSizeDouble() {
    cout << sizeof(double);
}
void getSizeFloat() {
    cout << sizeof(float);
}
void getSizeBool() {
    cout << sizeof(bool);
}
void showMessage() {
    cout << "Привет я функция";
}
void getSquare() {
    system("cls");
    cout << "[+]Фигура: Квадрат\n";
    cout << "[1]Заполненный\n[2]Пустой\n";
    cout << "[+]Выберите тип: ";
    int type;
    cin >> type;
    cout << "[+]Текстура: ";
    char texture;
    cin >> texture;
    int size = 4;
    switch (type)
    {
    case 1: {
        int res = size;
        int i = size;
        while (res > 0) {
            while (size > 0)
            {
                cout << texture << " ";
                size--;
            }
            size = i;
            cout << endl;
            res--;
        }
        break;
    }
    case 2: {
        int res = size;
        int i = size;
        bool quest = true;
        while (res > 0) {
            if (quest) {
                while (size > 0)
                {
                    cout << texture << " ";
                    size--;
                }
                quest = false;
            }
            else {
                cout << texture << " ";
                while (size - 2 > 0) {
                    cout << "  ";
                    size--;
                }
                cout << texture;
            }
            size = i;
            cout << endl;
            res--;
            if (res == 1)
            {
                quest = true;
            }
        }
        break;
    }
    default:
        cout << "Исправь данные и попробуй снова";
        break;
    }
}
int main()
{
    setlocale(0, "");
    cout << "[+]Программа: 'Функции'\n\n";
    cout << "[1]Очищение консоли\n[2]Изменение цвета фона\n[3]Изменить цвет текста\n[4]Вывод размера типа данных int\n[5]Вывод размера типа данных char\n[6]Вывод размера типа данных double\n[7]Вывод размера типа данных float\n[8]Вывод размера типа данных bool\n[9]Сообщение\n[10]Квадрат\n";
    cout << "Введите цифру: \n";
    int choose;
    cin >> choose;
    switch (choose)
    {
    case 1:
        clear();
        break;
    case 2:
        changeBG();
        break;
    case 3:
        changeColorText();
        break;
    case 4:
        cout << "Размер типа данных int: ";
        getSizeInt();
        break;
    case 5:
        cout << "Размер типа данных char: ";
        getSizeChar();
        break;
    case 6:
        cout << "Размер типа данных double: ";
        getSizeDouble();
        break;
    case 7:
        cout << "Размер типа данных float: ";
        getSizeFloat();
        break;
    case 8:
        cout << "Размер типа данных bool: ";
        getSizeBool();
        break;
    case 9:
        showMessage();
        break;
    case 10:
        getSquare();
        break;
    default:
        system("cls");
        cout << "Исправь данные и попробуй снова";
        break;
    }
    int _; cin >> _;
    return 0;
}
