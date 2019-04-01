#include "Queue_protected.h"

queue_protected::queue_protected(queue & q1)
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

int queue_protected::task_protected()
{
	return this->task();
}
