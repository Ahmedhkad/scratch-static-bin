# Scratch Static Bin
## on Docker

This is minimal c program in docker built by a compiled C file to static bin file and then execute it automaticly by "make" command
* to compile c file you need gcc 
* to run "make" you need make
```
apt install gcc make
```
then just run "make" to build image and run it
```
make
```
then run "make rm" to remove image and compiled file
```
make rm 
```

If you don't have make you can build it manualy just run
``` bash
docker build -t scratch-static:0.1 .
docker run --rm -it scratch-static:0.1 /main
```
to remove image run
```
docker image rm scratch-static:0.1
```
inside main.bin file after execute it, you will see this text and question
```
This is compiled staticly C program Made with main.c and GCC for Scratch Static Bin Image on Docker 

[Y/y] to Coninue or [N/n] to Exit?y
You said y
Still nothing here!! no shell no library only one lonely static main.bin file

[Y/y] to Coninue or [N/n] to Exit?n
Bye!
```
