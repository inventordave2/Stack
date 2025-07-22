# Stack

A simple stack library based on Werner Stoop's 'Linked List' subroutines.
The stack is by default FIFO, but do look through the (rather digestible)
source files to learn how to (rather easily) make it LIFO (it's just a
different pop() function).


'Stack' a test program to demonstrate the implementation working.

To build:
	
	make test
	
Then invoke:
	
	test.exe

(If you wish to look at the test program, along with 'stack.h', to gauge how to implement the stack feature
in your own, probably a bit sh\*tter client program, look at the test program source code in file:

'stack_test_impl.c'

Or, if you are a goddamn once-in-a-thousand-year genius, just build the linkable .o library files with:

	make stack
	
(The ouptput obj files are called 'stack.o' (and I think, the better of the two), and 'list.o',
which while a bit sh\*tter (not by much, but there's still a difference), is, with all the
will in the world, begrudgingly, a necessary component.)
	
From your source files that need access to the Stack subsystem, just:
	
	#include "./path/to/stack.h"
	
And you can then simply link to what is perhaps, and I do not say these things lightly, or in haste,
and nor am I in the habit of talking absolute f nonsense, the single greatest stack subroutine (wrapper)
the technology World may have ever seen.

Your compile (build) invocation might look a little something like this ('mymortalcode.c'is what I
imagine you might call your arbitrary client app source C file. It's your choice, though, no pressure).

	gcc -o mygratefuluserapp.exe ./mymortalcode.c ./path/to_stackfiles/stack.o ./path/to_stackfiles/list.o
	
Recognition to open source coder Werner Stoop for his 'linked list' implementation, which, while by no means
the best piece of engineering in this Stack implementation overall, I would be remiss if I didn't acknowledge
his (technically) useful contribution to my world, your world, this world, and any other world that needs
a linked list library.

My mom calls me Scoochy-Whoochy Mc-Cute-Face, but you can call me Dave.

"Inventor Dave" 2025.
