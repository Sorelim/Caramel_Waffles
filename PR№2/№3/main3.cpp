#include "Figure.h";
#include <iostream>
#include <cmath>
using namespace std;

int main() {       
    Figure figures[3]{
        Figure(0, 0, 0, 0, 0, 0, 0, 0),
        Figure(0, 0, 0, 0, 0, 0, 0, 0),
        Figure(0, 0, 0, 0, 0, 0, 0, 0)
    };

    float x1, x2, x3, x4, y1, y2, y3, y4;

    for (int i = 0; i < 3; i++) {
        cout << "Введите (x1, y1), (x2, y2), (x3, y3), (x4, y4)" << i + 1 << "через пробел: " << endl;
        cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;

        figures[i] = Figure(x1, x2, x3, x4, y1, y2, y3, y4);
    }

    for (int i = 0; i < 3; i++) {
        figures[i].show();

        cout << "Находится в круге:" << figures[i].is_in_circle() << ", " << "Находится вне круга:" << figures[i].is_out_circle() << endl;
        cout << "Прямоугольный четырёхугольник: " << figures[i].is_prug() << endl;
        cout << "Ромб: " << figures[i].is_romb() << endl;
        cout << "Квадат: " << figures[i].is_square() << endl;
    }
    return 0;
}