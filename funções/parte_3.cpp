#include<iostream>

using namespace std;

int somar_tres_inteiros(int num1, int num2, int num3){

int soma = num1 + num2 + num3;
return soma;
}
int main(){
int soma = somar_tres_inteiros(3, 3, 3);
    cout << soma;
}
