#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double v = 0.0;
	cout << "введите среднюю скорость движения в м/сек  V - ";
	cin >> v;

	double s = 0.0;
	cout << "введите расстояние между пунктами А и Б в метрах  S - ";
	cin >> s;

	double t = 0.0;
	cout << "введите время движения мотоциклиста из А в Б в секундах t - ";
	cin >> t;

	double average_speed1 = 0.0;
	average_speed1 = s / t;
	cout << " средняя скорость движения мотоциклиста из А в Б = "<< average_speed1<<" метров в секунду\n";

	double average_speed2 = 0.0;
	average_speed2 = s / (2 * s / v - t);
	cout << " средняя скорость движения мотоциклиста из Б в А = "<< average_speed2<<" метров в секунду\n";
	return 0;
}