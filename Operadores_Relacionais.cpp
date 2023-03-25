//Biblioteca usada
#include<iostream>
//Biblioteca que chamamos para usar
using namespace std;
//Programa Principal
int main() {
    // Variavel x com seu valor
    int x = 10;
    // Variavel y com seu valor
    int y = 20;
    //Condicionais
    //Condicional para x ser maior que y
    if (x > y) {
        //Imprime para o usuario a informação que x é maior que y
        cout << "x é maior que y" << endl;
    }
    //Condicional para o x ser menor que y
    if (x < y) {
        //Imprime para o usuario a informação que x é menor que y
        cout << "x é menor que y" << endl;
    }
    //Condicional para x ser maior ou igual ao y
    if (x >= y) {
        //Imprime para o usuario que x é maior ou igual a y
        cout << "x é maior ou igual ao y" << endl;
    }
    //Condicional para x ser menor ou igual ao y
    if (x <= y) {
        //Imprime para o usuario que x é menor ou igual ao y
        cout << "x é menor ou igual ao y" << endl;
    }
    //Condicional para x ser igual ao y
    if (x == y) {
        //Imprime para o usuario que x é igual ao y
        cout << "x é igual ao y" << endl;
    }
    //Condicional para x ser diferente de y
    if (x != y) {
        //Imprime para o usuario que x é diferente de y
        cout << "x é diferente de y" << endl;
    }
    return 0;
}