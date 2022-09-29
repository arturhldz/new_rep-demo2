/*
Prorgama calculadora
*/

#include<stdio.h>
#include<stdlib.h>

int suma(int num1,int num2){
    return num1 + num2;
}

int resta(int num1,int num2){
    return num1 - num2;
}
int multi(int num1,int num2){
    return num1 * num2;
}

int main(int argc, char const *argv[])
{
    int num1,num2;

    printf("Ingrese el numero 1 : \n");
    scanf("%d",&num1);
    printf("Ingrese el numero 2 : \n");
    scanf("%d",&num2);

    printf("El resutlado de la suma es : %d \n",suma(num1,num2));
    printf("El resutlado de la resta es : %d \n",resta(num1,num2));
    printf("El resutlado de la multiplicacion es : %d \n",multi(num1,num2));

    
    return 0;
}
