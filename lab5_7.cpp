/*
 Автор: Высоцкий Александр
 Группа: СБС-001-О-01
 Задание№: 5.7
 Цель:написать программу кодировки (раскадировки) текста
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
 
using namespace std;
char* str_input(int * str_len);
char* encode(char* str, int* str_len, int bias);
char* decode(char* str, int* str_len, int bias);
int main() {
	int* str_len = new int;
	int bias;
	cout << "Enter bias: ";
	cin >> bias;
	cin.ignore(32767, '\n');
	char* str = str_input(str_len);
	char* encoded_str = encode(str, str_len, bias);
	char* decoded_str = decode(encoded_str, str_len, bias);
	cout << "Default str: " << str << endl;
	cout << "Encoded str: " << encoded_str << endl;
	cout << "Decoded str: " << decoded_str << endl;
}
char* str_input(int* str_len)
{
	string string;
	cout << "Enter string: ";
	getline(cin, string);
	*str_len = string.length();
	char* str = new char[string.length()];
	strcpy(str, string.c_str());
	str[string.length()] = '\0';
	return str;
}
 
char* encode(char* str, int* str_len, int bias)
{
	char* new_str = new char[*str_len];
	strcpy(new_str, str);
	for (int i = 0; i < *str_len; i++) {
		new_str[i] = new_str[i] + bias;
	}
	return new_str;
}
 
char* decode(char* str, int* str_len, int bias)
{
	char* new_str = new char[*str_len];
	strcpy(new_str, str);
	for (int i = 0; i < *str_len; i++) {
		new_str[i] = new_str[i] - bias;
	}
	return new_str;
}
