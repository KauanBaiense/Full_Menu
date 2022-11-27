#include <stdlib.h>
#include <stdio.h>
#include "vetores.h"
int menuVetores(){
int num;

  do{
 system("clear");
 printf("Menu Funções:\n");
 printf("1 vetor\n");
 printf("2 vetor\n");
 printf("3 vetor\n");
 printf("4 vetor\n");
 printf("5 vetor\n");
 printf("6 vetor\n");
 printf("7 vetor\n");
 printf("8 vetor\n");
 printf("9 vetor\n");
 printf("10 vetor\n");
    printf("11 vetor\n");
    printf("12 vetor\n");
    printf("13 vetor\n");
    printf("14 vetor\n");
    printf("15 vetor\n");
 printf("0 Sair\n");
 scanf("%d",&num);

switch(num){
  case 1:
  vet1();
  break;
  case 2:
  vet2();
  break;
  case 3:
  vet3();
  break;
  case 4:
  vet4();
  break;
  case 5:
  vet5();
  break;
  case 6:
  vet6();
  break;
  case 7:
  vet7();
  break;
  case 8:
  vet8();
  break;
  case 9:
  vet9();
  break;
  case 10:
  vet10();
  break;
  case 11:
  vet11();
  break;
  case 12:
  vet12();
  break;
  case 13:
  vet13();
  break;
  case 14:
  vet14();
  break;
  case 15:
  vet15();
  break;
  case 0:
  break;
}
}while(num!=0);  
  
}