#include <iostream>
#include"Header.h"
#include <locale>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");

	queue q_base, q_copy, q_marger;
	queue_public q_public;
	queue_protected q_protected;
	queue_private q_private;


	int choice = 0, n = 0, num = 0;

	do
	{
		system("cls");
		cout << "[1] Добавление элемента очереди." << endl << "[2] Извлечение элемента очереди." << endl << "[3] Вывод очереди на экран." << endl << "[4] Подсчёт числа элементов, больших среднего арифметического." << endl << "[5] Создать копию очереди." << endl << "[6] Слияние оригинальной очереди с копией и вывод результата на экран. " << endl << "[0] Выход из программы" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			system("cls");
			cout << "Введите число, которое хотите добавить в очередь: ";
			cin >> n;
			cout << endl;
			q_base.push(n);
			break;
		case 2:
			system("cls");
			q_base.pop();
			system("pause");
			break;
		case 3:
			system("cls");
			q_base.show();
			system("pause");
			break;
		case 4:
			system("cls");
			cout << "Выбирите модификатор дуступа при наследовании: " << endl;
			cout << "[1] Public." << endl << "[2] Protected." << endl << "[3] Private." << endl;
			cin >> num;
			switch (num)
			{
			case 1:
				cout << "Колличество элементов, больших, чем среднее арифметическое:" << q_public.task(q_base) << endl;
				break;
			case 2:
				cout << "Колличество элементов, больших, чем среднее арифметическое:" << q_protected.task(q_base) << endl;
				break;
			case 3:
				cout << "Колличество элементов, больших, чем среднее арифметическое:" << q_private.task(q_base) << endl;
				break;
			default:
				cout << "Неправильно введена команда!!!!" << endl;
				break;
			}
			system("pause");
			break;
		case 5:
			system("cls");
			q_copy.clear();
			q_copy.copy(q_base);
			cout << "Скопированная очередь: " << endl;
			q_copy.show();
			system("pause");
			break;
		case 6:
			system("cls");
			q_marger.marge(q_base, q_copy);
			q_marger.show();
			system("pause");
			break;
		case 0:
			break;
		default: cout << "Введена неправильная команда!!!!" << endl;
			system("pause");
			break;

		}
	} while (choice);

	return 0;
}
