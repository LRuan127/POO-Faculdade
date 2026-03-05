#include <iostream>
#include <cmath>
using namespace std;

double frioVento(double t, double v){

    if(t > 10){
        cout << "Temperatura invalida" << endl;
        return 0;
    }

    double W = 13.12 + 0.6215*t - 11.37*pow(v,0.16) + 0.3965*t*pow(v,0.16);

    return W;
}

int main(){

    double t,v;

    cout << "Temperatura: ";
    cin >> t;

    cout << "Velocidade do vento: ";
    cin >> v;

    cout << "Indice de frio do vento: " << frioVento(t,v);

}