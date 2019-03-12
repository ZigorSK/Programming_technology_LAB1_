#include "Queue.h"
#include<iostream>
#include<iomanip>

using namespace std;

queue::queue()//инициализация очереди
{
	end_ptr = nullptr;
}

queue::~queue()//освобождение памяти
{
	node *ptr = end_ptr;

	while ((ptr = end_ptr) != nullptr)
	{
		end_ptr = end_ptr->prev_ptr;
		delete ptr;
	}
	end_ptr = nullptr;
}

node * queue::get_end_ptr()
{
	return end_ptr;
}

void queue::push(int d)//добавление элемента в очередь
{
	node *ptr = end_ptr;

	if (ptr)
	{
		ptr = new node;
		ptr->prev_ptr = end_ptr;
		end_ptr = ptr;
		ptr->data = d;
	}
	else//Добавление первого элемента в очередь
	{
		end_ptr = new node;
		end_ptr->data = d;
		end_ptr->prev_ptr = nullptr;
	}
}

void queue::pop()//Извелчение элемента из очереди.
{//Если в узле prev_ptr = nullptr, то данный узел в очереди - элемент на выходе
	if (end_ptr != nullptr)//если в очереди есть элементы
	{
		node *ptr = end_ptr, *next_ptr = end_ptr;


		while (ptr->prev_ptr)
		{
			next_ptr = ptr;
			ptr = ptr->prev_ptr;
		}
		if (ptr != end_ptr)//В очереди больше одного элемента
		{
			cout << "Из очереди изъят элемент: " << ptr->data << endl;
			delete ptr;
			next_ptr->prev_ptr = nullptr;
		}
		else//В очереди остался 1 элемент
		{
			cout << "Из очереди изъят элемент: " << ptr->data << endl;
			delete ptr;
			end_ptr = nullptr;
		}

	}
	else
	{
		cout << "В очереди нет ни одного элемента!!!" << endl;
	}
}

void queue::show()//Вывод очереди на экран;
{
	node *ptr = end_ptr;

	cout << setw(15) << "Конец очереди";
	cout << setw(5) << "|" << endl;

	while (ptr)
	{
		cout << setw(15) << ptr->data;
		cout << setw(5) << "|" << endl;
		ptr = ptr->prev_ptr;
	}
	cout << setw(15) << "Начало очереди";
	cout << setw(5) << "V" << endl;
}

void queue::clear()//Очищение очереди
{
	node *ptr1 = end_ptr, *ptr2 = end_ptr;

	while ((ptr1 = ptr2) != nullptr)
	{
		ptr2 = ptr2->prev_ptr;
		delete ptr1;
	}
	end_ptr = nullptr;
}

void queue::marge(queue & q1, queue & q2)
{
	this->clear();
	//слияние элементов очереди
	this->copy(q1);
	this->copy(q2);
}

void queue::copy(queue &q1)//копируем q1 в данный
{
	//копирование q1 в this

	node *end_ptr_q1 = q1.get_end_ptr(), *ptr = nullptr;
	int counter = 0, *array1 = nullptr;

	ptr = end_ptr_q1;
	while (ptr)//Нахождение количества элементов очереди
	{
		counter++;
		ptr = ptr->prev_ptr;
	}
	array1 = new int[counter];
	ptr = end_ptr_q1;
	for (int i = 0; counter - i > 0; i++)//заполнение массива array1 элементами очереди, где [0] - первый элемент очереди;
	{
		*(array1 + counter - i - 1) = ptr->data;
		ptr = ptr->prev_ptr;
	}
	for (int i = 0; counter > i; i++)
	{
		this->push(*(array1 + i));
	}
	delete[] array1;

}
