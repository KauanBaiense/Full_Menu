#include <stdlib.h>
#include <stdio.h>
#include "menuFuncoes.h"
#include "menuBeeCrowd.h"
#include "menuVetores.h"
int main(void){
int num;

  do{
 system("clear");
 printf("Menu Principal:\n");
 printf("1 Menu Funcoes\n");
 printf("2 Menu Beecrowd\n");
 printf("3 Menu Vetores\n");
 printf("0 Sair\n");
 scanf("%d",&num);

switch(num){
  case 1:
  menuFuncoes();
  break;
  case 2:
  beeCrowd();
  break;
  case 3:
  menuVetores();
  break;
  case 0:
  sair();
  break;
}
}while(num!=0);  
return 0;
}
