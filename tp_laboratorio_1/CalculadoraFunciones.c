#include "Calculadora.h"
void Menu(float num1, float num2)
{
    int bandera1 = 0;
    int bandera2 = 0;
    int bandera3 = 0;
    float resultadoSuma;
    float resultadoRestar;
    float resultadoDividir;
    float resultadoMultiplicar;
    float resultadoFactorial1;
    float resultadoFactorial2;
    int banderaMenu = 0;
    int opcion;

    while(banderaMenu == 0)
    {
        printf("\nMenu de la calculadora.\n\nUse los numeros para seleccioar las acciones:\n\n1 Para ingresar el primer operando. \n2 Para ingresar el segundo operando. \n3 Para calcular los resultados. \n4 Para mostrar los resultados. \n5 Para salir.\n\n");
        opcion = TomarNumero(opcion);

        switch(opcion)
        {
        case 1:
            printf("\nIngrese el numero 1: \n\n");
            float num1 = TomarNumero(num1);
            bandera1 = 1;
            printf("\nEl primer operando es: %2.f\n", num1);
            break;

        case 2:
            printf("\nIngrese el numero 2: \n\n");
            float num2 = TomarNumero(num2);
            bandera2 = 1;
            printf("\nEl segundo operando es: %2.f\n", num2);
            break;

        case 3:
            if(bandera1 == 1 && bandera2 == 1)
            {
                resultadoSuma = Sumar(num1,num2);
                resultadoRestar = Restar(num1,num2);
                resultadoMultiplicar = Multiplicar(num1,num2);
                resultadoDividir = Dividir(num1,num2);
                resultadoFactorial1 = Factorial(num1);
                resultadoFactorial2 = Factorial(num2);

                printf("\nCalculos terminados.\n");
                bandera3 = 1;
            }
            else
            {
                printf("\nERROR.Debe ingresar numeros para poder realizar los calculos.\n");
            }
            break;

        case 4:
            if(bandera3 == 1)
            {
                printf("\nEl resultado de sumar %2.f y%2.f es : ", num1, num2);
                Mostrar(resultadoSuma);
                printf("El resultado de restar%2.f a%2.f es : ", num2, num1);
                Mostrar(resultadoRestar);
                printf("El resultado de multiplicar %2.f por%2.f es : ", num1, num2);
                Mostrar(resultadoMultiplicar);
                printf("El resultado de dividir %2.f por%2.f es : ", num1, num2);
                if (resultadoDividir == 00)
                {
                    printf("No se pudo dividir por 0\n\n");
                }
                else
                {
                    Mostrar(resultadoDividir);
                }
                printf("El factorial de %2.f es: ", num1);
                Mostrar(resultadoFactorial1);

                printf("El factorial de %2.f es: ", num2);
                Mostrar(resultadoFactorial2);

                if(resultadoFactorial1 == 0 || resultadoFactorial2 == 0)
                {
                    printf("\nEl maximo factorial que puede sacar esta calculadora es el factorial de 34.\n");
                }
            }
            else
            {
                printf("\nERROR.Debe realizar los calculos para mostrar los resultados.\n");
            }
            break;

        case 5:
            banderaMenu = 1;
            break;

        default:
            printf("\nERROR.ingrese una opcion valida!!!\n");
            break;
        }
    }
}

float Sumar(float num1, float num2)
{
    return num1 + num2;
}

float Restar(float num1, float num2)
{
    return num1 - num2;
}

float Multiplicar(float num1, float num2)
{
    return num1 * num2;
}

float Dividir(float num1, float num2)
{
    float resultadoDiv;

    if(num2 == 0)
    {
        resultadoDiv = 00;
    }
    else
    {
        resultadoDiv = num1 / num2;
    }
    return resultadoDiv;
}

double Factorial(float num1)
{
    double f = 1;

    if(num1 <= 34 && num1 > -1)
    {
        while(num1 > 0)
        {
            f = num1 * f;
            num1--;
        }
    }
    else
    {
        f = 00;
    }
    return f;
}

float TomarNumero(float numPedido)
{
    scanf("%f", &numPedido);
    return numPedido;
}

void Mostrar(float resultado)
{
    printf("%.2f\n\n", resultado);
}


