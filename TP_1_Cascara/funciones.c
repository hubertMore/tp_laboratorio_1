#include <stdio.h>



int menu(float a,float b)
{
    int opcion,operandoUno,operandoDos,flag1=0,flag2=0;

        printf("1- Ingresar 1er operando (A= %.2f)\n",a);
        printf("2- Ingresar 2do operando (B= %.2f)\n",b);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la multiplicacion (A*B)\n");
        printf("6- Calcular la division (A/B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");
        printf("\n\nSeleccione opcion: ");
        scanf("%d",&opcion);

        return opcion;
}

/** \brief:
La siguiente es una funci�n de tipo flotante(float), la cual recibe el nombre "sumar", esto debido a la operac�on
matematica que va a realizar; al t�rmino de la ejecuci�n la funci�n devolver� un dato del mismo tipo flotante
 * \param:parametro A es del mismo tipo float de la funci�n, es el primer valor de entrada que ser� ejecutado dentro de la funci�n
 * \param:parametro B es del mismo tipo float de la funci�n, es el segundo valor de entrada que ser� ejecutado dentro de la funci�n
 despu�s de los par�metros y dentro de las llaves se declara la variable "resultado", la cual almacenar� el dato obtenido de la suma entre A y B
 * \return:esta funci�n retorna el valor asignado a la variable resultado, en este caso devolver� el resultado de la operaci�n
 matematica sumar, valor obtenido de los operandos ingresados y ejecutados en la funci�n
 *
 */


float sumar(float a,float b){

    float resultado;

    resultado=a+b;

    return resultado;

}
/** \brief
 *La siguiente es una funci�n de tipo flotante(float), la cual recibe el nombre "restar", esto debido a la operac�on
matematica que va a realizar; al t�rmino de la ejecuci�n la funci�n devolver� un dato del mismo tipo flotante
 * \param:parametro A es del mismo tipo float de la funci�n, es el primer valor de entrada que ser� ejecutado dentro de la funci�n
 * \param:parametro B es del mismo tipo float de la funci�n, es el segundo valor de entrada que ser� ejecutado dentro de la funci�n
 despu�s de los par�metros y dentro de las llaves se declara la variable "resultado", la cual almacenar� el dato obtenido de la resta entre A y B
 * \return:esta funci�n retorna el valor asignado a la variable resultado, en este caso devolver� el resultado de la operaci�n
 matematica restar, valor obtenido de los operandos ingresados y ejecutados en la funci�n.
 *
 */

float restar(float a,float b){

    float resultado;

    resultado=a-b;

    return resultado;

}
/** \brief
 *La siguiente es una funci�n de tipo flotante(float), la cual recibe el nombre "multiplicar", esto debido a la operac�on
matematica que va a realizar; al t�rmino de la ejecuci�n la funci�n devolver� un dato del mismo tipo flotante
 * \param:parametro A es del mismo tipo float de la funci�n, es el primer valor de entrada que ser� ejecutado dentro de la funci�n
 * \param:parametro B es del mismo tipo float de la funci�n, es el segundo valor de entrada que ser� ejecutado dentro de la funci�n
 despu�s de los par�metros y dentro de las llaves se declara la variable "resultado", la cual almacenar� el dato obtenido de la multiplicaci�n entre A y B
 * \return:esta funci�n retorna el valor asignado a la variable resultado, en este caso devolver� el resultado de la operaci�n
 matematica multiplicar, valor obtenido de los operandos ingresados y ejecutados en la funci�n.
 *
 */

float multiplicar(float a,float b){

    float resultado;

    resultado=a*b;

    return resultado;
}
/** \brief
 *La siguiente es una funci�n de tipo flotante(float), la cual recibe el nombre "dividir", esto debido a la operac�on
matematica que va a realizar; al t�rmino de la ejecuci�n la funci�n devolver� un dato del mismo tipo flotante
 * \param:parametro A es del mismo tipo float de la funci�n, es el primer valor de entrada que ser� ejecutado dentro de la funci�n
 * \param:parametro B es del mismo tipo float de la funci�n, es el segundo valor de entrada que ser� ejecutado dentro de la funci�n
 despu�s de los par�metros y dentro de las llaves se declara la variable "resultado", la cual almacenar� el dato obtenido de la divisi�n entre A y B
 * \return:esta funci�n retorna el valor asignado a la variable resultado, en este caso devolver� el resultado de la operaci�n
 matematica dividir, valor obtenido de los operandos ingresados y ejecutados en la funci�n.
 */

float dividir(float a,float b){

    float resultado;

    resultado=a/b;

    return resultado;
}
/** \brief
 *La siguiente es una funci�n de tipo entero(int), la cual recibe el nombre "factorial", esto debido a la operac�on
matematica que va a realizar; al t�rmino de la ejecuci�n la funci�n devolver� un dato del mismo tipo entero
 * \param:parametro A es del mismo tipo "int" de la funci�n, es el �nico valor de entrada que ser� ejecutado dentro de la funci�n
 despu�s del par�metro y dentro de las llaves se declara las variables "i" y "acumulador" el cual se iguala a 1 y contendr� la suma
 del producto entre la acumulaci�n y la iteraci�n de manera decreciente seg�n el n�mero ingresado, la variable "i", es con la que se trabaja en bucle "for"
 * \return:esta funci�n retorna el valor asignado a la variable acumulador, en este caso devolver� el resultado de la operaci�n
 matematica factorial, valor obtenido del operando ingresado y ejecutado en la funci�n.
 */

int factorial(int a){

    int i,acumulador=1;

    for(i=a;i>0;i--){
        acumulador=acumulador*i;
    }

    return acumulador;
}





