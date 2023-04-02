#include <iostream>
#include<string>

using namespace std;

class Cachorro {
    private:
        string nome;
        int idade;
        string raca;
    public:
        void setNome(string x) {
            nome = x;
        }
};

int main () {

    Cachorro dog1;
    dog1.nome = "Bob";
    dog1.idade = 5;
    dog1.raca = "caramelo";

    cout << dog1.raca;
    
    return 0;
}