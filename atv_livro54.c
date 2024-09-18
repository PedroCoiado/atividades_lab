#include <stdio.h>

 /* função main inicia execução do programa */
     int main()
 {
        int contador, nota, total, média; 
              total = 0; 
              contador = 1; 

 
          while ( contador <= 10 )   /* loop 10 vezes */ 
            { 
              printf( "Digite a nota:" ); 
                scanf("%d", &nota ); 
                 total = total + nota;
                     contador = contador + 1; /* incrementa "=" contador */
 }

 
        média = total / 10; 

            printf( "Média da turma é %d\n", média ); 
                return 0; 
 } 
