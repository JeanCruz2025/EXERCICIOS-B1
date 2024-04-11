/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()

{
    float numero1,numero2,numero3;
    
    printf("qual numero é maior?\n");
    printf("digite o primeiro numero:\n");
    scanf("%f",&numero1);
    
    printf("digite o segundo numero:\n");
    scanf("%f",&numero2);
    
    printf("digite o terceiro numero:\n");
    scanf("%f",&numero3);
    
     if(numero1 > numero2){
     printf("primeiro numero é maior!\n");
     }
     else if(numero2 > numero3){
     printf("segundo numero é maior!\n");
     }
     else {
     printf("o terceiro numero é maior!\n");
     }
     return 0;
}