#pragma once
#ifndef _Queue_piblic_H_

#include "Queue.h"
#include<iostream>

using namespace std;

#define _Queue_public_H_
class queue_public : public queue
{
public:
	queue_public();
	int task();
	void marge(queue_public & q1, queue_public & q2);//Перегружаем метод marge, т.к. в базовом классе аргументы типа queue
	void copy(queue_public &q);//Перегрузка copy, аналогично marge
};

#endif
