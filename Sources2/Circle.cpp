#define _USE_MATH_DEFINES
#include "Figure.h"
#include <math.h>
#include <cmath>
using std::cout;

class Circle : public Figure {

private:

    double x, y, r;

public:


    double calc_area() const
    {
        double s;
        s = M_PI * r * r;
        return s;
    }

    double calc_perimeter() const
    {
        double p;
        p = 2 * M_PI * r;
        return p;
    }
    vector<double> calc_specdot() const
    {
        vector<double> m;
        m.push_back(x);
        m.push_back(y);
        cout << "����� ���� ";
        return m;
    }
    string calc_type() const
    {
        string s;
        s = "����";
        return s;
    }
    string calc_vyp()  const
    {
        string s;
        s = "�������";
        return s;
    }

    Circle(double x, double y, double radius)
        : x(x), y(y), r(radius) {}
};