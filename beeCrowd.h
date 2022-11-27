#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int um(){
  int wish;
  do{
    system("clear");
  printf("Hello World!\n");
  printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
  }

int dois(){
  int wish;
  do{
    system("clear");
  int a, b, x;
  printf("Soma entre dois numeros:");
   scanf("%d",&a);
   scanf("%d",&b);
   x = a + b;

   printf("X = %d\n", x);
  printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
  }

int tres(){
  int wish;
  do{
    system("clear");
 double area,raio,pi = 3.14159;
  printf("Área do Círculo\nInsira o valor do raio:");
 scanf("%lf",&raio);
 area = pi*(raio*raio);
 printf("A=%.4f\n", area);
   printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
}

int quatro(){
  int wish;
  do{
    system("clear");
     int A, B, SOMA;
  printf("Soma Simples:\n");
 scanf("%d%d",&A,&B);
 SOMA = A+B;
 printf("SOMA = %d\n",SOMA);
     printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
}

int cinco(){
  int wish;
  do{
    system("clear");
    int A, B, PROD;
    printf("Produto Simples:\n");
 scanf("%d%d",&A,&B);
 PROD = A*B;
 printf("PROD = %d\n",PROD);
     printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
}

int seis(){
  int wish;
  do{
    system("clear");
    double A, B, MEDIA;
    printf("Média 1:\n");
 scanf("%lf%lf",&A,&B);
 MEDIA = ((A*3.5) + (B*7.5) )/11;
 printf("MEDIA = %.5f\n",MEDIA);
     printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
}

int sete(){
  int wish;
  do{
    system("clear");
    double A, B, C, MEDIA;
    printf("Média 2:\n");
 scanf("%lf%lf%lf",&A,&B,&C);
 MEDIA = ((A*2) + (B*3) + (C*5) )/10;
 printf("MEDIA = %.1f\n",MEDIA);
     printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
}

int oito(){
  int wish;
  do{
    system("clear");
    int A, B, C, D, DIFERENCA;
    printf("Diferença:\n");
 scanf("%d%d%d%d",&A,&B,&C,&D);
 DIFERENCA = ((A*B) - (C*D));
 printf("DIFERENCA = %d\n",DIFERENCA);
     printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
} 

int nove(){
  int wish;
  do{
    system("clear");
    int numb;
  float A, B, SALARY;
    printf("Salário\nNúmero de um funcionário:");
  scanf("%d", &numb);
  printf("horas trabalhadas e valor que recebe por hora:");
  scanf("%f%f", &A, &B);
  SALARY = A*B;
  printf("NUMBER = %d\n",numb);
  printf("SALARY = U$ %.2f\n",SALARY);
     printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
}

int dez(){
  int wish;
  do{
    system("clear");
    char nome[61];
double A, B, SALARY;
    printf("Salário com Bônus\nnome do vendedor:");
scanf("%s", nome);
    printf("Salário fixo e total de vendas efetuadas por mês em dinheiro:");
scanf("%lf%lf", &A, &B);
SALARY = A+(B*0.15);
printf("TOTAL = R$ %.2f\n",SALARY);
     printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
}

int onze(){
  int wish;
  do{
    system("clear");
    float A1, B1, C1, A2, B2, C2,resf;
  printf("Cálculo Simples:\nO número de peças 1, o valor unitário de cada peça 1, o código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2:\n");
  scanf("%f%f%f",&A1,&B1,&C1);
  scanf("%f%f%f",&A2,&B2,&C2);
  resf = (B1*C1)+(B2*C2);
  printf("VALOR A PAGAR: R$ %.2f\n",resf);
     printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
}

int doze(){
  int wish;
  do{
    system("clear");
    double R, res, pi = 3.14159;
    printf("Volume de um esfera\nraio (R):");
  scanf("%lf",&R);
  res = (4.0/3) * pi * ((R*R)*R);
  printf("VOLUME = %.3f\n", res);
     printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
}

int treze(){
  int wish;
  do{
    system("clear");
    double A, B, C, tr, cr, tp, qd, rt, pi = 3.14159;
    printf("Área de triangulos\nA, B e C:\n");
  scanf("%lf%lf%lf", &A, &B, &C);
  tr = (A * C) / 2;
  cr = (C * C) * pi;
  tp = (A + B) * C / 2;
  qd = B * B;
  rt = A * B;
  printf("TRIANGULO: %.3f\n", tr);
  printf("CIRCULO: %.3f\n", cr);
  printf("TRAPEZIO: %.3f\n", tp);
  printf("QUADRADO: %.3f\n", qd);
  printf("RETANGULO: %.3f\n", rt);
     printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
}

int quatorze(){
  int wish;
  do{
    system("clear");
    int a, b, c, res, ab;
  printf("O Maior valor entre 3 numeros:\n");
  scanf("%d %d %d",&a, &b, &c);
ab = (a+b+ abs(a-b))/2;
res = (ab+c+ abs(ab - c))/2; 
  printf("%d eh o maior\n", res);
     printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
}

int quinze(){
  int wish;
  do{
    system("clear");
    float  Y, Z;
int X;
printf("Consumo médio de um automóvel\nDistância total percorrida (em Km) e o total de combustível gasto (em litros):\n");
scanf("%d%f",&X,&Y);
Z = X/Y;
  printf("%.3f km/l\n",Z);
     printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
}

int dezesseis(){
  int wish;
  do{
    system("clear");
    float x1, y1, x2, y2, distancia;
  printf("Distância Entre Dois Pontos\nEixos x e y de dois pontos quaisquer no plano:x y\n");
  scanf("%f %f",&x1,&y1);
  scanf("%f %f",&x2,&y2);
  distancia = (((x2 - x1)*(x2 - x1)) + ((y2-y1)*(y2-y1)));
  distancia = pow(distancia, 0.5);
  printf("%.4f\n", distancia);
     printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
}

int dezessete(){
  int wish;
  do{
    system("clear");
    int x;
  printf("Distância\nDois carros (X e Y) partem em uma mesma direção. O carro X sai com velocidade constante de 60 Km/h e o carro Y sai com velocidade constante de 90 Km/h.\nLeia a distância (em Km) e calcule quanto tempo leva (em minutos) para o carro Y tomar essa distância do outro carro.\nDistância:");
  scanf("%d",&x);
  x = (x*60)/30;
  printf("%d minutos\n",x);
     printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
}

int dezoito(){
  int wish;
  do{
    system("clear");
    printf("Gasto de Combustível\nJoaozinho quer calcular a quantidade de litros de combustível gastos em uma viagem, ao utilizar um automóvel que faz 12 KM/L.\nForneça o tempo gasto na viagem (em horas) e a velocidade média durante a mesma (em km/h). Assim, pode-se obter distância percorrida\n:");
    float vm, t, r;
    
  scanf("%f",&t);
  scanf("%f",&vm);
  r = (vm/12*t);
  printf("%.3f\n",r);
     printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
}

int dezenove(){
  int wish;
  do{
    system("clear");
    int val1, res;
int n100, n50, n20, n10, n5, n2, n1;
printf("Cédulas\nInsira o valor:");
scanf("%i",&val1);
n100 = val1/100;
n50 = (val1-(n100*100))/50;
n20 = (((val1-(n100*100))-n50*50)/20);
n10 = (((val1-(n100*100))-n50*50)-n20*20)/10;
n5 = ((((val1-(n100*100))-n50*50)-n20*20)-n10*10)/5;
n2 = (((((val1-(n100*100))-n50*50)-n20*20)-n10*10)-n5*5)/2;
n1 = ((((((val1-(n100*100))-n50*50)-n20*20)-n10*10)-n5*5)-n2*2)/1;
printf("%d\n",val1);
printf("%d nota(s) de R$ 100,00\n", n100);
printf("%d nota(s) de R$ 50,00\n", n50);
printf("%d nota(s) de R$ 20,00\n", n20);
printf("%d nota(s) de R$ 10,00\n", n10);
printf("%d nota(s) de R$ 5,00\n", n5);
printf("%d nota(s) de R$ 2,00\n", n2);
printf("%d nota(s) de R$ 1,00\n", n1);
     printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
}

int vinte(){
  int wish;
  do{
    system("clear");
    int h,m,s,t;
  printf("Conversão de Tempo\nInsira um valor em segundos:");
   scanf("%d",&t);
 h = t/3600;
 m = (t-(h*3600))/60;
 s = ((t-(h*3600))-m*60);
  printf("%d:%d:%d\n", h, m, s);
     printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
}

int vinteum(){
  int wish;
  do{
    system("clear");
    int a,m,d,t;
    printf("Idade em Dias\nLeia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias\n:");
   scanf("%d",&t);
 a = t/365;
 m = (t-(a*365))/30;
 d = ((t-(a*365))-m*30);
  printf("%d ano(s)\n", a);
  printf("%d mes(es)\n", m);
  printf("%d dia(s)\n", d);
     printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
}

int vitedois(){
  int wish;
  do{
    system("clear");
    int n100, n50, n20, n10, n5, n2, n1, r50, r25, r10, r05, r01, val1;
  double t50, t25, t10, t05, t01, val, cents;
  printf("Notas e Moedas:");
  scanf("%lf", &val);
  val1 = val;
  n100 = val1 / 100;
  n50 = (val1 - (n100 * 100)) / 50;
  n20 = ((val1 - (n100 * 100)) - n50 * 50) / 20;
  n10 = (((val1 - (n100 * 100)) - n50 * 50) - n20 * 20) / 10;
  n5 = ((((val1 - (n100 * 100)) - n50 * 50) - n20 * 20) - n10 * 10) / 5;
  n2 = (((((val1 - (n100 * 100)) - n50 * 50) - n20 * 20) - n10 * 10) - n5 * 5)/2;
  n1 =((((((val1 - (n100 * 100)) - n50 * 50) - n20 * 20) - n10 * 10) - n5 * 5) - n2 * 2);
  
  cents = val - val1;

  t50 = cents / 0.5;
  r50 = t50;
  t25 = (cents-(r50*0.5))/ 0.25;
  r25 = t25;
  t10 = ((cents-(r50*0.5))-r25*0.25)/0.10;
  r10 = t10;
  t05 = (((cents-(r50 * 0.5))-r25 * 0.25)-r10 * 0.10)/0.05;
  r05 = t05;
  t01 = ((((cents-(r50*0.5))-r25*0.25)-r10*0.10)-r05*0.05)/0.01;
  r01 = t01;
  printf("NOTAS:\n");
  printf("%d nota(s) de R$ 100.00\n", n100);
  printf("%d nota(s) de R$ 50.00\n", n50);
  printf("%d nota(s) de R$ 20.00\n", n20);
  printf("%d nota(s) de R$ 10.00\n", n10);
  printf("%d nota(s) de R$ 5.00\n", n5);
  printf("%d nota(s) de R$ 2.00\n", n2);
  printf("MOEDAS:\n");
  printf("%d moeda(s) de R$ 1.00\n", n1);
  printf("%d moeda(s) de R$ 0.50\n",r50);
  printf("%d moeda(s) de R$ 0.25\n",r25);
  printf("%d moeda(s) de R$ 0.10\n",r10);
  printf("%d moeda(s) de R$ 0.05\n",r05);
  printf("%d moeda(s) de R$ 0.01\n",r01);
     printf("Deseja continuar?\n1-Sim 0-Nao ");
  scanf("%d",&wish);
    }while(wish!=0);
}