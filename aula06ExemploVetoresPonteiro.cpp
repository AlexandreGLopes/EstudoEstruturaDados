#include <iostream>
using namespace std;

void GerarValores (float *PagtoM, float VlrPagto);

int main (void) {
    int Ind;
    float PagtoMes[12];
    GerarValores (PagtoMes, 150.00);

    for (Ind=0; Ind<12; Ind++) {
        cout<<"Pagamento Mes "<<Ind<<": "<<PagtoMes[Ind]<<endl;
    }
    return 0;
}

void GerarValores (float *PagtoM, float VlrPagto) {
    for (int Ind=0; Ind<12; Ind++){
        *(PagtoM + Ind) = VlrPagto;
    }
}