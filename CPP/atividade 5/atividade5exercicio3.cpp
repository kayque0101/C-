#include <iostream>
using namespace std;
int main()
{
    int lado1=20, lado2=30, lado3=30;
    
    if(lado1+lado2>lado3&&lado1+lado3>lado2&&lado2+lado3>lado1)
    {
        cout<<"esses comprimentos formam um triangulo";
    }
    else
    {
        cout<<"os comprimentos não formam um triangulo";
    }
    
    return 0;
}