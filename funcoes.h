#include <stdio.h>
#include <stdlib.h>

int inversora(){
 int num,wish;
  do{
    system("clear");
  printf("Insira o numero:\n");
  scanf("%d",&num);
 printf("------------------\n");
  int saida=0;
  while(num>0){
    saida*=10;
    saida+= num%10;
    num /= 10;
  }
  printf("Numero invertido:\n%d\n",saida);
  printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);

  }

int somatoria(){
  int wish;
  do{
    system("clear");
  int soma,n;
    printf("Quantos termos o vetor tem?:\n");
    scanf("%d",&n);
    int vet[n];
    soma=0;
  for(int i=0; i<n;i++){
    printf("[%d]: ",i);
    scanf("%d",&vet[i]);
    soma += vet[i];
    }
  printf("Soma = %d\n",soma);
  printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
  }

int maxima(){
  int wish;
  do{
    system("clear");
  int x,cont=0,maior=0;
  
  printf("Quantos termos o vetor tem?:\n");
  scanf("%d",&x);
  int A[x];
  printf("Insira o vetor:\n");
  for (int i = 0; i < x; i++) {
    printf("[%d]: ",i);
    scanf("%d", &A[i]);
  }
  
  printf("------------------\n");
 for (int i = 0; i < x; i++) {
   if(i==0){
     maior = A[i];
   }
   else if (A[i] > maior){
       maior = A[i];
     }
  }printf("O maior é %d\n",maior);
  printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
  }

int minimo(){
  int wish;
  do{
    system("clear");
  int x,cont=0,menor=0;
  
  printf("Quantos termos o vetor tem?:\n");
  scanf("%d",&x);
  int A[x];
  printf("Insira o vetor:\n");
  for (int i = 0; i < x; i++) {
    printf("[%d]: ",i);
    scanf("%d", &A[i]);
  }
  
  printf("------------------\n");
 for (int i = 0; i < x; i++) {
   if(i==0){
     menor = A[i];
   }
   else if (A[i] < menor){
       menor = A[i];
     }
  }printf("O menor é %d\n",menor);
  printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
}

int mediana(){
  int wish;
  do{
    system("clear");
  int chave,i,j,mediana=0,n;
  printf("Quantos termos o vetor tem?:\n");
  scanf("%d",&n);
  int a[n];
      printf("Insira o vetor:\n");
    for (i = 0; i < n; i++) {
    printf("[%d]: ",i);
    scanf("%d", &a[i]);
  }
  printf("------------\n");
  for (j = 1; j < n; j++) {
    chave = a[j];
    i = j - 1;
    while (i >= 0 && a[i] > chave) {
      a[i + 1] = a[i];
      i--;
    }
    a[i+1] = chave;
    }
  for ( i = 0; i < n; i++) {
    printf("%d ", a[i]);
  } 
    if(n%2!=0){mediana = a[n/2];
   }else{
      mediana = (a[n/2]+a[(n/2)-1])/2;
   } 
printf("\n------------\n");
printf("Mediana = %d\n\n",mediana);
  printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
}

int media(){
  int wish;
  do{
    system("clear");
  int soma=0,media=0;
  int x,cont =0;
  printf("Quantos termos o vetor tem?:\n");
  scanf("%d",&x);
  int A[x];
  printf("Insira o vetor:\n");
  for(int i = 0; i < x; i++) {
    printf("[%d]: ",i);
    scanf("%d", &A[i]);
    soma += A[i];
    cont++;
  }
  
  media = soma / cont;
  printf("------------------\n");
  
  printf("%d\n",media);

  printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
}

int sair(){
  system("clear");
  //printf("Goodbye");
printf("                   ueeeeeu..\n");
printf("              urd$$$$$$$$$$$$$$Nu\n");
printf("           d$$$ #$$$$$$$$$$$$$$$$$$e.\n");
printf("         u$$c   ##   ^#$$$$$$$$$$$$$$$$b.\n");
printf("      z$$#!!!           `!?$$$$$$$$$$$$$$N.\n");
printf("      .$P                   ~!R$$$$$$$$$$$$$b\n");
printf("    x$F                 **$b. '#R).$$$$$$$$$$$\n");
printf("    J^!                           #$$$$$$$$$$$$.\n");
printf("   z$e                      ..      #$$$$$$$$$$\n");
printf(" :$P           .        .$$$$$b.    ..  #  #$$$$\n");
printf(" $$            L          ^*$$$$b   #      4$$$$L\n");
printf("4$$            ^u    .e$$$$e.! $$N.        @$$$$$\n");
printf("$$E            d$$$$$$$$$$$$$$L !$$$$$  mu $$$$$$F\n");
printf("$$&            $$$$$$$$$$$$$$$$N   !# * ?$$$$$$$N\n");
printf("$$F            '$$$$$$$$$$$$$$$$$bec...z$ $$$$$$$$\n");
printf("'$$F             `$$$$$$$$$$$$$$$$$$$$$$$$ '$$$$E%$\n");
printf("$$                  ^######`         ^!$$$& 9$$$$N\n");
printf("k  u$                                   !$$. !$$P r\n");
printf(" 4$$$$L                                   !$. eeeR\n");
printf(" $$$$$k                                    '$e. .@\n");
printf(" 3$$$$$b                                   '$$$$\n");
printf("  $$$$$$                                    3$$\n");
printf("   $$$$$  dc                                4$F\n");
printf("    RF** <$$                                J\n");
printf("      $$$$$$LJ$$$Nc.\n");
printf("     ^$$$$$$$$$$$$$r\n");
printf("       `!$$$$$$$$$\n");
printf("\nArt by Blazej Kozlowski\nFinish Him!\n");
printf("Menu feito por Kauan Baiense Rocha\n");
printf("2°Semestre de Ciência da Computação");
  }
