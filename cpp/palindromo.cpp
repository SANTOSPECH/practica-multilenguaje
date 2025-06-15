#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>

using namespace std;

bool esPalindromo(string texto) {
    texto.erase(remove_if(texto.begin(), texto.end(), [](char c) { return !isalnum(c); }), texto.end());
    transform(texto.begin(), texto.end(), texto.begin(), ::tolower);
    string reverso = texto;
    reverse(reverso.begin(), reverso.end());
    return texto == reverso;
}

int main() {
    string palabra;
    cout << "Ingresa una palabra: ";
    getline(cin, palabra);
    cout << (esPalindromo(palabra) ? "Es palindromo" : "No es palindromo") << endl;
    return 0;
}
