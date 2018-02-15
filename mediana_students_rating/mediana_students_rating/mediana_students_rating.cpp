#include <iostream>
#include <ios>
#include <iomanip>	//��� setprecision
#include <Windows.h> //��� SetConsolCp, SetConsoleOutputCP
#include <string>
#include <vector>
#include <algorithm> //��� ������� sort ����������� � �������

using std::cin;		using std::setprecision;
using std::cout;	using std::string;
using std::endl;	using std::streamsize;
using std::vector;	using std::sort;

int main()
{
	// ���������� ����������� �������� � �������
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//����������� � ��������� ��� ��������
	cout << "����������, ������� ���� ���: ";
	string name;
	cin >> name;
	cout << "������, " << name << "!" << endl;

	//����������� � ��������� ������ �� ���������,
	//����������� � �������� � � ����� ��������
	cout << "����������, ������� ������ �� ��������� "
		"� �������� � � ����� ��������: ";
	double midterm, final;
	cin >> midterm >> final;

	//����������� ������ �� ��������� �������� �������
	cout << "������� ��� ������ �� ���������� �������� �������, "
		"�������� ���� �������� ����� ����� (ctrl-z -- windows, "
		"ctrl-d -- linux): ";
	
	//���������� � ������� ������������ ���������� ������
	double x;

	//���������� ��� �������� ���� ������ �� �������� �������
	vector<double> homework;
	while (cin >> x)
		homework.push_back(x);

	//���������� ����� ��� ���������� � �������� ��� vec_sz
	//�.�. vec_sz ������� vector<double>::size_type
	typedef vector<double>::size_type vec_sz;
	vec_sz size = homework.size();

	//������������ ������ ������� � ������ ���������
	if (size == 0)
	{
		cout << endl << "���������� ������ ������ ��� �������. "
			"����������, ����������� �����." << endl;
		return 1;
	}

	//��������� �������� � �������
	sort(homework.begin(), homework.end());

	
	
	//������� ��������� �������(��������)
	vec_sz mid = size / 2;
	double median;
	median = size % 2 == 0 ? (homework[mid] + homework[mid - 1]) / 2
		: homework[mid];

	//���������� �������� ������
	streamsize prec = cout.precision();
	cout << "���� �������� ������ ����� " << setprecision(3)
		<< 0.2*midterm + 0.4*final + 0.4*median
		<< setprecision(prec) << endl;
	
	
	//�� ��������� ������� ����� ���� �� �� ������� �������
	system("pause");
	return 0;
}