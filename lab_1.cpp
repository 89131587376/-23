
#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << endl;

	double v;
	do {
		cout << "введите среднюю скорость движения в м/сек  V - ";
		cin >> v;
	
			if (!cin.good()){
				cin.clear();
				cin.ignore(10, '\n');
				cout << "Необходимо ввести вещественное число." << endl;
			}
		else break;
	} while (true);

	double s;
	do{
		cout << "введите расстояние между пунктами А и Б в метрах  S - ";
		cin >> s;
			
			if (!cin.good()) {
				cin.clear();
				cin.ignore(10, '\n');
				cout << "Необходимо ввести вещественное число." << endl;
			}
		else break;
	} while (true);

	double t;
	do {
		cout << "введите время движения мотоциклиста из А в Б в секундах t - ";
		cin >> t;

		if (!cin.good()) {
			cin.clear();
			cin.ignore(10, '\n');
			cout << "Необходимо ввести вещественное число." << endl;
		}
		else break;
	} while (true);

	double average_speed1;
	average_speed1 = s / t;
	cout << " средняя скорость движения мотоциклиста из А в Б = " << average_speed1 << " метров в секунду\n";

	double average_speed2;
	average_speed2 = s / (2 * s / v - t);
	cout << " средняя скорость движения мотоциклиста из Б в А = " << average_speed2 << " метров в секунду\n";
	return 0;
}