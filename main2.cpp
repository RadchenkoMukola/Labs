#include "Figure.h"
#include "Figure.h"
#include "Triangle.cpp"
#include "Parallelogram.cpp"
#include "Circle.cpp"
#include "Pkutnuk.cpp"
#include <locale>
#include <Windows.h> 

using namespace std;

class UI
{
public:

    Figure* insert(Figure* figur)
    {
        double x1, y1, x2, y2, x3, y3, x4, y4, x5, y5;

        cout << "*==================*" << endl;
        cout << "*l Оберіть фігуру l*" << endl;
        cout << "*==================*" << endl;
        cout << "*l 1.Трикутник    l*" << endl;
        cout << "*l 2.Чотирикутник l*" << endl;
        cout << "*l 3.П'ятикутник  l*" << endl;
        cout << "*l 4.Коло         l*" << endl;
        cout << "*==================*" << endl;
        cout << "Оберіть - ";
        int x;
        cin >> x;

        if (x == 1)
        {
            cout << "Введіть координати трьох точок" << endl;
            cout << "Введіть x1 ="; cin >> x1; cout << endl;
            cout << "Введіть y1 ="; cin >> y1; cout << endl;
            cout << "Введіть x2 ="; cin >> x2; cout << endl;
            cout << "Введіть y2 ="; cin >> y2; cout << endl;
            cout << "Введіть x3 ="; cin >> x3; cout << endl;
            cout << "Введіть y3 ="; cin >> y3; cout << endl;
            figur = new MyTriangle(x1, y1, x2, y2, x3, y3);
        }
        else if (x == 2)
        {
            cout << "Введіть координати чотирьох точок" << endl;
            cout << "Введіть x1 ="; cin >> x1; cout << endl;
            cout << "Введіть y1 ="; cin >> y1; cout << endl;
            cout << "Введіть x2 ="; cin >> x2; cout << endl;
            cout << "Введіть y2 ="; cin >> y2; cout << endl;
            cout << "Введіть x3 ="; cin >> x3; cout << endl;
            cout << "Введіть y3 ="; cin >> y3; cout << endl;
            cout << "Введіть x4 ="; cin >> x4; cout << endl;
            cout << "Введіть y4 ="; cin >> y4; cout << endl;
            figur = new Parallelogram(x1, y1, x2, y2, x3, y3, x4, y4);

        }
        else if (x == 3)
        {
            cout << "Введіть координати п'яти точок" << endl;
            cout << "Введіть x1 ="; cin >> x1; cout << endl;
            cout << "Введіть y1 ="; cin >> y1; cout << endl;
            cout << "Введіть x2 ="; cin >> x2; cout << endl;
            cout << "Введіть y2 ="; cin >> y2; cout << endl;
            cout << "Введіть x3 ="; cin >> x3; cout << endl;
            cout << "Введіть y3 ="; cin >> y3; cout << endl;
            cout << "Введіть x4 ="; cin >> x4; cout << endl;
            cout << "Введіть y4 ="; cin >> y4; cout << endl;
            cout << "Введіть x5 ="; cin >> x5; cout << endl;
            cout << "Введіть y5 ="; cin >> y5; cout << endl;
            figur = new Pkutnuk(x1, y1, x2, y2, x3, y3, x4, y4, x5, y5);

        }
        else if (x == 4)
        {
            cout << "Введіть координати центру та радіус" << endl;
            cout << "Введіть x ="; cin >> x1; cout << endl;
            cout << "Введіть y ="; cin >> y1; cout << endl;
            cout << "Введіть радіус r ="; cin >> x2; cout << endl;
            figur = new Circle(x1, y1, x2);
        }

        return figur;
    }

    void showfigure(Figure* figur)
    {
        double p, a;
        string t, v;
        vector<double> m;
        cout << "Інформація про фігуру" << endl;
        cout << "=====================" << endl;

        cout << "\nПлоща: ";
        a = figur->calc_area();
        cout << a << endl;
        cout << "Периметр: ";
        p = figur->calc_perimeter();
        cout << p << endl;
        cout << "Тип: ";
        t = figur->calc_type();
        cout << t << endl;
        cout << "Спеціальна точка: ";
        m = figur->calc_specdot();
        cout << "M( ";
        for (int i = 0; i < m.size(); i++)
        {
            cout << m[i] << " ";
        }
        cout << ")" << endl;
        cout << "Опуклість: ";
        v = figur->calc_vyp();
        cout << v << endl;

    }
};
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Figure** figure = new Figure * [1];
    UI f1;
    figure[1] = f1.insert(figure[1]);
    f1.showfigure(figure[1]);

    delete figure[1];


    return 0;
}
