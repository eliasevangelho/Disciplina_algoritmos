#include <iostream>
using namespace std;

struct aluno{
    string matricula;
    string nome;
    string curso;
    string cpf;
    string telefone;
};

void imprimir_informacoes(string msg, aluno a,int num){
    cout << msg << num+1 << ":" << endl;
    cout << "Matricula: " << a.matricula << endl;
    cout << "Nome: " << a.nome << endl;
    cout << "Curso: " << a.curso << endl;
    cout << "CPF: " << a.cpf << endl;
    cout << "Telefone: " << a.telefone << endl << endl;



}

aluno ler_informacoes(string msg){
    aluno a;
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
    int alunos;
    
    cout << "Quantos alunos serao cadastrados?: ";
    cin >> alunos;

    aluno vet_alunos[alunos];
    int cont = 0;

    while(alunos > cont){
    vet_alunos[cont] = ler_informacoes("Digite as informacoes do aluno no sistema!!");
    cont ++;
        }

    for(int i = 0; i < alunos; i++){
    imprimir_informacoes("AS INFORMACOES DO ALUNO ", vet_alunos[i], i);


        }
    }
