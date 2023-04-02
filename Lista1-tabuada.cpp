#include <iostream>

using namespace std;

int main() {

    int num;
    cout <<"Digite um numero que seja positivo" << endl;
    do {
        cin >> num;
        if (num <= 0)
            cout << "Digite um numero que seja positivo" << endl;
    } while (num <= 0);

    for (int i = 1; i <= 10; i++) 
        cout << num << " x " << i << " = " << num * i << endl;

    return 0;
}