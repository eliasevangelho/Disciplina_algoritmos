#include <iostream>
using namespace std;

double le_numero_double(string msg){
double num;
cout << msg << endl;
cin >> num;

return num;

}

double converter_celsius_fahrenheit(double c){
double resul;
return resul = (c * 1.8) + 32;


}

int main(){
    double c;
	c = le_numero_double("Digite uma temperatura em Celsius: ");

    cout << "Valor em Fahrenheit: " << converter_celsius_fahrenheit(c) << endl;
}

// EXERCÍCIO: CRIE UMA FUNÇÃO QUE RECEBE A TEMPERATURA EM CELSIUS
// E RETORNA EM FAHRENHEIT (procure no google qual a fórmula de conversão de Celsiui para Fahrenheit.
// NO main, LEIA A TEMPERATURA E IMPRIMA O RESULTADO.
