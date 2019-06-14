#include <iostream>
using namespace std;

int main () {
    int Idade;
    int *ptr;

    Idade=25;
    ptr=&Idade;
    *ptr=30;

    cout<<"Idade: "<<Idade<<endl;
    cout<<"Endereço de ptr: "<<ptr<<endl;
    cout<<"Valor de ptr: "<<*ptr<<endl;
}