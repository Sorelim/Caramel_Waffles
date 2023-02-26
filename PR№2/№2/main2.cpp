#include "Circle.h";
#include <iostream>
#include <cmath>
using namespace std;

int main() {   
    �ircle circles[3]{
        �ircle(0, 0, 0),
        �ircle(0, 0, 0),
        �ircle(0, 0, 0)
    };

    float r, x_center, y_center;

    for (int i = 0; i < 3; i++) {
        cout << "������� ������, ����� X, ����� Y ��� ���������� �" << i + 1 << " ����� ������: " << endl;
        cin >> r >> x_center >> y_center;
        circles[i].set_circle(r, x_center, y_center);
    }

    for (int i = 0; i < 3; i++) {
        circles[i].show();
        cout << "������� �����: " << circles[i].square() << endl;
        cout << "������� A, B, C ��� ������������, ������� ��������� ������ ��� ������� ����� �" << i + 1 << " ����� ������: " << endl;
        cin >> a >> b >> c;
        cout << "���� �� ABC ������? - " << circles[i].triangle_in(a, b, c) << endl;
        cout << "ABC ��������� �������? - " << circles[i].triangle_around(a, b, c) << endl;
        float r2, x2, y2;
        cout << "������� ������ �����, ����� ���������, ������������ �� �� ����� (R, Xc, Yc):" << endl;
        cin >> r2 >> x2 >> y2;
        cout << "����� ������������? - " << circles[i].check_circle(r2, x2, y2) << endl;
    }
    return 0;
}