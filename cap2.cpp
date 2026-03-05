#include <iostream>
using namespace std;

int main(){

    double divida = 1000;
    double jurosMes;
    double pagamento = 50;
    double totalJuros = 0;

    int meses = 0;

    while(divida > 0){

        jurosMes = divida * 0.015;
        totalJuros += jurosMes;

        double pago = pagamento - jurosMes;
        divida -= pago;

        meses++;
    }

    cout << "Meses para pagar: " << meses << endl;
    cout << "Total pago em juros: " << totalJuros << endl;

}