/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float gcel, F;
    
    printf("Conversao de temperatura de C para F\n");
    printf ("Digite a temperatura em graus Celsius:\n");
    scanf ("%f",&gcel);
    
    F = ((gcel * 9/5) + 32);
    {
      printf  ("O valor da temperatura em Fahrenheit é: %.1f F",F);
    }
}
