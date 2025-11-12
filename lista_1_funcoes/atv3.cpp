#include <iostream>
using namespace std;


void mostrar_idade(string nome, int idade){
    cout << nome << " tem " << idade << " anos." << endl;

}


int main(){
    mostrar_idade("Lucas", 15);
    mostrar_idade("Bruna", 16);
    mostrar_idade("Igor", 17);
}


// EXERCÍCIO: CRIE UMA FUNÇÃO mostrar_idade QUE RECEBE O NOME DE UM ALUNO E SUA IDADE,
// E IMPRIME UMA FRASE INFORMANDO SUA IDADE.
// CHAME A FUNÇÃO 3 VEZES NO main.

// Exemplo de saída:
// Lucas tem 15 anos.
// Bruna tem 16 anos.
// Igor tem 17 anos.
