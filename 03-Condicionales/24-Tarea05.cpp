/* 5. Escriba un programa que lea de la entrada estándar
un caracter e indique en la salida estándar si el caracter
es una vocal minúscula o no */

#include<iostream>
using namespace std;

int main() {
  char letra;
  
  cout << "Digite un caracter: ";
  cin >> letra;

  switch( letra ) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      cout << "Es una vocal minúscula";
      break;
    
    default:
      cout << "No es una vocal minúscula";
      break;
  }

  return 0;
}