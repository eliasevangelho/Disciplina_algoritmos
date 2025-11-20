#include <iostream>
using namespace std;

// EXERCÍCIO: VOCÊ DEVE CRIAR DUAS FUNÇÕES:
//
// 1) uma função somar_dois_numeros que recebe dois inteiros e retorna a soma;
// 2) uma função resultado_eh_par que recebe um inteiro, CHAMA internamente a função
//    somar_dois_numeros (passando dois valores recebidos do main) e retorna true se o
//    RESULTADO DA SOMA for par.
//
// NO main, VOCÊ DEVE:
//
// - Ler dois números inteiros usando a função le_inteiro.
// - Chamar a função resultado_eh_par, que por sua vez chamará somar_dois_numeros.
// - Imprimir "O resultado é par" ou "O resultado é ímpar".
//
// EXEMPLO:
// Digite o primeiro número: 7
// Digite o segundo número: 5
// A soma dos números é par.

int le_inteiro(string msg){
int num;
cout << msg << endl;
cin >> num;

return num;





}


// Faça abaixo a função somar_dois_numeros -> Deve receber dois inteiros e retornar a soma dos dois
int somar_dois_numeros(int num1, int num2){
int resul = num1 + num2;
return resul;
}





// Faça abaixo a função resultado_eh_par -> Deve receber dois inteiros e retornar true ou false.
// ATENÇÃO -> dentro da função resultado_eh_par você deve chamar a função somar_dois_numeros
bool resultado_eh_par(int num1, int num2){
int soma = somar_dois_numeros(num1, num2);

return soma % 2 == 0;

}




int main(){

    int n1 = le_inteiro("Digite o primeiro numero: ");
    int n2 = le_inteiro("Digite o segundo numero: ");


    // Abaixo Você deve chamar a função resultado_eh_par com n1 e n2
    // Se for par (true), deve imprimir "A soma dos números é par"
    // Se for ímpar (false), deve imprimir "A soma dos números é ímpar"
    if(resultado_eh_par(n1,n2)){
        cout << "A soma dos numeros eh par";
    }
    else{
        cout << "A soma dos numeros eh impar";
    }

}

