    #include <iostream>
    #include <string>
    using namespace std;
    
    int main(){
    
     string Nome;
     int Raca;
     int Classe;
     string Idade;
     int Sexo;
     string ClasseSocial;
     int Ocupacao;
     int Historia;
     string Motivacao;
     int Aparencia;
    
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
    
       cout <<"Qual o seu Nome?\n" <<endl;
       cin >> Nome;
       "\n";
       cout <<"\nQual a sua Raça (ton de pele)?"<<endl;
       cout <<"opcão 1 branca, opção 2 morena"<<endl;
       cin >> Raca;
      switch(Raca)
       {
        case 1: cout <<"branca\n";
        break;
        
        case 2: cout <<"morena\n";
        break;
        
        default: cout << "outros tons de pele\n";
        break;
    }
        
       cout <<"Escolha a sua Classe!"<<endl;
    cout<<"opção 1 Guerreiro FOR 8, DES 5, CON 7, INT 4, SAB 6, CAR 4\n"<<"opção 2 Mago FOR 3, DES 5, CON 3, SAB 10 CAR 6,\n"<<"opção 3 ladrão FOR 6, DES 10, CON 6, SAB 3, CAR 8\n"<<"opção 4 clérico FOR 4, DES 3, CON 4, SAB 9, CAR 8\n"<<"opção 5 Realer"<<endl;
       cin >> Classe;
       switch (Classe)
       {
       case 1: cout <<"Guerreiro\n";
       break;
    
      case 2: cout <<"Mago\n";
      break;
    
      case 3: cout<<"ladrão\n";
      break;
    
      case 4: cout<<"clérico\n";
      break;
      case 5: cout <<"Realer\n";
      break;
    
       default: cout<<"Invalido\n";
         break;
    
       }
    
       cout <<"Quantos anos você tem?"<<endl;
       cin >> Idade;
    
       cout <<" Qual o seu Sexo?"<<endl;
       cout<<"Opção 1 masculino"<< "opção 2 feminino\n"<<endl;
       cin >> Sexo;
       switch(Sexo)
       {
           case 1: cout<<" Masculino\n";
           break;
           
           case 2: cout<<"Feminino\n";
           break;
           
           default: cout<<"Outros\n";
           break;
       }
    
       cout <<"  Classe Social"<<endl;
       cin >> ClasseSocial;
    
       cout <<"Oque você faz? qual a sua ocupação?"<<endl;
       cout <<"Opção 1 Medico"<<"opção 2 ferreiro"<<"opção 3 cozinheiro."<<endl;
       cin >> Ocupacao;
       switch(Ocupacao)
       {
           case 1: cout<<"Medico\n";
           break;
           case 2: cout<<"Ferreiro\n";
           break;
           case 3: cout<<"Cozinheiro\n";
           break;
           default: cout<< "outros\n";
           break;
       }
       
    
       cout <<" qual a sua Historia? oque você já passou? Faça uma escolha entre as opções A e B!" <<endl;
      cout<<"opção 1 Você era uma criança de um vilarejo muito pobre, localizado bem no interior que tem o sonho de se tonar rico! e para realizar esse sonho, você se torna um aventureiro e em embarca em uma viagem em buusca de novas aventuras e tesouros!\n"<<"opção 2 Quando criança, você teve sua família morta por monstros e isso fz com que você no futuro, se tornasse um bravo Guerreiro que iria eliminar todos esses monstros do mundo!\n"<<endl;
        cin >> Historia;
      switch(Historia)
      {
      case 1: cout <<"Você era uma criança de um vilarejo muito pobre, localizado bem no interior que tem o sonho de se tonar rico! e para realizar esse sonho, você se torna um aventureiro e em embarca em uma viagem em buusca de novas aventuras e tesouros!\n";
      break;
      
      case 2: cout <<"Quando criança, você teve sua família morta por monstros e isso fz com que você no futuro, se tornasse um bravo Guerreiro que iria eliminar todos esses monstros do mundo!\n";
      break;
      default: cout<<"Invalido!\n";
        break;
      }
    cout <<"Como vc é? qual a sua aparencia?"<<endl;
    cout <<"Opção 1 alto, forte, e branco\n"<<"opção 2 baixo, magro e branco\n"<<" opção 3 alto, forte e moreno\n"<<endl;
    cin >> Aparencia;
    switch(Aparencia)
    {
        case 1: cout<<"alto, forte, e branco\n";
        break;
        case 2: cout<<"baixo, magro e branco\n";
        break;
        case 3: cout<<"alto, forte e moreno\n";
        
        default: cout<<"Invalido\n";
        break;
    }
    return 0;
    }