#include <iostream>
using namespace std;



int le_numero_double(string msg){
int num;
cout << msg << endl;
cin >> num;

return num;

}

int preco_final(int p, int d){
int resul;
resul = p - ((p*d)/100);
return resul;


}

int main(){
    double p, d;
	p = le_numero_double("Digite o preco: ");
	d = le_numero_double("Digite o desconto: ");

    cout << "Preco final: " << preco_final(p, d) << endl;
}

// EXERCÍCIO: CRIE UMA FUNÇÃO preco_final QUE RECEBE O PREÇO E O DESCONTO (%)
// E RETORNA O PREÇO COM DESCONTO.
// NO main, LEIA O PREÇO E O DESCONTO E EXIBA O RESULTADO.
