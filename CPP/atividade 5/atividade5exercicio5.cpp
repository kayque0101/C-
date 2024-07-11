#include <iostream>
#include <cstdlib>
using namespace std;
int main ()
{
    
    int numeroSecreto = rand() % 100 + 1;
    
    int tentativas = 8;
    int palpite;
    
    do
    {
        
        cout<< "tentativas" << tentativas << ",digite um número";
        
        cin >> palpite;
        
        if (palpite < numeroSecreto)
        {
            cout<< "Muito Baixo!"<< endl;
        }
        
        else if (palpite > numeroSecreto)
        {
            cout << "Muito alto!" << endl;
        }
        tentativas--;
    }while (palpite != numeroSecreto && tentativas >0);
    
    if(palpite == numeroSecreto)
    {
        
        cout<<"parabéns! Você acertou o número com"<< 8- tentativas<<"tentativa(s)!"<<endl;
    }
    else
    {
        cout << "Você não conseguiu adivinhar o número. O número secreto era:"<< numeroSecreto<<"!"<<endl;
        
    }
        return 0;
    }
    
