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
        cout << "*l ќбер≥ть ф≥гуру l*" << endl;
        cout << "*==================*" << endl;
        cout << "*l 1.“рикутник    l*" << endl;
        cout << "*l 2.„отирикутник l*" << endl;
        cout << "*l 3.ѕ'€тикутник  l*" << endl;
        cout << "*l 4. оло         l*" << endl;
        cout << "*==================*" << endl;
        cout << "ќбер≥ть - ";
        int x;
        cin >> x;

        if (x == 1)
        {
            cout << "¬вед≥ть координати трьох точок" << endl;
            cout << "¬вед≥ть x1 ="; cin >> x1; cout << endl;
            cout << "¬вед≥ть y1 ="; cin >> y1; cout << endl;
            cout << "¬вед≥ть x2 ="; cin >> x2; cout << endl;
            cout << "¬вед≥ть y2 ="; cin >> y2; cout << endl;
            cout << "¬вед≥ть x3 ="; cin >> x3; cout << endl;
            cout << "¬вед≥ть y3 ="; cin >> y3; cout << endl;
            figur = new MyTriangle(x1, y1, x2, y2, x3, y3);
        }
        else if (x == 2)
        {
            cout << "¬вед≥ть координати чотирьох точок" << endl;
            cout << "¬вед≥ть x1 ="; cin >> x1; cout << endl;
            cout << "¬вед≥ть y1 ="; cin >> y1; cout << endl;
            cout << "¬вед≥ть x2 ="; cin >> x2; cout << endl;
            cout << "¬вед≥ть y2 ="; cin >> y2; cout << endl;
            cout << "¬вед≥ть x3 ="; cin >> x3; cout << endl;
            cout << "¬вед≥ть y3 ="; cin >> y3; cout << endl;
            cout << "¬вед≥ть x4 ="; cin >> x4; cout << endl;
            cout << "¬вед≥ть y4 ="; cin >> y4; cout << endl;
            figur = new Parallelogram(x1, y1, x2, y2, x3, y3, x4, y4);

        }
        else if (x == 3)
        {
            cout << "¬вед≥ть координати п'€ти точок" << endl;
            cout << "¬вед≥ть x1 ="; cin >> x1; cout << endl;
            cout << "¬вед≥ть y1 ="; cin >> y1; cout << endl;
            cout << "¬вед≥ть x2 ="; cin >> x2; cout << endl;
            cout << "¬вед≥ть y2 ="; cin >> y2; cout << endl;
            cout << "¬вед≥ть x3 ="; cin >> x3; cout << endl;
            cout << "¬вед≥ть y3 ="; cin >> y3; cout << endl;
            cout << "¬вед≥ть x4 ="; cin >> x4; cout << endl;
            cout << "¬вед≥ть y4 ="; cin >> y4; cout << endl;
            cout << "¬вед≥ть x5 ="; cin >> x5; cout << endl;
            cout << "¬вед≥ть y5 ="; cin >> y5; cout << endl;
            figur = new Pkutnuk(x1, y1, x2, y2, x3, y3, x4, y4, x5, y5);

        }
        else if (x == 4)
        {
            cout << "¬вед≥ть координати центру та рад≥ус" << endl;
            cout << "¬вед≥ть x ="; cin >> x1; cout << endl;
            cout << "¬вед≥ть y ="; cin >> y1; cout << endl;
            cout << "¬вед≥ть рад≥ус r ="; cin >> x2; cout << endl;
            figur = new Circle(x1, y1, x2);
        }

        return figur;
    }

    void showfigure(Figure* figur)
    {
        double p, a;
        string t, v;
        vector<double> m;
        cout << "≤нформац≥€ про ф≥гуру" << endl;
        cout << "=====================" << endl;

        cout << "\nSquare: ";
        a = figur->calc_area();
        cout << a << endl;
        cout << "ѕериметр: ";
        p = figur->calc_perimeter();
        cout << p << endl;
        cout << "“ип: ";
        t = figur->calc_type();
        cout << t << endl;
        cout << "—пец≥альна точка: ";
        m = figur->calc_specdot();
        cout << "M( ";
        for (int i = 0; i < m.size(); i++)
        {
            cout << m[i] << " ";
        }
        cout << ")" << endl;
        cout << "ќпукл≥сть: ";
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