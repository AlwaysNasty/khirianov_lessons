#include <iostream>
#define __STDC_LIMIT_MACROS
#include <stdint.h>

using namespace std;

int main()
{
    int64_t a;
    int64_t b;

    cin >> a >> b;

    while ((a != 0) && (b != 0))
    {
        // �������� ������� ����� ��� ������ ��������
        if (a > b)
        {
            cout << "DEBUG, case 1: " << a << " " << b << '\n';
            a = a % b; // ����� �������
        }
        else
        {
            cout << "DEBUG, case 2: " << a << " " << b << '\n';
            b %= a; // ����������� ����� ������ ������� � �������������
        }
    }

    cout << (a + b) << '\n';
    return 0;
}
