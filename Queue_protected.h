#pragma once
#ifndef _Queue_protected_H_
#include "Queue.h"
#define _Queue_protected_H_
typedef class queue_protected : protected queue
{
public:
	int task(queue &q);
	//Для использования методов бозового класса вне класса-наследника необходимо реализовать get-методы в нём
	//Но так как данное ТЗ не требует этого, в даном проекте этого делаться не будет
} queue_protected;
#endif
