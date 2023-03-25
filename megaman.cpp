//Biblioteca usada
#include <iostream>
//Biblioteca usada
#include <string>
//Biblioteca que chamamos
using namespace std;
//Programa Principal
int main() {
    //Variavel life
    int life;
    //Variavel energy
    float energy;
    //Variavel status
    bool status;
    //Variavel character para o nome do personagem
    string character;
    //Valor da variavel life
    life = 5;
    //Valor da variavel energy
    energy = 99.99f;
    //Valor da variavel status
    status = true;
    //Nome do personagem
    character = "Mega Man";
    //Imprimi o valor da variavel life para o usuario
    cout<<life<<endl;
    //Imprimi o valor da variavel energy para o usuario
    cout<<energy<<endl;
    //Imprimi o valor da variavel status para o usuario
    cout<<status<<endl;
    //Imprimi o nome da variavel character para o usuario
    cout<<character<<endl;

    return 0;
}