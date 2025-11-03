#include <iostream>

using namespace std;

int le_numero(string tipo){
    int num;

    cout << tipo << endl;

    cin >> num;

    if(tipo == "Digite quantos anos voce tem: "){
        num = num * 365;
    }
    else if(tipo == "Digite quantos meses a mais voce tem: "){
        num = num * 30;
    }
    else{
        num = num;
    }
    return num;
}

int calcular_dias_totais(int anos, int meses, int dias){
     int resul;

     resul = anos + meses + dias;

     return resul;


}

int main(){

	// Exemplo de como a função deve ser chamada:
	int anos, dias, meses;
	int dias_totais;

	anos = le_numero("Digite quantos anos voce tem: ");
	meses = le_numero("Digite quantos meses a mais voce tem: ");
	dias = le_numero("Digite quandos dias a mais voceg tem: ");

	dias_totais = calcular_dias_totais(anos, meses, dias);

	cout << "Voce tem " << dias_totais << " de vida!" << endl;



}
