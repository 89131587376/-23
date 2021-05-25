/*
	Автор: Высоцкий Александр
	Группа: СБС-001-О-01
	Задание№: 4.7
	Цель: Реализовать фунцию для вычисления ряда sin(x)/x граница ряда определяется как константа.
*/

#include <iostream>
#include <climits>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;
auto value() {
	while (true) {
		cout << "Enter the argument: ";
		short x;
		cin >> x;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(10, '\n');
			cout << "The entered value is not correct, please try again " << endl;
		}
		else {
			return x;
		}
	}
}
int factorial(int n) {
	return (n == 0) ? 1 : n * factorial(n - 1);
}
double calculations(int x) {
	double result = 0;
	const unsigned short n = 8;
	for (int i = 0; i < n; i++) {
		result += pow(-1, i) * pow(x, 2 *  i) / factorial(2* (i+1));
	}
	return result;
}
int main() {
	int x = value();
	double result = calculations(x);
	cout << "result of calculating the sin(x)/x series, x = (" << x << ") = " << result << endl;
	system("pause");
	return 0;
}
