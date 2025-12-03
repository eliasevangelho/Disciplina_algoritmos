#include <iostream>
using namespace std;

struct aluno{
    string matricula;
    string nome;
    string curso;
    string cpf;
    string telefone;
};

void imprimir_informacoes(string msg, aluno a){
    cout << msg << endl;
    cout << "Matricula: " << a.matricula << endl;
    cout << "Nome: " << a.nome << endl;
    cout << "Curso: " << a.curso << endl;
    cout << "CPF: " << a.cpf << endl;
    cout << "Telefone: " << a.telefone << endl;



}

aluno ler_informacoes(string msg, aluno a){
    cout << msg << endl << endl << "Digite sua matricula: " << endl;
    cin >> a.matricula;
    cout << "Digite seu nome: " << endl;
    cin >> a.nome;
    cout << "Digite seu curso: " << endl;
    cin >> a.curso;
    cout << "Digite seu CPF: " << endl;
    cin >> a.cpf;
    cout << "Digite seu telefone: " << endl;
    cin >> a.telefone;
    cout << endl;

    return a;
}



int main(){
    struct aluno informacoes;

    informacoes = ler_informacoes("Digite suas informacoes no sistema!!", informacoes);
    imprimir_informacoes("AS INFORMACOES SAO:", informacoes);
}
