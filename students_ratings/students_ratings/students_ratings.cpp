#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <Windows.h>

using std::cin;		using std::setprecision;
using std::cout;	using std::string;
using std::endl;	using std::streamsize;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//����������� � ��������� ��� ��������
	cout << "����������, ������� ���� ���: ";
	string name;
	cin >> name;
	cout << "������, " << name << "!" << endl;
	
	//����������� � ������� ������ �� ���������,
	//����������� � �������� � � ����� ��������
	cout << "����������, ������� ������ �� ��������� "
		"� �������� � � ����� ��������: ";
	double midterm, final;
	cin >> midterm >> final;

	//����������� ������ �� ���������� �������� �������
	cout << "������� ��� ������ �� ���������� �������� �������, "
		"�������� ���� ��������� ����� �����: ";
	
	//����������� � ����� ������, ����������� �� ��� ���.
	int count = 0;
	double sum = 0;

	//���������� � ������� ������������ ����������� ������
	double x;

	//���������:
	//�� ��������� ���� count ������, �
	// ���������� sum �������� ����� ������ count ������.
	while (cin >> x)
	{
		++count;
		sum += x;
	}

	//������� ���������
	streamsize prec = cout.precision();
	cout << "���� �������� ������ ����� " << setprecision(3)
		<< 0.2 * midterm + 0.4*final + 0.4 * sum / count
		<< setprecision(prec) << endl;

	system("pause");
	return 0;
}