/*
 Автор: Высоцкий Александр
 Группа: СБС-001-О-01
 Задание№: 5.7
 Цель:написать программу кодировки (раскадировки) текста
*/
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream> 
#include <string> 
 
использование пространства имен std; 
char* str_input(int * str_len); 
char* encode(char* str, int* str_len, int bias); 
char* decode(char* str, int* str_len, int bias); 
int main() { 
 int* str_len = new int; 
 инт предвзятость; 
 cout <: "; 
 cin >>> смещение; 
 cin.ignore(32767, '\n'); 
 char* str = str_input(str_len); 
 char* encoded_str = encode(str, str_len, bias); 
 char* decoded_str = decode(encoded_str, str_len, bias); 
 cout << "Default str:" << str <; 
 cout << "Encoded str:" << encoded_str <; 
 cout << "Decoded str:" << decoded_str <; 
}
char* str_input(int* str_len) 
{
 строка строка; 
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
 for (int i = 0; i) { 
 new_str[i] = new_str[i] + смещение; 
	}
 return new_str; 
}
 
char* decode(char* str, int* str_len, int bias) 
{
 char* new_str = new char[*str_len]; 
 strcpy(new_str, str); 
 for (int i = 0; i) { 
 new_str[i] = new_str[i] - смещение; 
	}
 return new_str; 
}
