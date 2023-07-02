#include <stdio.h>

float far_a_c(float temp); //Se incluye la funcion

int main()
{
    char select;
    printf("Selecciones 'f' para pasar de Fahrenheit a Celcius o 'c' para la operacion inversa: ");
    scanf("%c", &select);

    while(select != 'f' && select != 'c')
    {
        printf("Por favor deleccione una respuesta valida (f o c)\n");
        scanf("%c", &select);
    }

    float temp;
    printf("Ingrese temperatura actual: ");
    scanf("%f", &temp);

    if(select == 'f')
    {
        float a = far_a_c(temp);
        printf("la temperatura en Fahrenheit era de %.2f y en Celcius es de %.2f.\n", temp, a);
        return 0;
    }
    else
    {
        printf("No implementado\n");
    }
}

float far_a_c(float temp)
{
    float c = ((temp - 32) * 5) / 9;
    return c; 
}