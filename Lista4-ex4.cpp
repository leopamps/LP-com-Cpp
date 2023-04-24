#include <iostream>
#include <string>

using namespace std;

int main() {

    string str1, str2;
    cout << "Digite a primeira palavra: ";
    cin >> str1;
    cout << "Digite a segunda palavra: ";
    cin >> str2;

    if (str1 > str2)
        cout << "Palavra 1 eh maior que palavra 2";
    else if (str1 < str2)
        cout << "Palavra 2 eh maior que palavra 1";
    else 
        cout << "Palavra 1 e 2 sao iguais"; 
}