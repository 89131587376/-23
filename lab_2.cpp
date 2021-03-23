
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    repeat:
    cout << endl;
    cout << " ВВедите число n - ";

    int factorial = 1;
    int n;

    while (!(cin >> n) || (cin.peek() != '\n'))
    {
        cin.clear();
        while (cin.get() != '\n');
        cout << "Введите число!" << endl;
    }
    if (n == 0) {
        cout << " факториал 0 = 0";
        return 0;
    }
    else if (n < 0) {
        cout << " факториал находится только у неотрицательных целых чисел\n " << endl;
        goto repeat;
    }

    for (int i = 1; i <= n; i++) {
        factorial = factorial * i;
    }
        cout << "факториал " << n << " = " << factorial << "\n";
    }

