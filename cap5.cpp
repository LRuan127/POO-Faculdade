#include <iostream>
#include <cmath>
using namespace std;

double desvio(double v[], int n){

    double soma = 0;

    for(int i=0;i<n;i++)
        soma += v[i];

    double media = soma/n;

    double soma2 = 0;

    for(int i=0;i<n;i++)
        soma2 += pow(v[i] - media,2);

    return sqrt(soma2/n);
}

int main(){

    double v[100];
    int n;

    cout << "Quantidade de numeros: ";
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> v[i];

    cout << "Desvio padrao: " << desvio(v,n);

}