#include <iostream>
using namespace std;

int main()
{
 int porta_misteriosa;
 cout<<"Por onde os sobreviventes irão passar? escolha a opção 1 ou 2?"<<endl;
 cin>> porta_misteriosa;
 
 if(porta_misteriosa == 1){
     
     cout<<"Escolheram o caminho certo!";
     cout<<"\nchegaram a um lugar seguro (:";
 }
  else{
      
      cout<<"escolheram o caminho errado!";
      cout<<"\n opa você morreu ):";
  }

     return 0;
 }