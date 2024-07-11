#include <stdio.h>
int energia (){
    int cemig = 100;
    for (int i =0; i <= 100; i = i + 10){
        printf("CEMIG está restaurando %d%% da sua energia de %d%%, aguarde...\n", i, cemig);
    }
    return cemig;
}
    int main(){
        energia();
 return 0;
 }