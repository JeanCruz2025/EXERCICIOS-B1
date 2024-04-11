/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()

{
    float lado1,lado2,lado3;
    
    printf("qual tipo de triangulo?\n");
    printf("digite o primeiro lado:\n");
    scanf("%f",&lado1);
    
    printf("digite o segundo lado:\n");
    scanf("%f",&lado2);
    
    printf("digite o terceiro lado:\n");
    scanf("%f",&lado3);
    
    if (lado1 == lado2 && lado2 == lado3){
    printf("o triangulo é equilatero!\n");
    }
    else if (lado1 == lado2 || lado2 == lado3){
    printf("o triangulo é isosceles!\n");
    }
    else
    printf("o triangulo é escaleno!\n");
    }

