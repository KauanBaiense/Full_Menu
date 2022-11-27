#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int vet1(){
  int wish;
  do{
    system("clear");
  int x,cont=0,menor=0;
  int vet[6];
  printf("Insira seis elementos:\n");
  for(int i=0; i<6;i++){
    scanf("%d",&vet[i]);
    }
  for(int i=0; i<6;i++){
    printf("[%d]\n",vet[i]);
  }
  
  printf("------------------\n");
 
  printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
  return 0;
}

int vet2(){
  int wish;
  do{
    system("clear");
    
  printf("Insira o vetor:\n");
 int vet[6];
  for(int i=0; i<6;i++){
    scanf("%d",&vet[i]);
    }
  printf("------------------\n");
  for(int i=5; i>=0;i--){
    printf("[%d]\n",vet[i]);
  }
  printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
  return 0;
}

int vet3(){
  int wish;
  do{
    system("clear");
  float vet[15];
  float media=0, cont=0, soma=0;
  printf("Insira o vetor:\n");
    for(int i=0; i<15;i++){
    scanf("%f",&vet[i]);
    cont+= 1;
    }
  printf("------------------\n");
  for(int i=0; i<15;i++){
    soma += vet[i];
  } media = soma/cont;
  printf("Média = %.2f",media);
  printf("\n------------------\n");
  printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
  return 0;
}

int vet4(){
  int wish;
  do{
    system("clear");
  printf("Leia um vetor de 10 posições e atribua valor 0 para todos os elementos que possuírem valores negativos.\n");
  printf("Insira o vetor:\n");
  int vet[10];
  int media, soma;
  for(int i=0; i<10;i++){
    scanf("%d",&vet[i]);
    }
  printf("------------------\n");
  for(int i=0; i<10;i++){
    if(vet[i]<0){
      vet[i] = 0;
    }printf("%d\n", vet[i]);
  } 
  printf("------------------\n");
 
  printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
  return 0;
}

int vet5(){
  int wish;
  do{
    system("clear");
  int vet[10];
  int x,cont=0;
  printf("Leia um vetor de 10 números.\nLeia um número x.\nConte os múltiplos de um número inteiro x num vetor e mostre-os na tela.\n");
  printf("Insira o vetor:\n");
  for(int i=0; i<10;i++){
    scanf("%d",&vet[i]);
    }
  printf("------------------\n");
  printf("Insira x:");
  scanf("%d",&x);
  printf("------------------\n");
  for(int i=0; i<10;i++){
    if(vet[i]%x==0){
      printf("[%d]\n", vet[i]);
      }
  } 
  printf("------------------\n");
 
  printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
  return 0;
}

int vet6(){
  int wish;
  do{
    system("clear");
  int A[10];
  int B[10];
  int C[10];
  int x, cont = 0;
  printf("Insira o 1° vetor:\n");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &A[i]);
  }
  printf("------------------\n");
  printf("Insira o 2° vetor:\n");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &B[i]);
  }
  printf("------------------\n");
  
  for (int i = 0; i < 10; i++) {
  C[i] = A[i]-B[i];
  }
  printf("Vetor resultado:\n");
  for (int i = 0; i < 10; i++){
  printf("[%d]\n",C[i]);}
  printf("------------------\n");
 
  printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
  return 0;
}

int vet7(){
 int wish;
  do{
   system("clear");
  int A[5];
  int B[5];
  int C[5];
  int x=0, cont;
  printf("Insira o 1° vetor:\n");
  for (int i = 0; i < 5; i++) {
    scanf("%d", &A[i]);
  }
  printf("------------------\n");
  printf("Insira o 2° vetor:\n");
  for (int i = 0; i < 5; i++) {
    scanf("%d", &B[i]);
  }
  printf("------------------\n");
  printf("Vetor resultado:\n");
  for (int i = 0; i < 5; i++) {
  C[i] = A[i]*B[i];
  printf("[%d] * [%d] = %d\n",A[i],B[i],C[i]);
  }
  for (int i = 0; i < 5; i++) {
   x += C[i];
  }
   printf("Total:%d\n",x); 
  printf("------------------\n");
 
  printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);  
   }while(wish!=0);
  return 0;
}

