#pragma once
#ifndef _Queue_piblic_H_

#include "Queue.h"

#define _Queue_public_H_

class queue_private : private queue
{
public:
	queue_private(queue &q1);

	int task_private();
};


#endif
