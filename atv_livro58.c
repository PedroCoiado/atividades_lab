#include <stdio.h>

    int main()
{
    int contador, nota, total; 
    float média; 
      total = 0; 
      contador = 0; 

        printf( "Digite a nota, -1 no fim: "); 
         scanf( "%d\n", &nota ); 

 
            while ( nota!= -1 ) {
                total = total + nota; 
                contador = contador + 1; 


        printf( "Digite a nota, -1 para finalizar: " ); 
        scanf("%d\n", &nota); 
 } 

        if ( contador!= 0 ) {

 
        média = ( float ) total / contador; 


        printf( "Média da turma é %.2f\n", média );
 }
        else {
            printf( "Nenhuma nota foi informada\n" );
}

 return 0; 
 }