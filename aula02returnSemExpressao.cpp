#include <iostream>
using namespace std;

void Teste (void);

int main (void) {
    Teste();
}

void Teste (void) {
    if (false) {
        return;
    }
    cout<<"ola"<<endl;
}