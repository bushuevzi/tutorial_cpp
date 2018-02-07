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
	
	cout << "Привет, " << name << "!" << endl;
	
	system("pause");
	return 0;
}