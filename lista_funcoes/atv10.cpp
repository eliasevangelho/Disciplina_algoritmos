#include <iostream>
using namespace std;

// EXERCÍCIO: CRIE UMA FUNÇÃO faixa_etaria QUE RECEBE UMA IDADE 
// E RETORNA UMA STRING COM A CLASSIFICAÇÃO:
// - < 12: "criança"
// - 12 a 17: "adolescente"
// - 18 a 59: "adulto"
// - >= 60: "idoso"
// NO main, LEIA UMA IDADE E IMPRIMA A CLASSIFICAÇÃO.



int main(){
    int idade;
    // Leia a idade com função le_nuimero

    cout << "Classificação: " << faixa_etaria(idade) << endl;
}

