#include <iostream>
using namespace std;
int main()
{
    
    int heroi;
    cout<<"escolha um heroi(1-3):";
    cin >> heroi;
    
    switch(heroi){
        
    case 1:
    cout<< "Batman"<<endl;
    cout<<"rajada de mucego"<<endl;
    break;
    
    case 2:
    cout<< "Superman"<< endl;
    cout<<"raio laser"<<endl;
    break;
    
    case 3:
    cout<<"Mulher Maravilha"<<endl;
    cout<<"força extrema"<<endl;
    break;
    default:
    cout<<"heroi valido"<<endl;
    break;
    }
    
    return 0;
}