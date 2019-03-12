#pragma once
#ifndef _Node_H_
#define _Node_H_

typedef struct node
{
	int data;
	struct node *prev_ptr;//указатель на предыдущий узел в очереди

} node;

#endif
