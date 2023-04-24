//Ex 2
#include <iostream>

using namespace std;

int divisivel() {
    
    int num;
    cout << "Insira um numero para verificar se eh divisiel por 3 e 5: ";
    cin >> num;
    if ((num % 3 == 0) && (num % 5 == 0))
        cout << "Eh divisivel por 3 e 5" << endl;
    else 
        cout << "Nao eh divisivel por 3 e 5" << endl;
    
    return 0;
}

int somaMenores() {
    
    int a,b,c,d;
    cout << "Insira 4 numeros para ver a soma dos 3 menores: ";
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    
    int maior = a;
    int soma = a + b + c + d;

    if (maior < b)
        maior = b;
    if (maior < c)
        maior = c;
    if (maior < d)
        maior = d;
    
    soma -= maior;
    return soma;
}

int main() {

    divisivel();
    cout << "soma: " << somaMenores();
    return 0;
}