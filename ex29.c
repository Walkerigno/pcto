#include <stdio.h>

void somma(int a, int b)
{
    printf("%d\n" , a + b);
}
void sottrazione(int a, int b)
{
    printf("%d\n" , a - b);
}
void moltiplicazione(int a, int b)
{
    printf("%d\n" , a * b);
}
void divisione(int a, int b)
{
    printf("%d\n" , a / b );
}
int main()
{
   int num1;
   int num2;
   printf(" dammi due nuumeri e riceverai la somma sottrazione moltiplicazione e divisione \n");
   scanf(" %d %d", &num1, &num2);
   somma(num1, num2);
   sottrazione(num1, num2);
   moltiplicazione(num1, num2);
   divisione(num1, num2);
}