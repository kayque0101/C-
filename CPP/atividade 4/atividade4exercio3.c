#include <stdio.h>
 char habilidade (){
     char usarHabilidade ='s';
     while (usarHabilidade =='s'){
         printf ("você deseja usar kamehameha?\n");
         scanf("%s", &usarHabilidade);
         if (usarHabilidade == 's')     {
         printf ("você usou kamehameha!\n");
     }
 }
    printf ("você derroutou a calvice!\n");
    return usarHabilidade;
}
int main(){
    habilidade();
 return 0;
 }
     