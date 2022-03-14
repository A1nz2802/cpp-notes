/* 3. Realice un programa que lea un valor entero y determine
si se trata de un número par o impar */

#include<iostream>
using namespace std;

int main() {
  
  int numero;

  cout << "Ingrese un número: ";
  cin >> numero;

  if ( numero == 0 ) {
    cout << "El número es cero";
  } else if ( numero % 2 == 0 ) {
    cout << "El número es par";
  } else {
    cout << "El número es impar";
  }

  return 0;
}