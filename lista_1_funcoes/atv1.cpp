#include <iostream>
using namespace std;

string apresentar_curso(string curso){

    cout << "Bem-vindo ao curso de " << curso << endl;

}


int main(){
    cout << apresentar_curso("Informática");
    cout << apresentar_curso("Eletrotécnica");
    cout << apresentar_curso("Administração");
}


// EXERCÍCIO: CRIE UMA FUNÇÃO NOMEADA apresentar_curso QUE RECEBE O NOME DE UM CURSO
// (EXEMPLO: "Informática", "Eletrotécnica") E IMPRIME UMA MENSAGEM DE APRESENTAÇÃO.
// NO main, CHAME A FUNÇÃO PARA 3 CURSOS DIFERENTES.

// Exemplo de saída:
// Bem-vindo ao curso de Informática


