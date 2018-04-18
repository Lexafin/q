// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<string.h>
#include<Windows.h>

// подключаем пространство имен std, в котором
// реализованы стандартные потоки ввода/вывода
using namespace std;
struct Device { // Описание класса "адрес"
				// внутренние свойства и методы класса 
private:
	char gorod[20]; // город
	char yliua[20];  // улица
	int nomer;      // номер
				 // внешне доступные свойства и методы класса
public:
	// методустановкинаименования
	void set_gorod(char *new_gorod) {
		strcpy_s(gorod, new_gorod); // копируемстроку
	}
	// методустановкитипа
	void set_yliua(char *new_yliua) {
		strcpy_s(yliua, new_yliua); // копируемстроку
	}
	// методустановкимощности
	void set_nomer(int new_nomer) {
		nomer = new_nomer; // копируем значение
	}
	// метод для получения наименования
	char *get_gorod() {
		return gorod; // возвращаем указатель на строку
	}
	// метод для получения типа
	char *get_yliua() {
		return yliua; // возвращаем указатель на строку
	}
	// метод для получения мощности
	int get_nomer() {
		return nomer; // возвращаем значение
	}
	// метод вывода свойств класса на экран
	void print() {
		// cout - поток вывода на экран
		// << - указывает направление вывода, т.е. в поток
		// endl - указывает на конец строки
		cout << "город: " << gorod << " улица: " << yliua << " номер: " << nomer << endl;
	}
};
int main() {
	SetConsoleOutputCP(1251); // для корректного отображения русской кодировки
	SetConsoleCP(1251); // для корректного ввода русской кодировки

	Device arr[5]; // массив классов

	char gorod[20]; // переменные для ввода информации
	char yliua[20];
	int nomer;

	for (int i = 0; i < 5; i++) { // циклвводаинформации
								  // вводим данные о приборах
		cout << "4islo " << i << endl;
		// вводим наименование
		cout << "ccc: ";
		// cin - поток ввода
		// >> - указывает на направление ввода, т.е. из потока
		cin >> gorod;
		// вводимтип
		cout << "ylitsa: ";
		cin >> yliua;
		// вводим мощность
		cout << "nomer: ";
		cin >> nomer;

		// устанавливаем свойства класса в массиве
		arr[i].set_gorod(gorod);
		arr[i].set_yliua(yliua);
		arr[i].set_nomer(nomer);
	}

	
	// выводим информацию на экран c помощью встроенных методов получения информаци
	for (int i = 0; i < 5; i++) { // циклвыводаинформации
		cout << "gorod: " << arr[i].get_gorod() << " ylitsa: " << arr[i].get_yliua() << " nomer: " << arr[i].get_nomer() << endl;
	}
	system("pause");
	return 0;
}

