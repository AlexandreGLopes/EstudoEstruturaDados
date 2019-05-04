#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    struct DADOS_ALUNO
    {
        int CodAluno;
        char Nome[100];
        int Turma;
    };

    struct DADOS_ALUNO AlunoA;

    AlunoA.CodAluno = 10;
    //strcpy(AlunoA.Nome, "Gabriela");
    AlunoA.Turma = 250;

    cout<<"Código do Aluno: "<<AlunoA.CodAluno<<endl;
    cout<<"Nome: "<<AlunoA.Nome<<endl;
    cout<<"Turma: "<<AlunoA.Turma<<endl;

    system("pause > null");
}