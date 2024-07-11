    #include <iostream>
    using namespace std;
    int main(){
        
    int numero;
    
    cout<<"Digite um numero:";
    cin>> numero;
    
    if (numero % 2 == 0){
        cout<< "o numero e par"<<endl;
    } else{
        cout<< "o numero e impar."<<endl;
    }
    
        return 0;
    }