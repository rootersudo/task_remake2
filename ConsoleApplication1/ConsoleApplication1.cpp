// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;

int main()
{
    while (true) {
        int g = 0;
        float a, b, c, a1, b1, c1, x, y;
        
        setlocale(0, "RU");
        cout << "������� ��� ����������� ��� ��������� ������ ���� ax+by+c=0\n";

        cin >> a >> b >> c;
        cout << "������� ������������ ��� ������ ������ ������ ����\n";

        cin >> a1 >> b1 >> c1;
        

        if (((a * b1) == (b * a1)) == (a * c1)==(c*b1)) {
            cout << "������ ���������\n";
            g = 1;
        }
        else if ((a * b1 == b * a1) && (a * c1 != c * a1))
            cout << "������ �����������\n";

        else {
            if ((a * b1 != a1 * b) && (g == 0)) {
                y = -(c1 * a + c * a1) / (b * a + b1 * a);
                x = -(b * y + c) / a;
                cout << "���������� ����� �����������: (" << x << ";" << y << ")\n";
            };
        }
    }
    return 0;
}