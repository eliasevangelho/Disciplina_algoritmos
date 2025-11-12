#include <iostream>
using namespace std;

double le_numero_double(double a, double b, double c){
    int resul = (a + b + c) / 3;
    return resul;


}

int main(){
    double a, b, c;
    a = le_numero_double(50,100,10);
    b = le_numero_double(40,26,70);
    c = le_numero_double(43,78,100);

    cout << "Média: " << b+a+c/3 << endl;
}
// EXERCÍCIO: CRIE UMA FUNÇÃO calcular_media3 QUE RECEBE 3 NOTAS (DOUBLE)
// E RETORNA A MÉDIA ARITMÉTICA DAS NOTAS
// NO main, LEIA AS 3 NOTAS DO USUÁRIO (usando a função le_numero_double) E IMPRIMA A MÉDIA.


