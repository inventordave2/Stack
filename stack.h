// STACK_H

#ifndef DAVELIB_STACK_H
#define DAVELIB_STACK_H

#include <stdint.h>
#include "./list.h"

typedef struct Stack	{

	link_list* stack;
	void* (*pop)();
	void* (*push)( void* item );

	uint8_t type; // LIFO or FIFO
	link_list* (*newstack)();
	int (*isempty)(link_list* s);

} Stack;

extern struct Stack* stackapi;
extern link_list* stack;
void InitStackLib();
extern uint8_t status;
void stack_c_elem_dtor( void* data);

#define push(element) list_prepend( (stack), (void*) element )
#define pop() list_pop( (stack) )
#define newstack() if( status==1) list_destroy((stack), stack_c_elem_dtor); stack=list_create();
#define isstackempty() list_isempty( (stack) )
#define killstack() list_destroy(stack,stack_c_elem_dtor)


#endif
