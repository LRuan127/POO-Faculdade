#include <iostream>
using namespace std;

int main() {

    double horas, pagamentoBruto;
    int dependentes;

    double taxa = 16.78;
    double horasExtras, pagamentoExtras;

    cout << "Digite o numero de horas trabalhadas na semana: ";
    cin >> horas;

    cout << "Digite o numero de dependentes: ";
    cin >> dependentes;

    if (horas > 40) {
        horasExtras = horas - 40;
        pagamentoExtras = horasExtras * (taxa * 1.5);
        pagamentoBruto = (40 * taxa) + pagamentoExtras;
    } else {
        pagamentoBruto = horas * taxa;
    }

    double previdencia = pagamentoBruto * 0.06;
    double impostoFederal = pagamentoBruto * 0.14;
    double impostoEstadual = pagamentoBruto * 0.05;
    double sindicato = 10;

    double seguroSaude = 0;
    if (dependentes >= 3) {
        seguroSaude = 35;
    }

    double totalDescontos = previdencia + impostoFederal + impostoEstadual + sindicato + seguroSaude;
    double salarioLiquido = pagamentoBruto - totalDescontos;

    cout << "\nPagamento Bruto: R$ " << pagamentoBruto << endl;
    cout << "Previdencia Social (6%): R$ " << previdencia << endl;
    cout << "Imposto de Renda Federal (14%): R$ " << impostoFederal << endl;
    cout << "Imposto Estadual (5%): R$ " << impostoEstadual << endl;
    cout << "Sindicato: R$ " << sindicato << endl;

    if (seguroSaude > 0) {
        cout << "Seguro de Saude: R$ " << seguroSaude << endl;
    }

    cout << "Salario Liquido: R$ " << salarioLiquido << endl;

    return 0;
}