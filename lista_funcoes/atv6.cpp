#include <iostream>
using namespace std;

// EXERCÍCIO: CRIE UMA FUNÇÃO calcular_media3 QUE RECEBE 3 NOTAS (DOUBLE) 
// E RETORNA A MÉDIA ARITMÉTICA DAS NOTAS
// NO main, LEIA AS 3 NOTAS DO USUÁRIO (usando a função le_numero_double) E IMPRIMA A MÉDIA.


int main(){
    double a, b, c;
    a = le_numero_double("Digite um número:");
    b = le_numero_double("Digite um número:");
    c = le_numero_double("Digite um número:");    

    cout << "Média: " << calcular_media3(a, b, c) << endl;
}


