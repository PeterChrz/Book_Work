## How to compile C programs 
If we have a source file, like hello.c, we can build that program into an executable called hello using the following commands. 

> gcc -o hello hello.c

If you want to compile multiple .c files together for one large distributed program, make sure to list all the .c files in the command. 

> gcc -o program ui.c characters.c npc.c items.c

It will combine into one executable.

You can also specify the specific C standard you wish to compile against. 

> gcc -std=c11 -pedantic hello.c

We can also compile all programs against the c2x standard and set all warnings.

> gcc -Wall -Wextra -std=c2x -pendantic hello.c
