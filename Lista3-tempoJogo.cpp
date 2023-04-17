#include <iostream>

using namespace std;

int tempoJogo(int h1, int m1, int h2, int m2 ) {
    cout << h2;
}   

int main() {

    int h1, m1, h2, m2;
    cout << "hora 1: ";
    cin >> h1;
    cout << "minuto 1: ";
    cin >> m1;
    cout << "hora 2: ";
    cin >> h2;
    cout << "minuto 1: ";
    cin >> m2;
    
    tempoJogo(h1,m1,h2,m2);
    return 0; 
}