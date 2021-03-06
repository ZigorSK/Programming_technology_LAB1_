#pragma once
#ifndef _Queue_H_

#include "Node.h"

#define _Queue_H_

class queue
{
	node *end_ptr;//указатель на узел, находящийся последним в очереди

public:
	queue();//Инициализация end_ptr

	~queue();//Освобождение памяти

	node *get_end_ptr();//Получения указателя на последний узел очереди

	void push(int);//Добавление элемента в очередь

	void pop();//извлечение элемента из очереди 

	void copy(queue &q);//Копирование класса, ссылка на обьект которого - аргумент метода

	void show();//Вывод очереди на экран

	 void clear();//Очищение очереди

	void marge(queue &q1, queue &q2);//Слияние очередей q1 c q2, результат в обьекте, метод которого был вызван 

};

#endif
