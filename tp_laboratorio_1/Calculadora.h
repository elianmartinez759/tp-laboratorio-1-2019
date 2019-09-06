#include <stdlib.h>
#include <stdio.h>

void Menu(float num1, float num2);
/** \brief es el conjunto de funciones que conforman esta calculadora.
 *
 * \param float num1, es el primer numero ingresado en la calculadora.
 * \param float num2, es el segundo numero ingresado en la calculadora.
 * \return o;
 *
 */

float Sumar(float num1, float num2);
/** \brief calcula la suma de los numeros 1 y 2.
 *
 * \param float num1, es el primer numero ingresado en la calculadora.
 * \param float num2, es el segundo numero ingresado en la calculadora.
 * \return float, el resultado de la operacion.
 *
 */

float Restar(float num1, float num2);
/** \brief calcula la resta de los numeros 1 y 2.
 *
 * \param float num1, es el primer numero ingresado en la calculadora.
 * \param float num2, es el segundo numero ingresado en la calculadora.
 * \return float, el resultado de la operacion.
 *
 */

float Multiplicar(float num1, float num2);
/** \brief calcula la multiplicacion de los numeros 1 y 2.
 *
 * \param float num1, es el primer numero ingresado en la calculadora.
 * \param float num2, es el segundo numero ingresado en la calculadora.
 * \return float, el resultado de la operacion.
 *
 */

float Dividir(float num1, float num2);
/** \brief calcula la division de los numeros 1 y 2.
 *
 * \param float num1, es el primer numero ingresado en la calculadora.
 * \param float num2, es el segundo numero ingresado en la calculadora.
 * \return float, el resultado de la operacion.
 *
 */

double Factorial(float num1);
/** \brief calcula el factorial de un numero ingresado.
 *
 * \param float num1, es numero ingresado para realizar la operacion.
 * \return double, el resultado de la operacion.
 *
 */

float TomarNumero(float numPedido);
/** \brief toma un numero.
 *
 * \param flat numPedido, es el numero que se pide en la funcion.
 * \return float.
 *
 */

void Mostrar(float resultado);
/** \brief muestra un printf con la variable indicada, ademas indica cuantos ceros va a tener el numero despues de la coma.
 *
 * \param la variable que se dispone a mostrar.
 * \return float.
 *
 */

