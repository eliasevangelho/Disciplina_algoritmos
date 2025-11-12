#include <iostream>
#include <iomanip>
using namespace std;

double le_numero(string msg){
double num;
cout << msg << endl;
cin >> num;

return num;

}

double calcular_imc(double peso, double altura){
    double imc;
    return imc = (peso / (altura * altura));


}

int main(){
    double p, h;
	p = le_numero("Digite seu peso: ");
	h = le_numero("Digite sua altura: ");

    cout << "IMC = " << fixed << setprecision(2) << calcular_imc(p, h) << endl;
}

// EXERCÍCIO: CRIE UMA FUNÇÃO calcular_imc QUE RECEBE PESO (KG) E ALTURA (M)
// E RETORNA O IMC.
// NO main, LEIA PESO E ALTURA E IMPRIMA O RESULTADO COM 2 CASAS DECIMAIS.


