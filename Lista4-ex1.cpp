//Ex 1
#include <iostream>

using namespace std;

string tipoConsumidor() {
    string consumidor;
    cout << "Qual o tipo do consumidor? (residencial/comercial/industrial) ";
    cin >> consumidor;

    return consumidor;
}

int consumoDeAgua() {
    int consumo;
    cout << "Qual o consumo de agua por m3? ";
    cin >> consumo;

    return consumo;
}

int conta(string consumidor, int m3) {
    int valor;

    if (consumidor == "residencial")
        valor = 5 + 0.05*m3;
    else if (consumidor == "comercial") {
        if (m3 > 80)
            valor = 500 + 0.25*(m3 - 80);
        else   
            valor = 500;
    }
    else if (consumidor == "industrial") {
        if (m3 > 100)
            valor = 800 + 0.04*(m3 - 100);
        else    
            valor = 800;
    }
    else    
        cout << "consumidor invalido";

    return valor;
}

int main () {
    string consumidor = tipoConsumidor();
    int consumoM3 = consumoDeAgua();    
    cout << "CONTA DE AGUA" << endl;
    cout << "Tipo Consumidor: " << consumidor << endl;
    cout << "Consumo por m3: " << consumoM3 << endl;
    cout << "Valor: " << conta(consumidor, consumoM3);

    return 0;
}