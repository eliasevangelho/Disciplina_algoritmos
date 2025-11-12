#include <iostream>
using namespace std;



double le_numero(string msg){
int num;
cout << msg << endl;
cin >> num;

return num;

}

double calcular_media3(double a, double b, double c){
    int resul = (a + b + c) / 3;
    return resul;


}

int main(){
    double a, b, c;
    a = le_numero("Digite um numero: ");
    b = le_numero("Digite mais um numero: ");
    c = le_numero("mais um: ");

    cout << "A media eh: " << calcular_media3(a,b,c) << endl;
}
// EXERCÍCIO: CRIE UMA FUNÇÃO calcular_media3 QUE RECEBE 3 NOTAS (DOUBLE)
// E RETORNA A MÉDIA ARITMÉTICA DAS NOTAS
// NO main, LEIA AS 3 NOTAS DO USUÁRIO (usando a função le_numero_double) E IMPRIMA A MÉDIA.


