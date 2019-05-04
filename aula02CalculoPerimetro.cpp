#include <iostream>
using namespace std;

//protótipo da função
float CalcPerimetroCircunferencia (float);

//programa principal
int main(void)
{
    cout<<CalcPerimetroCircunferencia(3)<<endl;
    return 0;
}

//função
float CalcPerimetroCircunferencia (float raio) {
    float Perimetro;
    Perimetro = 2*3.14*raio;
    return Perimetro;
    //Também poderíamos retirar a variável Perimetro e fazer direto no return de duas formas:
    //return (2*3.14*raio); ou
    //return 2*3.14*raio;
}