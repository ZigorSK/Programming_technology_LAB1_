#pragma once
#ifndef _Queue_piblic_H_

#include "Queue.h"

#define _Queue_public_H_

typedef class queue_private : private queue
{
public:
	int task(queue &);//Ссылка на обьект, с помощью которого будем заполнять очередь данного объекта
	//Для использования методов бозового класса вне класса-наследника необходимо реализовать get-методы в нём
	//Но так как данное ТЗ не требует этого, в даном проекте этого делаться не будет
} queue_private;

#endif
