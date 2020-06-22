#include <stdio.h>
#include <stdlib.h>

int main(){
 
 int i;
 int N;
 int *vector;
 int aux = 0;
 
 printf("Dame un valor para N: ");
 scanf("%i",&N);
 
 do{
  vector = (int*)malloc(N*sizeof(int)); //se usa memory allocation
  
  if(vector == NULL){
   printf("No se a podido reservar memoria\n");
  }
  else{
   for(i = 0; i < N ; i++){
    *(vector + i) = i;
   }
   for (i = 0; i < N ; i++){
    printf("%i, ",*(vector + i));
   }
   
   printf("\n");
  }
  
  printf("Dame otro valor para N: ");
     scanf("%i",&N);
  
 }while(aux == 0); //aqui lo que hice fue hacer el bucle infinito
 
 return 0;
}
