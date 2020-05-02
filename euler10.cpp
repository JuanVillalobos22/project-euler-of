#include <stdio.h>
int main()
{
int numero, divisor;
int suma;
for (numero=2; numero<2000000; numero++) {
for (divisor=2; numero%divisor!=0; divisor++);
if (divisor == numero)
suma=suma+numero;
}
printf("%d \n", suma);
}
