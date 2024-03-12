#include <stdio.h>

int main()
{
    int pezzi;
    while(pezzi>=0)
    {
    printf("inserisci il numero di pezzi");
    scanf("%d" ,&pezzi);
    if(pezzi > 0)
    {
    if (pezzi > 50 )
    {
        printf("%f", (float)pezzi * 5 * 0.85);
    }
    else if ( pezzi > 30 )
    {
        printf("%f", (float)pezzi * 5 * 0.90);
        
    }
    else
    {
        printf("%d", 5 * pezzi);
    }
    }
    }
}