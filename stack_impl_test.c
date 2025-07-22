// STACK_IMPL_TEST_C

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "./stack.h"

typedef struct genericStruct	{

	uint32_t id;
	char* desc;

} genericStruct;


int main( int argc, char** argv )	{

/*
1. Initialise a Stack.
2. Populate with stack frames.
3. pop() and push() some entries, confirm stack integrity.
4. Report success or failure.
*/

	InitStackLib();
	newstack();
	
	printf( "Hold on to your granny, your schitzu, your beer, your butts, your nuts. This test program will initialise a stack, then insert 10 generic objects into it (each identified by a serial ID between 0-9). It will then pop() each of these elements out of the stack one by one, and if they pop() correctly out of the stack, the test app will print their serial ID number to identify them.\n\n\n");


	struct genericStruct* gs;
	char msg[]	= "Object id: \0";
	char c[]	= " \0";
	uint8_t t = 0;
	
	for( t; t<10; t++ )	{
		
		gs = (struct genericStruct*)calloc( 1, sizeof(struct genericStruct) );
		
		gs->id = t;
		gs->desc = (char*)calloc( 1, 16 );
		
		strcpy( gs->desc, msg );
		
		c[0] = '0' + t;
		
		strcat( gs->desc, c );
		
		push( gs );
	}
	
	for( t=0; t<10; t++ )	
		gs = pop(), printf( "Stack element #%d has desc: '%s'\n", gs->id, gs->desc );
	
	printf( "\n\n" );
	printf( "Did it work? Oh dear God, the tension is killing me...\n" );

	killstack();

	exit( 0 );
}

