#pragma once
#ifndef _Queue_piblic_H_

#include "Queue.h"

#define _Queue_public_H_

typedef class queue_public : public queue
{
public:
	int task(queue &);//Ссылка на обьект, с помощью которого будем заполнять очередь данного объекта
} queue_public;

#endif
