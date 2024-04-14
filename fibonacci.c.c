#include <stdio.h>

int main(void) {
   int i , n, t1=0 ,t2=1 , next;
  
     printf("Qual o numeros de termos:\n");
      scanf("%d%*c",&n);

    printf("Sequencia de Fibonacci:\n");

    for(i=1 ; i<=n; i++){
      printf("%d\n",t1);
      next=t1+t2;
      t1=t2;
      t2=next;
    }

  return 0;
}


 // i responsavel por contar o numero de vezes que o laço for executado
