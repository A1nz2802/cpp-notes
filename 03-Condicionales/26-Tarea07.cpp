/* 7. Escriba un programa que solicite una edad (un entero)
e indique en la salida estándar si la edad introducida
está en el rango [18-25]*/

#include<iostream>
using namespace std;

int main() {
  int edad;

  cout << "Digite su edad: ";
  cin >> edad;

  if ( (edad >= 18) && (edad <=25) ) {
    cout << "Su edad está en el rango de 18-25";
  } else {
    cout << "Su edad no está en dicho rango";
  }
  
  return 0;
}