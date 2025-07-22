# Makefile for STACK_C 

compiler=gcc 
debug=-g -DDEBUG 
optim=-O0 
name=stack


stack: ./stack.c ./stack.h ./list.c ./list.h
	$(compiler) $(debug) $(optim) -c -o $(name).o ./stack.c ./list.c
	
clean:
	del *.o
	
	