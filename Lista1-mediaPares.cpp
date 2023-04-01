#include <iostream>

using namespace std;

int main() {

    float num1, num2;
    for(int i = 1; i <= 10; i++){
        cout << "Digite o par " << i << "/10" << endl;
        cin >> num1;
        cin >> num2;
        cout << "media = " << (num1 + num2)/2 << endl << endl;
    }

    return 0;
}