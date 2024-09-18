#include <stdio.h>

int main () 
{
    int soma = 0; 
    int número; 

    for ( número = 2; número <= 100; número += 2 ) {
        soma += número; 
        } 

        printf( "Soma é %d\n", soma ); 
    return 0; 
}