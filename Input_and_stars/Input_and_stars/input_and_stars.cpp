#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "�������, ����������, ���� ���: ";
	string name;
	cin >> name;

	//������� ��������� ��� ������
	const string greeting = "������, " + name + "!";
	//������� ������ � ��������� ������ ����������� 
	//������ ������� �� ��� ����� ����������
	const string spaces(greeting.size(), ' ');
	const string second = "* " + spaces + " *";
	//������� ������ � ����� ������ �����������
	const string first(second.size(), '*');

	//������� ��� ������.
	cout << endl;
	cout << first << endl;
	cout << second << endl;
	cout << "* " << greeting << " *" << endl;
	cout << second << endl;
	cout << first << endl;

	system("pause");
	return 0;
}