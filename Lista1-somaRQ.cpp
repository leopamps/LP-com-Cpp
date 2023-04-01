#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int num;
    do {
        cin >> num;
        if (num <= 0)
            cout << "Digite um numero que seja positivo" << endl;
    } while(num <= 0);
    
    int count = 1;
    while (count <= num) {
        cout << sqrt(count) << endl;
        count++;
    }
    
    return 0;
}