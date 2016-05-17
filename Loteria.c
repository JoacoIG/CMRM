#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void main(){

int numHuma1, numHuma2, numHuma3 = 0;
int numCpu1, numCpu2, numCpu3 = 0;

printf ("Dona'm el primer Numero\n");
scanf("%i",&numHuma1);

printf ("Dona'm el segon Numero\n");
scanf("%i",&numHuma2);

printf ("Dona'm el tercer Numero\n");
scanf("%i",&numHuma3);

time_t t;

srand((unsigned) time(&t));

numCpu1 = rand() % 10;
numCpu2 = rand() % 10;
numCpu3 = rand() % 10;

if(numHuma1 == numCpu1){

printf("Has encertat el primer número\n");
}else{
printf("No has encertat el primer número\n");
}
printf("Tu número 1: %i , Num1 CPU: %i\n",numHuma1,numCpu1);


if(numHuma2 == numCpu2){

printf("Has encertat el segon número\n");
}else{
printf("No has encertat el segon número\n");
}
printf("Tu número 2: %i , Num2 CPU: %i\n",numHuma2,numCpu2);


if(numHuma3 == numCpu3){

printf("Has encertat el tercer número\n");
}else{
printf("No has encertat el tercer número\n");
}
printf("Tu número 3: %i , Num3 CPU: %i\n",numHuma3,numCpu3);



printf("Tu numero 1 de la cpu es : %i\n",numCpu1);
printf("Tu numero 2 de la cpu es : %i\n",numCpu2);
printf("Tu numero 3 de la cpu es : %i\n",numCpu3);
}
