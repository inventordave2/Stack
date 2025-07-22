// STACK_H

#ifndef DAVELIB_STACK_H
#define DAVELIB_STACK_H

#include "./list.h"

typedef struct Stack	{

	link_list* stack;
	void* (*pop)();
	void* (*push)( void* item );

	uint8_t type; // LIFO or FIFO
	link_list* (*newstack)();
	int (*isempty)();

} Stack;

extern struct Stack* stackapi;
extern static link_list* stack;
void InitStackLib();

#define push(element) list_prepend( (stack),(element) )
#define pop() list_pop( (stack) )
#define newstack() list_destroy((stack)); stack=list_create();
#define isstackempty() list_isempty( (stack) )
#define killstack() list_destroy(stack)


#endif
