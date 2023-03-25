//Biblioteca usada
#include<iostream>
//Biblioteca que chamamos para usar
using namespace std;
//Programa Principal
int main() {
    // Variaveis num1 e num2 com seus valores
    int num1 = 10, num2 = 4;
    // Variaveis das formulas matematicas.
    int soma, multi, divi, modulo, subt;
    // formula da soma com os valores num1 e num2
    soma = num1 + num2;
    // Formula da multiplicação com os valores num1 e num2
    multi = num1 * num2;
    // Formula da divisao com os valores num1 e num2
    divi = num1 / num2;
    // Formula do modulo com os valores num1 e num2
    modulo = num1 % num2;
    // Formula da subtração com os valores num1 e num2
    subt = num1 - num2;
    // Imprime para o usuario o resultado da soma
    cout<<soma<<endl;
    // Imprime para o usuario o resultado da multiplicação
    cout<<multi<<endl;
    // Imprime para o usuario o resultado da divisão
    cout<<divi<<endl;
    // Imprime para o usuario o resultado do modulo, resto da divi
    cout<<modulo<<endl;
    // Imprime para o usuario o resultado da subtração
    cout<<subt<<endl;
    
    return 0;
}