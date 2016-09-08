#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion;
    float operandoUno=0, operandoDos=0, resultadoSuma, resultadoResta, resultadoMultiplicacion, resultadoDivision;
    int flag1=0, flag2=0, resultadoFactorial;

    while(seguir=='s')
    {
        opcion=menu(operandoUno,operandoDos);

        switch(opcion)
        {
            case 1:
               printf("Ingrese 1er operando: ");
               scanf("%f",&operandoUno);
               flag1=1;
               system("pause");
               system("cls");
               break;

            case 2:
                printf("\nIngrese 2do operando: ");
                scanf("%f",&operandoDos);
                flag2=1;
                system("pause");
                system("cls");
                break;
            case 3:
                resultadoSuma = sumar(operandoUno,operandoDos);
                printf("La suma es: %.2f",resultadoSuma);
                system("pause");
                system("cls");
                break;
            case 4:
                resultadoResta = restar(operandoUno,operandoDos);
                printf("La resta es: %.2f",resultadoResta);
                system("pause");
                system("cls");
                break;
            case 5:
                resultadoMultiplicacion = multiplicar(operandoUno,operandoDos);
                printf("La multiplicacion es: %.2f",resultadoMultiplicacion);
                system("pause");
                system("cls");
                break;
            case 6:
                if(operandoDos!=0){
                resultadoDivision = dividir(operandoUno,operandoDos);
                printf("La division es: %.2f",resultadoDivision);
                }
                else{
                    printf("ERROR, Ingrese segundo operando: \n");
                    system("pause");
                    system("cls");
                }
                break;

            case 7:
                if(operandoUno>=0){
                resultadoFactorial = factorial(operandoUno);
                printf("Factorial es: %d",resultadoFactorial);
                }
                else {
                    printf("ERROR, Ingrese primer operando: \n");
                }
                    system("pause");
                    system("cls");
                break;

            case 8:
                resultadoSuma = sumar(operandoUno,operandoDos);
                printf("La suma es: %.2f\n",resultadoSuma);
                resultadoResta = restar(operandoUno,operandoDos);
                printf("La resta es: %.2f\n",resultadoResta);
                resultadoMultiplicacion = multiplicar(operandoUno,operandoDos);
                printf("La multiplicacion es: %.2f\n",resultadoMultiplicacion);
                if(operandoDos!=0){
                resultadoDivision = dividir(operandoUno,operandoDos);
                printf("La division es: %.2f\n",resultadoDivision);}
                 else{
                    printf("ERROR, Ingrese segundo operando: \n");
                }
                if(operandoUno>=0){
                resultadoFactorial = factorial(operandoUno);
                printf("Factorial de A es: %d\n",resultadoFactorial);}
                else {
                    printf("ERROR, Ingrese primer operando: \n");
                }
                    system("pause");
                    system("cls");
                break;
            case 9:
                seguir = 'n';
                break;
        }
    }
    return 0;
}


