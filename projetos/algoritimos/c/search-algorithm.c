#include <stdio.h>
#include <stdlib.h>

int main(){

  int arr[]={10,1,3,8,7,4,9,5,2,6};
  int number;
  int i = 0;

  printf("digite um numero de 1 a 10\n");
  scanf("%i", &number);
  while (number != arr[i]){    
    if(i == 9){
    printf("o numero digitado nao pertence a lista\n");
      return 1;
    };
   i++; 
  };
  
  while (number != arr[i]) {
    i++;
  }
  printf("\n%i pertence a lista\n", arr[i]);

  return 0;
}


