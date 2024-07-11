    #include <stdio.h>
    
    void guerra (){
        int turnos = 4;
        for (int i = 1; i <= turnos; i++){
            printf ("turno %d guerreando...\n", i);
            printf ("Guerreiro ataca!\n");
        }
        printf ("Fim da guerra, guerreiro venceu!");
        
    }
    int main()
    {
    guerra();
    return 0;
    }