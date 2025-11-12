#include <iostream>
using namespace std;


int calcular_dobro(int x){
    return x * 2;
}

int main(){
    int num;
    cout << "Digite um numero: ";
    cin >> num;
    cout << "o dobro de " << num << " e " << calcular_dobro(num);


}

// EXERCÍCIO: Analise a função calcular_dobro QUE RECEBE UM INTEIRO E RETORNA O DOBRO.
// Você deve alterar o código dentro do main para declarar um número, ler o número (com a função le_numero), usar a função para calcular o dobro e imprimir na tela o número e o seu dobro

// Exemplo:
// Digite um número inteiro:
// 6
// O dobro de 6 é 12

