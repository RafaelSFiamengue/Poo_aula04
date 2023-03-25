//Biblioteca usada
#include <iostream>
//Biblioteca usada
#include <stdlib.h>
//Biblioteca que estamos chamando
using namespace std;
//Programa Principal
int main() {
    // Variavel para as notas dos semestres
    double nota1, nota2, nota3, nota4, media;
    //Imprime para o usuario a pergunta do valor da nota1
    cout << "Digite a nota do primeiro semestre: ";
    //Leitura do valor da nota1
    cin >> nota1;
    //Imprime para o usuario a pergunta do valor da nota2
    cout << "Digite a nota do segundo semestre: ";
    //Leitura do valor da nota2
    cin >> nota2;
    //Imprime para o usuario a pergunta do valor da nota3
    cout << "Digite a nota do terceiro semestre: ";
    //Leitura do valor da nota3
    cin >> nota3;
    //Imprime para o usuario a pergunta do valor da nota4
    cout << "Digite a nota do quarto semestre: ";
    //Leitura do valor da nota4
    cin >> nota4;
    //soma das notas de todos os semestres
    double soma = nota1 + nota2 + nota3 + nota4;
    //Valor da media
    media = (soma / 4);
    //Imprime o valor da media para o usuario
    cout << "Sua media é " << media << endl;
    //Se a media do usuario for maior ou igual a 7 ele é aprovado
    if (media >= 7) {
        // Imprime a informação que o usuario foi aprovado
        cout << "Parabens, você foi aprovado" << endl;
    //Se a media for menor que 7 ele foi reprovado
    }else{
        //Imprime a informação que ele foi reprovado
        cout << "Eita, você foi reprovado" << endl;
    }

    return 0;
}