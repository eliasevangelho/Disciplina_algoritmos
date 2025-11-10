#include <iostream>
using namespace std;

void repetir_mensagem(string mensagem){

for(int i = 0; i < 3; i++){
    cout << mensagem << endl;

}


}

int main(){
    repetir_mensagem("Boa aula!");
}


// EXERCÍCIO: CRIE UMA FUNÇÃO NOMEADA repetir_mensagem QUE RECEBE UMA STRING E IMPRIME
// A MENSAGEM 3 VEZES NA TELA.
// NO main, CHAME A FUNÇÃO COM QUALQUER MENSAGEM.

//Exemplo de saída:
// Boa aula!
// Boa aula!
// Boa aula!
