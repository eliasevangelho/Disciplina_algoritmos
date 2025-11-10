#include <iostream>
using namespace std;

// EXERCÍCIO: CRIE UMA FUNÇÃO classificar_nota QUE RECEBE UMA NOTA ENTRE 0 E 100
// E RETORNA UM CONCEITO:
// - 90+  : A
// - 80-89: B
// - 70-79: C
// - 60-69: D
// - <60  : F
// NO main, LEIA A NOTA E IMPRIMA O CONCEITO.



int main(){
    int n;
	// leia a nota com a função le_numero

    cout << "Conceito: " << classificar_nota(n) << endl;
}

