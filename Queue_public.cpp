#include "Queue_public.h"

queue_public::queue_public()
{
	cout << "Спецификатор наследования public" << endl;
}



void queue_public::marge(queue_public & q1, queue_public & q2)
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

void queue_public::copy(queue_public & q1)
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


int queue_public::task()
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
	aref = (int) sum / count;
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

