#include <stdio.h>

int main() 
{
    float r;

    printf("Introduzca el radio del circulo\n");
    scanf("%f", &r);

    float a = r * 3.14;
    printf("El area es %f\n", a);

    return 0;
}
