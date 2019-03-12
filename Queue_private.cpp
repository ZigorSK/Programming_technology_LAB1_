#include "Queue_private.h"

int queue_private::task(queue &q)
{
	this->clear();
	//копируем data очереди на который указывает ссылка в данную очередь
	this->copy(q);

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