int vet8(){
  int wish;
  do{
    system("clear");
    srand(time(NULL));
  int vet[10],c;
  for(int i=0; i<10; i++){
    //scanf("%d",&vet[i]);
   printf("%d - %d\n",i,vet[i] = (rand() %50));
    }
  printf("--------------\n");
  
  for(int i=0; i<10; i++){
    c = 0;
    for(int j=2; j < vet[i]/2;j++){
      if(vet[i]%j==0){
        c++;
        j = vet[i];
      }
    }if(vet[i]>0 && c==0|vet[i]==1|vet[i]==2){
      printf("%d - %d\n",i,vet[i]);}
  }
     printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
  return 0;
}

int vet9(){
  int wish;
  do{
    system("clear");
  int vet[6];
  int media=0, soma=0;
  printf("Insira o vetor:\n");
  for(int i=0; i<6;i++){
    scanf("%d",&vet[i]);
    }
  printf("--------------\n");
  printf("Pares:\n");
  for(int i=0; i<6;i++){
    if(vet[i]%2==0){
      soma+= vet[i];
      printf("%d\n", vet[i]);
      }
  }printf("Soma = %d\n",soma);
  printf("--------------\n");
  printf("Impares:\n");
  for(int i=0; i<6;i++){
    if(vet[i]%2!=0){
      media+=1;
      printf("%d\n", vet[i]);
      }
  }printf("Quantidade = %d\n",media);
     printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
return 0;
}

int vet10(){
  int wish;
  do{
    system("clear");
    
  int v[10];
  int v1[10],v2[10];
  int k=0,j=0;
  printf("Insira o vetor:\n");
  for(int i=0; i<10;i++){
    scanf("%d",&v[i]);
    }
  printf("--------------\n");
  
  for(int i=0; i<10;i++){
    if(v[i]%2==0){
      v1[i] = v[i];
      printf("%d\n", v1[i]);
      }else{
     v2[k] = v[i];
       k++;
      }
    }
  printf("--------------\n");
  for(int i=0; i<k;i++){
    printf("%d\n", v2[i]);
    }
     printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
  return 0;
}

int vet11(){
  int wish;
  do{
    system("clear");
    int vetor[5];
  int walle;
  printf("Insira o vetor:\n");
  for (int i = 0; i < 5; i++) {
    scanf("%d", &vetor[i]);
  }
  printf("------------------\n");
  do{
    printf("Deseja finalizar 0\nimprimir os valores 1\nimprimir os valores invertidos 2\n");
    scanf("%d", &walle);
   printf("\n");
    switch (walle) {
    case 1:
      for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
      }
      printf("\n\n");
      break;

    case 2:
      for (int i = 4; i >= 0; i--) {
        printf("%d ", vetor[i]);
      }
      printf("\n\n");
      break;
      
      case 0:
      break;
    
      default:
      printf("O código é invalido!\n\n");
    }
  } while (walle != 0);
    printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
return 0;
}

int vet12(){
  int wish;
  do{
    system("clear");
    int vetor[50];
  int c = 0, i;
  for(c = 0 ; c < 50;c++){
   i = c;
  vetor[i] = (i+ 5 * i) % (i+1);
  }
  printf("------------------\n");
  for(i=0; i<50;i++){
    printf("%d ",vetor[i]);
  }
     printf("\nDeseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
return 0;
}

int vet13(){
  int wish;
  do{
    system("clear");
    int a[10];
    int b[10];
    int ab[20];
    int i,j,k,aux;
  printf("Primeiro vetor:\n");
  for(int i=0; i<10 ;i++){
    scanf("%d",&a[i]);
  }
  printf("Segundo vetor:\n");
  for(int i=0; i<10 ;i++){
    scanf("%d",&b[i]);
  }
  for(i=0,k=0; i<10; i++){
  	for(j=0; j<10; j++){
			  if(a[i] == b[j]){
				   ab[k] = a[i];
          k++;
      }
    }
  }
  printf("------------------\n");
  printf("Terceiro vetor:\n");
  for(i=0; i < k ;i++){
    aux = 0;
    for(j=i+1;j<k;j++){
      if(ab[i]==ab[j]){
        aux = 1;
      }
     
    }if(aux==0)
    {printf(" %d ",ab[i]);
  }
  } printf("\n------------------\n");
     printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
return 0;
}

int vet14(){
  int wish;
  do{
    system("clear");
    srand(time(NULL));
  int vetor[100];
  int k, igual=0;
  for (int i = 0; i < 100; i++) {
    //scanf("%d", &vetor[i]);
    printf("%d - %d\n",i,vetor[i] = (rand() %90));
  }
  printf("Insira k:");
  scanf("%d",&k);
  
for(int i = 0; i < 100; i++) {
    if(vetor[i] == k){
      igual++;
    }
  }printf("\nk aparece %d vez(es)",igual);
    printf("\n------------------\n");  
  printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
return 0;
}

int vet15(){
  int wish;
  do{
    system("clear");
    float media;
float notas[20], soma=0;
printf("20 alunos\n");
    for (int i=0; i<20; i++) {
printf("Digite a nota do aluno %d: ",i);
scanf("%f",&notas[i]);
soma+=notas[i];
}
media = soma/20;
printf("\n------------------\n");    
for (int i=0; i<20; i++) {
if(notas[i]>= 6){
printf("o aluno %d foi aprovado\n",i);}
else{
printf("o aluno %d foi reprovado\n",i);
    }
}
printf("------------------\n");    
printf("Media total das notas: %.2f\n",media);
printf("------------------\n");
  for (int i=0; i<20; i++) {
if (notas[i] >= media)
printf("aluno %d acima da média nota:%.2f\n",i,notas[i]);
}printf("------------------\n");
     printf("Deseja continuar?\n1-Sim 0-Nao ");
     scanf("%d",&wish);
    }while(wish!=0);
return 0;
}