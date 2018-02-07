#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Введите, пожалуйста, свое имя: ";
	string name;
	cin >> name;

	//Создаем сообщение для вывода
	const string greeting = "Привет, " + name + "!";
	//Создаем вторую и четвертую строки приветствия 
	//ставим пробелы на всю длину прветствия
	const string spaces(greeting.size(), ' ');
	const string second = "* " + spaces + " *";
	//создаем первую и пятую строки приветствия
	const string first(second.size(), '*');

	//Выводим все строки.
	cout << endl;
	cout << first << endl;
	cout << second << endl;
	cout << "* " << greeting << " *" << endl;
	cout << second << endl;
	cout << first << endl;

	system("pause");
	return 0;
}