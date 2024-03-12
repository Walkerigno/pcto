#include <stdio.h>

int main()
{
    int a;
    scanf(" %d" ,&a );
    if (( a / 4 ) && ( a / 100 !=0 ))
    {
        printf(" é bisestile ");
    }
    else if ( a / 400 )
    {
        printf(" é bisestile ");
    }
    else 
    {
        printf("non é bisestile ");
    }
}