#include <stdio.h> 

int main(void)
{
    char answer;
	printf("This is compiled staticly C program Made with main.c and GCC for Scratch Static Bin Image on Docker \n\n");
    printf("[Y/y] to Coninue or [N/n] to Exit?");
    while (scanf(" %c", &answer) == 1 && (answer == 'Y' || answer == 'y'))
    {
        printf("You said %c\n", answer);
        printf("Still nothing here!! no shell no library only one lonely static main.bin file\n\n[Y/y] to Coninue or [N/n] to Exit?"); 
    }
    printf("Bye!\n");
    return 0;
}