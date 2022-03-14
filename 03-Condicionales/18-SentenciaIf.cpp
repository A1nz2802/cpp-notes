#include<iostream>
using namespace std;

int main() {
  int numero;
  int dato = 5;

  cout << "Ingrese un número: ";
  cin >> numero;

  /* 
    > Mayor a
    < Menor a
    >= Mayor igual a
    <= Menor igual a
    == Igual a
  */
  if ( numero == dato) {
    cout << "El número es 5";
  } else {
    cout << "El número es diferente de 5";
  }

  return 0;
}