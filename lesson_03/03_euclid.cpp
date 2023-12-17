#include <iostream>
#include <stdint.h>
using namespace std;

int main()
{
    int64_t a;
    int64_t b;

    cin >> a >> b;

    while (b != 0)
    {
        // ����� a >= b
        a = a % b; // ����� �������
        auto tmp = a;
        a = b;
        b = tmp;
    }

    cout << a << '\n';
}
