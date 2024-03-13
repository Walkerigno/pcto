#include <stdio.h>
int somma (int a, int b)
{
    int somma;
    somma = a + b;
    return somma;
}
void saluto()
{
    printf("ciao\n");

}
void somma1( int c, int d)
{
  printf(" %d\n" , c + d );
}
int main()
{
    int risultato = somma(5, 7);
    printf("%d\n" , risultato);
    saluto();
    int num1;
    int num2;
    int risultato1;
     printf("inserisci due numeri ti daró la somma \n");
     scanf(" %d %d", &num1, &num2);
     somma1(num1, num2);
}