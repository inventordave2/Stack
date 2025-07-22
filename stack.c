// STACK_C

#include <stdlib.h>
#include <stdint.h>
#include "./stack.h"

uint8_t status = 0;

link_list* stack;
struct Stack* stackapi;

//typedef void (*list_dtor)(void *data);
void stack_c_elem_dtor( void* data)	{

	free( data );
	return;
}

static void* stackpop()	{

	return pop();
}

static void* stackpush( void* item )	{

	return push(item);
}

static struct link_list* stack_newstack()	{

	newstack();
	return stack;
}

void InitStackLib()	{

	newstack();
	
	if( status != 1 )	{
		
		stackapi = (struct Stack*)calloc( 1, sizeof( struct Stack) );
		stackapi->pop = stackpop;
		stackapi->push = stackpush;
		stackapi->newstack = stack_newstack;
		stackapi->isempty = list_isempty;
	}
	
	status = 1;
	return;
}

