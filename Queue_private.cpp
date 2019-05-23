#include "Queue_private.h"

queue_private::queue_private()
{
	cout << "Спецификатор наследования private" << endl;
}



void queue_private::marge(queue_private & q1, queue_private & q2)
{
	this->clear();

	node *end_ptr_q = q1.get_end_ptr(), *ptr = nullptr;
	int counter = 0, *array1 = nullptr;

	ptr = end_ptr_q;
	while (ptr)//Нахождение количества элементов очереди
	{
		counter++;
		ptr = ptr->prev_ptr;
	}
	array1 = new int[counter];
	ptr = end_ptr_q;
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
	array1 = nullptr;

	end_ptr_q = q2.get_end_ptr();
	ptr = nullptr;
	counter = 0;

	ptr = end_ptr_q;
	while (ptr)//Нахождение количества элементов очереди
	{
		counter++;
		ptr = ptr->prev_ptr;
	}
	array1 = new int[counter];
	ptr = end_ptr_q;
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

void queue_private::copy(queue_private & q1)
{

	this->clear();
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

void queue_private::push_private(int d)
{
	this->push(d);
}

void queue_private::pop_private()
{
	this->pop();
}

void queue_private::show_private()
{
	this->show();
}

void queue_private::clear_private()
{
	this->clear();
}


int queue_private::task()
{
	//подсчёт числа элементов больших среднего арифметического значения
	node *ptr = this->get_end_ptr();
	int count = 0, sum = 0;

	float aref;
	while (ptr)
	{
		count++;
		sum += ptr->data;
		ptr = ptr->prev_ptr;
	}
	aref = (int)sum / count;
	count = 0;
	ptr = this->get_end_ptr();
	while (ptr)
	{
		if (ptr->data > aref)
			count++;

		ptr = ptr->prev_ptr;
	}



	return count;
}


