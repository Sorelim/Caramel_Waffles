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
        cout << "������� (x1, y1), (x2, y2), (x3, y3), (x4, y4)" << i + 1 << "����� ������: " << endl;
        cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;

        figures[i] = Figure(x1, x2, x3, x4, y1, y2, y3, y4);
    }

    for (int i = 0; i < 3; i++) {
        figures[i].show();

        cout << "��������� � �����:" << figures[i].is_in_circle() << ", " << "��������� ��� �����:" << figures[i].is_out_circle() << endl;
        cout << "������������� ��������������: " << figures[i].is_prug() << endl;
        cout << "����: " << figures[i].is_romb() << endl;
        cout << "������: " << figures[i].is_square() << endl;
    }
    return 0;
}