//Biblioteca usada
#include<iostream>
//Biblioteca que estamos chamando para usar
using namespace std;

//Programa Principal
int main() {
    
    // Variavel a com seu valor
    int a = 15;
    // Variavel b com seu valor
    int b = 3;
    // Variavel c com seu valor
    int c = 10;
    //Exemplo do operador AND
    //Condição para a ser menor que b e b ser menor que c
    if (a < b && b < c) {
        //Imprime pro usuario a ordem crescente dos numeros
        cout << "A ordem é: a, b, c" << endl;
    }
    //Exemplo do operador OR
    //Condicional para o a ser maior que b ou b ser maior que c
    if (a > b || b > c) {
        //Imprime pro usuario que somente uma condição esta correta
        cout << "Pelo menos uma das condições é verdadeira" << endl;
    }
    
    //Exemplo do operador NOT
    //Condicional para o a ser diferente de b
    if (!(a == b)) {
        //Imprime para o usuario que a é diferente de b
        cout << "a é diferente de b" << endl;
    }
    
    return 0;
}