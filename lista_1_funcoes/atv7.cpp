#include <iostream>
using namespace std;

// EXERCÍCIO: CRIE UMA FUNÇÃO preco_final QUE RECEBE O PREÇO E O DESCONTO (%) 
// E RETORNA O PREÇO COM DESCONTO.
// NO main, LEIA O PREÇO E O DESCONTO E EXIBA O RESULTADO.



int main(){
    double p, d;
	p = le_numero_double("Digite um número double: ");
	d = le_numero_double("Digite um número double: ");

    cout << "Preço final: " << preco_final(p, d) << endl;
}

