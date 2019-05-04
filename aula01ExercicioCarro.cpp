#include <iostream>
using namespace std;

struct Carro {
    string Cor;
    char placa[8];
    int 
    QtdePessoas;
};
    struct Carro CarroA[5];
    
int main(){
    int posicao;
    cout<<"Em qual posicao do vetor escrever?"<<endl;
    cin>>posicao;
    
    CarroA[posicao].Cor = "Azul";
    //CarroA[posicao].placa = ('A','A','A','-','9','9','9','9');
    CarroA[posicao].QtdePessoas = 5;

    for (int i=0; i<5; i++){
        cout<<"A posicao "<<i<<" comtem:"<<endl;
        cout<<CarroA[i].Cor<<" "<<CarroA[i].placa<<" "<<CarroA[i].QtdePessoas<<endl;
    }
    return 0;
}
