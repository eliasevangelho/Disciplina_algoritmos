#include <iostream>
using namespace std;

int le_numero(void){

int num = 0;

cin >> num;

return num;
}


int main(){

    int principal;
    string resposta = "nao";
    int cont = 1, chute = 5;

    cout << "Digite um numero entre 1 e 10 para ser adivinhado em 3 tentativas: ";
    principal = le_numero();

    while(cont <= 3){

    cout << "As maquinas acham que seu numero e o: " << chute << ". Sim ou nao? Se nao for, e maior ou menor ? " << endl;

    cin >> resposta;

    cont++;

    if(resposta == "maior"){
        chute++;
    }
    else if(resposta == "menor"){
        chute--;
    }
    else{
        break;
    }



}
    if(resposta == "sim"){
        cout << "AS MAQUINAS VENCERAMM!!! MUAHAHAHAH";
    }
    else{
        cout << "Ja gastei as 3 tentativas. Os humanos venceram :(";
    }

}

//Faça um programa simples de adivinhação numérica;
// O programa terá, no máximo, 3 tentativas. Se não acertar, a humanidade ganha. Se acertar, as máquinas ganham;
// A cada tentativa o usuário deve informar se o palpite é certo, maior ou menor que o número pensado;

//Use a função le_numero para ler um número entre 1 e 10 com a mensagem conforme exemplo;


// No main, deve criar um laço de repetição (while) que executará até que o número seja adivinhado ou até exceder o número de tentativas.

// Tente organizar seu código em funções

// Exemplo:
// Digite o número a ser adivinhado entre 1 e 10
// 9
// Seu número é o 2, maior ou menor?
// maior
// Seu número é o 3, maior ou menor?
// maior
// Seu número é o 9, maior ou menor?
// sim
// AS MÁQUINAS VENCERAM

//
