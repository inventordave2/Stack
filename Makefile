# Makefile for STACK_C 

compiler=gcc 
debug=-g -DDEBUG 
optim=-O0 
name=stack

stack: ./list.c ./list.h ./stack.c ./stack.h
	$(compiler) $(optim) -c ./stack.c ./list.c

test: stack ./stack_impl_test.c
	$(compiler) $(optim) -o test.exe ./stack_impl_test.c ./list.o ./stack.o

clean:
	del *.o
	del *.exe

	