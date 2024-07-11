
#include <stdio.h>
 #include <stdbool.h> // Incluindo a biblioteca para usaro tipo bool
 bool fogo() {
     bool churrasqueiraEletrica= true;
     while (churrasqueiraEletrica == true)
     {
         printf ("TC! pegando fogo bicho!!");
         churrasqueiraEletrica = false;
     }
 }
     int main () {
         fogo ();
         return 0;
     }
 