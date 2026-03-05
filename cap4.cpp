#include <iostream>
using namespace std;

void entrada(double &libras, double &oncas){
    cout << "Libras: ";
    cin >> libras;
    cout << "Oncas: ";
    cin >> oncas;
}

void calculo(double libras, double oncas, double &kg, double &g){

    double gramas = libras * 453.59 + oncas * 28.34;

    kg = gramas / 1000;
    g = (int)gramas % 1000;
}

void saida(double kg, double g){
    cout << "Kg: " << kg << " Gramas: " << g << endl;
}

int main(){

    char op;
    double libras,oncas,kg,g;

    do{

        entrada(libras,oncas);
        calculo(libras,oncas,kg,g);
        saida(kg,g);

        cout << "Deseja repetir? (s/n): ";
        cin >> op;

    }while(op == 's');

}