#include <iostream>
#include"Header.h"
#include <locale>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");

	int choice = 0, n = 0, num = 0 ;

	do
	{
		
		system("cls");
		cout << "Выбирите модификатор дуступа при наследовании: " << endl;
		cout << "[1] Public." << endl << "[2] Protected." << endl << "[3] Private." << endl<<"[0] Выход из программы"<<endl;
		cin >> num;
		
		switch (num)
		{
		case 1://public
		{
			queue_public q, q_copy, q_marger;

			do
			{

				system("cls");
				cout << "[1] Добавление элемента очереди." << endl << "[2] Извлечение элемента очереди." << endl << "[3] Вывод очереди на экран." << endl << "[4] Подсчёт числа элементов, больших среднего арифметического." << endl << "[5] Создать копию очереди." << endl << "[6] Слияние оригинальной очереди с копией и вывод результата на экран. " << endl << "[0] Выбрать другой модификатор наследования" << endl;
				cin >> choice;

				switch (choice)
				{
				case 1:
					system("cls");
					cout << "Введите число, которое хотите добавить в очередь: ";
					cin >> n;
					cout << endl;
					q.push(n);
					break;
				case 2:
					system("cls");
					q.pop();
					system("pause");
					break;
				case 3:
					system("cls");
					q.show();
					system("pause");
					break;
				case 4:
					system("cls");
					cout <<  " Колличество элементов больших, чем среднее арифметичемкое очереди: "<< q.task() << endl;
					system("pause");
					break;
				case 5:
					system("cls");
					q_copy.copy(q);
					q_copy.show();
					system("pause");
					break;
				case 6:
					system("cls");
					q_marger.marge(q, q_copy);
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
			break;
		}
		case 2: //_protected
		{
			queue_protected q, q_copy, q_marger;
			do
			{

				system("cls");
				cout << "[1] Добавление элемента очереди." << endl << "[2] Извлечение элемента очереди." << endl << "[3] Вывод очереди на экран." << endl << "[4] Подсчёт числа элементов, больших среднего арифметического." << endl << "[5] Создать копию очереди." << endl << "[6] Слияние оригинальной очереди с копией и вывод результата на экран. " << endl << "[0] Выбрать другой модификатор наследования" << endl;
				cin >> choice;

				switch (choice)
				{
				case 1:
					system("cls");
					cout << "Введите число, которое хотите добавить в очередь: ";
					cin >> n;
					cout << endl;
					q.push_protected(n);
					break;
				case 2:
					system("cls");
					q.pop_protected();
					system("pause");
					break;
				case 3:
					system("cls");
					q.show_protected();
					system("pause");
					break;
				case 4:
					system("cls");
					cout << " Колличество элементов больших, чем среднее арифметичемкое очереди: " << q.task() << endl;
					system("pause");
					break;
				case 5:
					system("cls");
					q_copy.copy(q);
					q_copy.show_protected();
					system("pause");
					break;
				case 6:
					system("cls");
					q_marger.marge(q, q_copy);
					q_marger.show_protected();
					system("pause");
					break;
				case 0:
					break;
				default: cout << "Введена неправильная команда!!!!" << endl;
					system("pause");
					break;

				}
			} while (choice);
			break;
		}
		case 3: //private
		{
			queue_private q, q_copy, q_marger;
			do
			{
				system("cls");
				cout << "[1] Добавление элемента очереди." << endl << "[2] Извлечение элемента очереди." << endl << "[3] Вывод очереди на экран." << endl << "[4] Подсчёт числа элементов, больших среднего арифметического." << endl << "[5] Создать копию очереди." << endl << "[6] Слияние оригинальной очереди с копией и вывод результата на экран. " << endl << "[0] Выбрать другой модификатор наследования" << endl;
				cin >> choice;

				switch (choice)
				{

				case 1:
					system("cls");
					cout << "Введите число, которое хотите добавить в очередь: ";
					cin >> n;
					cout << endl;
					q.push_private(n);
					break;
				case 2:
					system("cls");
					q.pop_private();
					system("pause");
					break;
				case 3:
					system("cls");
					q.show_private();
					system("pause");
					break;
				case 4:
					system("cls");
					cout << " Колличество элементов больших, чем среднее арифметичемкое очереди: " << q.task() << endl;
					system("pause");
					break;
				case 5:
					system("cls");
					q_copy.copy(q);
					q_copy.show_private();
					system("pause");
					break;
				case 6:
					system("cls");
					q_marger.marge(q, q_copy);
					q_marger.show_private();
					system("pause");
					break;
				case 0:
					break;
				default: cout << "Введена неправильная команда!!!!" << endl;
					system("pause");
					break;
				}
			} while (choice);
			break;
		}
		case 0:
			break;
		default:
			cout << "Неправильно введена команда!!!!" << endl;
			system("pause");
			break;
		}
	
	} while (num);

	return 0;
}
