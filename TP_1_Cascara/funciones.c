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
La siguiente es una función de tipo flotante(float), la cual recibe el nombre "sumar", esto debido a la operacíon
matematica que va a realizar; al término de la ejecución la función devolverá un dato del mismo tipo flotante
 * \param:parametro A es del mismo tipo float de la función, es el primer valor de entrada que será ejecutado dentro de la función
 * \param:parametro B es del mismo tipo float de la función, es el segundo valor de entrada que será ejecutado dentro de la función
 después de los parámetros y dentro de las llaves se declara la variable "resultado", la cual almacenará el dato obtenido de la suma entre A y B
 * \return:esta función retorna el valor asignado a la variable resultado, en este caso devolverá el resultado de la operación
 matematica sumar, valor obtenido de los operandos ingresados y ejecutados en la función
 *
 */


float sumar(float a,float b){

    float resultado;

    resultado=a+b;

    return resultado;

}
/** \brief
 *La siguiente es una función de tipo flotante(float), la cual recibe el nombre "restar", esto debido a la operacíon
matematica que va a realizar; al término de la ejecución la función devolverá un dato del mismo tipo flotante
 * \param:parametro A es del mismo tipo float de la función, es el primer valor de entrada que será ejecutado dentro de la función
 * \param:parametro B es del mismo tipo float de la función, es el segundo valor de entrada que será ejecutado dentro de la función
 después de los parámetros y dentro de las llaves se declara la variable "resultado", la cual almacenará el dato obtenido de la resta entre A y B
 * \return:esta función retorna el valor asignado a la variable resultado, en este caso devolverá el resultado de la operación
 matematica restar, valor obtenido de los operandos ingresados y ejecutados en la función.
 *
 */

float restar(float a,float b){

    float resultado;

    resultado=a-b;

    return resultado;

}
/** \brief
 *La siguiente es una función de tipo flotante(float), la cual recibe el nombre "multiplicar", esto debido a la operacíon
matematica que va a realizar; al término de la ejecución la función devolverá un dato del mismo tipo flotante
 * \param:parametro A es del mismo tipo float de la función, es el primer valor de entrada que será ejecutado dentro de la función
 * \param:parametro B es del mismo tipo float de la función, es el segundo valor de entrada que será ejecutado dentro de la función
 después de los parámetros y dentro de las llaves se declara la variable "resultado", la cual almacenará el dato obtenido de la multiplicación entre A y B
 * \return:esta función retorna el valor asignado a la variable resultado, en este caso devolverá el resultado de la operación
 matematica multiplicar, valor obtenido de los operandos ingresados y ejecutados en la función.
 *
 */

float multiplicar(float a,float b){

    float resultado;

    resultado=a*b;

    return resultado;
}
/** \brief
 *La siguiente es una función de tipo flotante(float), la cual recibe el nombre "dividir", esto debido a la operacíon
matematica que va a realizar; al término de la ejecución la función devolverá un dato del mismo tipo flotante
 * \param:parametro A es del mismo tipo float de la función, es el primer valor de entrada que será ejecutado dentro de la función
 * \param:parametro B es del mismo tipo float de la función, es el segundo valor de entrada que será ejecutado dentro de la función
 después de los parámetros y dentro de las llaves se declara la variable "resultado", la cual almacenará el dato obtenido de la división entre A y B
 * \return:esta función retorna el valor asignado a la variable resultado, en este caso devolverá el resultado de la operación
 matematica dividir, valor obtenido de los operandos ingresados y ejecutados en la función.
 */

float dividir(float a,float b){

    float resultado;

    resultado=a/b;

    return resultado;
}
/** \brief
 *La siguiente es una función de tipo entero(int), la cual recibe el nombre "factorial", esto debido a la operacíon
matematica que va a realizar; al término de la ejecución la función devolverá un dato del mismo tipo entero
 * \param:parametro A es del mismo tipo "int" de la función, es el único valor de entrada que será ejecutado dentro de la función
 después del parámetro y dentro de las llaves se declara las variables "i" y "acumulador" el cual se iguala a 1 y contendrá la suma
 del producto entre la acumulación y la iteración de manera decreciente según el número ingresado, la variable "i", es con la que se trabaja en bucle "for"
 * \return:esta función retorna el valor asignado a la variable acumulador, en este caso devolverá el resultado de la operación
 matematica factorial, valor obtenido del operando ingresado y ejecutado en la función.
 */

int factorial(int a){

    int i,acumulador=1;

    for(i=a;i>0;i--){
        acumulador=acumulador*i;
    }

    return acumulador;
}





