/* 6. Escriba un programa que lea de la entrada estándar
un caracter e indique en la salida estándar si el caracter
es una vocal minuscula, es una vocal mayúscula o no es una vocal */

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
      cout << "\nLa vocal es minúscula" << endl;
      break;
    
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
      cout << "\nLa vocal es mayuscula" << endl;
      break;

    default:
      cout << "No es una vocal";
      break;
  }

  return 0;
}