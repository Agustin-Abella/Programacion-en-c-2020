#include <stdio.h>
#include <stdlib.h>

float pedirNumero();
float calcuArea(float R);


int main()
{
    float numero;
    float area;
    numero = pedirNumero();
    area = calcuArea(numero);
    printf("el numero ingresado es: %f   y el area es : %f",numero,area);

	return 0;
}


float pedirNumero()
{
    float numero;
    printf("ingrece un numero:");
    scanf("%f",&numero);
    return numero;
}

float calcuArea(float r)
{

    float area;
    printf("el radio es : %f",r);
    area = (r*r)*(3.14159265359);
    return area;

}
