#pragma once
#ifndef _Queue_protected_H_

#include "Queue.h"
#include<iostream>

using namespace std;

#define _Queue_protected_H_
class queue_protected : protected queue
{
public:
	queue_protected();
	int task();
	void marge(queue_protected& q1, queue_protected & q2);//Перегружаем метод marge, т.к. в базовом классе аргументы типа queue
	void copy(queue_protected &q);//Перегрузка copy, аналогично marge
	void push_protected(int d);
	void pop_protected();
	void show_protected();
	void clear_protected();
};
#endif
