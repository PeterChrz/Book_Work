## How to compile C programs 
If we have a source file, like hello.c, we can build that program into an executable called hello using the following commands. 

gcc -o hello hello.c

If you want to compile multiple .c files together for one large distributed program, make sure to list all the .c files in the command. 

gcc -o program ui.c characters.c npc.c items.c

It will combine into one executable. 
