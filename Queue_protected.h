#pragma once
#ifndef _Queue_protected_H_

#include "Queue.h"

#define _Queue_protected_H_
class queue_protected : protected queue
{
public:
	queue_protected(queue &q1);

	int task_protected();
};
#endif
