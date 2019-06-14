#include <iostream>
using namespace std;

struct DADOS_ALUNO {
    int CodAluno;
    string Nome;
    int Turma;
};

# define MAX_LISTA 5

DADOS_ALUNO* CriarPilha (){
    DADOS_ALUNO Aluno = new DADOS_ALUNO[MAX_LISTA];
    return &Aluno;
}

/* 
    bool Exibir (DADOS_ALUNO *ptrAluno[]){
    for (int ind=0; ind<MAX_LISTA; ind++) {
        cout<<ptrAluno[ind]->CodAluno<<"\n"<<ptrAluno[ind]->Nome<<"\n"<<ptrAluno[ind]->Turma<<endl;
    }
    return true;
}
*/

int main () {
    DADOS_ALUNO Aluno = CriarPilha();
    
    

    /*Retorno = Exibir(&ptrAluno[]);
        if (Retorno == false) {
            cout<<"Não foi possível exibir a lista"<<endl;
        }
    */
    return 0;
}