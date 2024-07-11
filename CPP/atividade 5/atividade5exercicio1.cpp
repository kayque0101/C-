#include <iostream> // Inclui a biblioteca para entrada e saída de dados

using namespace std;
int main()
{
    int numero; // Declaração da variável para armazenar o número fornecido pelo usuário

    // Solicita ao usuário que insira um número inteiro
    cout << "Digite um numero inteiro: ";
    cin >> numero; // Lê o número fornecido pelo usuário
   
    if ( numero <= 1){
        cout << "Não é primo!";
    } else
    {
        for (int i = 2; i < numero; i++){
            if ( numero%i == 0){
            cout << "Não é primo!";
            return 0;
            }
        }
    }
   
            cout << "É primo!";
   
    return 0;

}