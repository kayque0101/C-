#include <iostream>
using namespace std;

int main() {
    int dia;
    
    cout << "Digite o numero do dia da semana (1-7):";
    cin >> dia;
    
    switch (dia) {
    case 1:
        cout << "Domingo" << endl;
        break;
    case 2:
        cout << "Segunda-feira" << endl;
        break;
    case 3:
        cout << "terça-feira" << endl;
        break;
case 4:
        cout << "Quarta-feira" << endl;
        break;
    case 5:
        cout << "Quinta-feira" << endl;
            break;
    case 6:
       cout << "Sexta-feira" << endl;
             break;
     case 7:
        cout <<"Sàbado" << endl;
        break;
    default:
       cout << "Dia inválido" << endl;
       break;
      
    }
    return 0;
}