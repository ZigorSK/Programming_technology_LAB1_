#pragma once
#ifndef _Queue_private_H_

#include "Queue.h"
#include<iostream>

using namespace std;

#define _Queue_private_H_

class queue_private : private queue
{
public:
	queue_private();
	int task();
	void marge(queue_private& q1, queue_private & q2);//Перегружаем метод marge, т.к. в базовом классе аргументы типа queue
	void copy(queue_private &q);//Перегрузка copy, аналогично marge
	void push_private(int d);
	void pop_private();
	void show_private();
	void clear_private();

};


#endif
