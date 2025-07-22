// STACK_C

#include "./stack.h"
static uint8_t status = 0;

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
	stackapi->pop = stackpop;
	stackapi->push = stackpush;
	stackapi->newstack = stack_newstack;
	stackapi->isempty = isstackempty;

	status = 1;
	return;
}

