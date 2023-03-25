// Biblioteca usada
#include <iostream>
//Biblioteca matematica usada
#include <cmath>
//Biblioteca usada
using namespace std;
//Programa Principal
int main() {
    // Variaveis das notas e media
    double ac1, ac2, af, media;
    //Pergunta para o usuario o valor da ac1
    cout << "Digite o valor da ac1: ";
    //O valor que ac1 vai receber
    cin >> ac1;
    //Pergunta para o usuario o valor da ac2
    cout << "Digite o valor da ac2: ";
    //O valor que ac2 vai receber
    cin >> ac2;
    //Pergunta para o usuario o valor da af
    cout << "Digite o valor da af: ";
    //O valor que af vai receber
    cin >> af;
    //Calculo da ac1
    ac1 = ac1 * 0.15;
    //Calculo da ac2
    ac2 = ac2 * 0.35;
    //Calculo da af
    af = af * 0.5;
    //Calculo da media
    media = ac1 + ac2 + af;
    //Mostra para o usuario o valor da media dele
    cout << "Sua media é:" << media << endl;
    //Condicional para a media ser maior ou igual a 5
    if (media >= 5) {
        //Mostra se o usuario foi aprovado 
        cout << "Parabens, você foi aprovado";
    }
    //Se a media for menor que 5
    else {
        //Mostra que o usuario foi reprovado
        cout << "Eita, você foi reprovado";
    }
    
    return 0;
}
