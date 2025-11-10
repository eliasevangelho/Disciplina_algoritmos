#include <iostream>
using namespace std;

// EXERCÍCIO: VOCÊ DEVE CRIAR UMA FUNÇÃO nomeada eh_par QUE RECEBE UM NÚMERO INTEIRO
// E RETORNA true SE O NÚMERO FOR PAR OU false CASO SEJA ÍMPAR.
//
// NO main, VOCÊ DEVE:
//
// - Usar a função le_inteiro para ler um número informado pelo usuário.

// - Chamar a função eh_par passando o número digitado. 
// ** ATENÇÃO: PESQUISE NA INTERNET SOBRE O TIPO DE VARIÁVEL bool E COMO USÁ-LO NESTE CASO
// O TIPO bool REPRESENTA VALORES verdadeiro (true) OU falso(false)

// - Imprimir "É par." ou "É ímpar." de acordo com o retorno da função (FALSE OU TRUE).
//
// EXEMPLO:
// Digite um número: 8
// É par.


//escreva abaixo a função eh_par que irá retornar uma varíavel do tipo bool




int main(){

    int valor = le_numero("Digite um número: ");

    if(eh_par(valor)){
        cout << "É par." << endl;
    }else{
        cout << "É ímpar." << endl;
    }
}

