#include <iostream>
using namespace std;

int check(int lenght) {
    while (lenght <= 0) {
        cout << "Какой в этом смысл?!" << endl;
        cin >> lenght;
    }
    return lenght;
}

int main()
{
    setlocale(0, "");
    short menu, lenght, vector, choise;
    char symb;


    cout << "Геометрические фигуры" << endl;
    cout << "Выберите фигуру: " << endl;
    cout << "[1] - Линия" << endl;
    cout << "[2] - Квадрат" << endl;
    cout << "[3] - Прямоугольник" << endl;
    cout << "[4] - Треугольник" << endl;
    cout << "[5] - Решетка" << endl;
    cout << "[6] - Косой крест" << endl;
    cout << "[7] - Плюсик" << endl;
    cin >> menu;
    short  i = 0;
    switch (menu)
    {

    case 1:
        cout << "Введите длину линии" << endl;
        cin >> lenght;
        lenght = check(lenght);
        cout << endl;
        cout << "Введите тип линии:\n [1] - горизонтальная\n [2] - вертикальная" << endl;
        cin >> vector;
        cout << endl;
        cout << "Введите текстуру линии" << endl << endl;
        cin >> symb;


        switch (vector)
        {
        case 1: {
            while (i < lenght)
            {
                cout << symb;
                i++;
            }
        }
              break;

        case 2: {
            while (i < lenght)
            {
                cout << symb << endl;
                i++;
            }
        }
              break;
        default: {
            cout << "исправь данные и попробуй снова" << endl;
        }
               break;
        }
        break;
    case 2: {

        cout << "Введите длину ребра квадрата" << endl << endl;
        cin >> lenght;
        lenght = check(lenght);
        cout << "Введите текстуру квадрата" << endl << endl;
        cin >> symb;
        cout << "Выберите тип\n [1] Заполненный\n [2] Пустой" << endl << endl;
        cin >> choise;
        switch (choise)
        {
        case 1: {

            while (i < lenght) {
                short l = 0;
                while (l < lenght)
                {
                    cout << symb << " ";
                    l++;
                }
                cout << endl;
                i++;
            }
        }
              break;

        case 2: {

            while (i < lenght) {
                short l = 0;

                if (i == 0 || i == lenght - 1) {
                    while (l < lenght)
                    {
                        cout << symb << " ";
                        l++;
                    }
                    i++;
                    cout << endl;
                }
                else {
                    cout << symb << " ";
                    while (l < lenght - 2)
                    {
                        cout << "  ";
                        l++;
                    }
                    cout << symb << "  ";
                    cout << endl;

                    i++;
                }
            }
            break;
        }
        default:
            cout << "исправь данные и попробуй снова" << endl;
            break;

        }
        break;
    }
    case 3: {
        int width;

        cout << "введите длину прямоугольника" << endl;
        cin >> lenght;
        lenght = check(lenght);
        cout << endl;
        cout << "введите ширину прямоугольника" << endl;
        cin >> width;
        width = check(width);
        cout << endl;
        cout << "введите текстуру прямоугольника" << endl << endl;
        cin >> symb;
        cout << "Выберите тип\n [1] Заполненный\n [2] Пустой" << endl << endl;
        cin >> choise;


        switch (choise)
        {
        case 1: {

            while (i < width) {
                short l = 0;
                while (l < lenght)
                {
                    cout << symb << "  ";
                    l++;
                }
                cout << endl;
                i++;
            }
        }
              break;

        case 2: {

            while (i < width) {
                short l = 0;

                if (i == 0 || i == width - 1) {
                    while (l < lenght)
                    {
                        cout << symb << "  ";
                        l++;
                    }
                    i++;
                    cout << endl;
                }
                else {
                    cout << symb << "  ";
                    while (l < lenght - 2)
                    {
                        cout << "   ";
                        l++;
                    }
                    cout << symb << "   ";
                    cout << endl;

                    i++;
                }
            }
              break;
        }

        default: {
            cout << "исправь данные и попробуй снова" << endl;
        }
               break;

        }
    }
          break;

    case 4: {
        int hight, begin, finish;

        cout << "введите высоту треугольника" << endl;
        cin >> hight;
        hight = check(hight);
        cout << "введите текстуру треугольника" << endl << endl;
        cin >> symb;
        cout << "Выберите тип\n [1] Заполненный\n [2] Пустой" << endl << endl;
        cin >> choise;
        lenght = hight * 2 - 1;
        begin = hight;
        finish = hight;

        switch (choise)
        {
        case 1: {
            for (i = 0; i < hight; i++)
            {
                for (int j = 0; j <= lenght; j++) {
                    if (j < begin || j > finish) {

                        cout << " ";
                    }
                    else {
                        cout << symb;
                    }

                }
                begin--;
                finish++;
                cout << endl;
            }
        }
              break;
        case 2: {
            for (i = 0; i < hight; i++)
            {
                for (int j = 1; j <= lenght; j++) {
                    if (i == hight - 1) {
                        cout << symb;
                    }
                    else if (j == begin || j == finish) {
                        cout << symb;

                    }
                    else {
                        cout << " ";
                    }

                }
                begin--;
                finish++;
                cout << endl;
            }
        }
              break;

        default: {
            cout << "исправь данные и попробуй снова" << endl;
        }




        }



    }
          break;
    case 5: {
        cout << "введите длину ребра" << endl;
        cin >> lenght;
        lenght = check(lenght);
        if (lenght % 2 == 0) {
            lenght++;
        }
        cout << "введите текстуру решетки" << endl << endl;
        cin >> symb;

        while (i < lenght) {
            short l = 0;

            while (l < lenght) {

                if (l % 2 == 1 || i % 2 == 1) {
                    cout << symb << " ";

                }
                else {
                    cout << "  ";
                }
                l++;
            }
            i++;
            cout << endl;
        }



    }
          break;
    case 6: {
        cout << "введите ширину поля для диагонали" << endl;
        int lenght;
        cin >> lenght;
        lenght = check(lenght);
        cout << "введите текстуру диагонали" << endl << endl;
        cin >> symb;
        int hight;
        hight = lenght;
        short begin = 0, finish = lenght;



        for (int i = 0; i <= hight; i++)
        {
            for (int l = 0; l <= lenght; l++)
            {
                if (l == begin || l == finish)
                {
                    cout << symb << " ";
                }

                else if (l != begin || l < finish)
                {
                    cout << "  ";
                }

            }
            cout << endl;
            begin++;
            finish--;
        }

    }
          break;
    case 7: {
        cout << "введите длину плюсика" << endl;
        cin >> lenght;
        lenght = check(lenght);
        if (lenght % 2 == 0) {
            lenght++;
        }
        int center;
        center = (lenght / 2);
        cout << "введите текстуру" << endl << endl;
        cin >> symb;

        while (i < lenght) {
            short l = 0;

            while (l < lenght) {

                if (l == center || i == center) {
                    cout << symb << " ";

                }
                else {
                    cout << "  ";
                }
                l++;
            }
            i++;
            cout << endl;
        }

        break;
    }
          break;
    default:
        cout << "исправь данные и попробуй снова" << endl;
        break;
    }

    int _; cin >> _;
    return 0;
}