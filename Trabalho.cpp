#include <iostream>
#include <string>
using namespace std;

int main(){

 string Nome;
 string Raca;
 char Classe;
 string Idade;
 string Sexo;
 string ClasseSocial;
 string Ocupacao;
 string Historia;
 string Motivacao;
 string Aparencia;

 int Forca;
 int Destreza;
 int Constituicao;
 int Inteligencia;
 int Sabedoria;
 int Carisma;
  

  int Espada;
  int Arco;
  int Armadinhas;
  int Furtividade;
  int Magia;
  int Lutar;
  int Medicina;
  int Persuasao;
  int Herbalismo;
  int Navegacao;
  int Etiqueta;
  int Linguas;


  string NomeArtefato;
  string Localizacao;
  string funcao;
  float  Custo;


  string Armas;
  string Armaduras;
  string Equipametos;

  float MoedasDeOuro;


  float Reputacao;
  string Alianca;
  string Conexoes;
  float  NivelDeMagia;




   cout <<"Dados do  Personagem"<< endl;
   
   cout <<"Qual o seu Nome?" <<endl;
   cin >> Nome;

   cout <<"Qual a sua Raça (ton de pele)?"<<endl;
   cin >> Raca;

   cout <<"Escolha a sua Classe!"<<endl;
cout<<"opção A Guerreiro\n"<<"opção B Mago\n"<<"opção C ladrão\n"<<"opção D clérico\n"<<"opção E"<<endl;
   cin >> Classe;
   switch (Classe)
   {
   case 'A': cout <<"Guerreiro\n";
   break;
    
  case 'B': cout <<"Mago\n";
  break;

  case 'C': cout<<"ladrão\n";
  break;
  
  case 'D': cout<<"clérico\n";
  break;
  case 'E': cout <<"Realer\n";
  break;
   
   default: cout<<"Invalido\n";
     break;

   }

   cout <<"Quantos anos você tem?"<<endl;
   cin >> Idade;

   cout <<" Qual o seu Sexo?"<<endl;
   cin >> Sexo;

   cout <<"  Classe Social"<<endl;
   cin >> ClasseSocial;

   cout <<"Oque você faz? qual a sua ocupação?"<<endl;
   cin >> Ocupacao;

   cout <<" qual a sua Historia? oque você já passou?" <<endl;
  cin >> Historia;

cout <<"Como vc é? qual a sua aparencia?"<<endl;
cin >> Aparencia;

