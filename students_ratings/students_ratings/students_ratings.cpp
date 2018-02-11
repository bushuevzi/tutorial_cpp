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

	//Запрашиваем и считываем имя студента
	cout << "Пожалуйста, введите свое имя: ";
	string name;
	cin >> name;
	cout << "Привет, " << name << "!" << endl;
	
	//Запрашиваем и считаем оценки по экзаменам,
	//проведенным в середине и в конце семестра
	cout << "Пожалуйста, введите оценки по экзаменам "
		"в середине и в конце семестра: ";
	double midterm, final;
	cin >> midterm >> final;

	//Запрашиваем оценки за выполнение домашних заданий
	cout << "Введите все оценки за выполнение домашних заданий, "
		"завершив ввод признаком конца файла: ";
	
	//Колличество и сумма оценок, прочитанных до сих пор.
	int count = 0;
	double sum = 0;

	//Переменная в которую производится считываение данных
	double x;

	//Инвариант:
	//Мы прочитали пока count оценок, и
	// перпеменна sum содержит сумму первых count оценок.
	while (cin >> x)
	{
		++count;
		sum += x;
	}

	//Выводим результат
	streamsize prec = cout.precision();
	cout << "Ваша итоговая оценка равна " << setprecision(3)
		<< 0.2 * midterm + 0.4*final + 0.4 * sum / count
		<< setprecision(prec) << endl;

	system("pause");
	return 0;
}