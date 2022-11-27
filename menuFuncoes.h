#include <stdlib.h>
#include <stdio.h>
#include "funcoes.h"
int menuFuncoes(){
int num;

  do{
 system("clear");
 printf("Menu Funções:\n");
 printf("1 Funcao Inversora\n");
 printf("2 Funcao Somatória\n");
 printf("3 Funcao Máxima\n");
 printf("4 Funcao Mínimo\n");
 printf("5 Funcao Mediana\n");
 printf("6 Funcao Média\n");
 printf("0 Sair\n");
 scanf("%d",&num);

switch(num){
  case 1:
  inversora();
  break;
  case 2:
  somatoria();
  break;
  case 3:
  maxima();
  break;
  case 4:
  minimo();
  break;
  case 5:
  mediana();
  break;
  case 6:
  media();
  break;
  case 0:
  break;
}
}while(num!=0);  
  
}