/* 10. Escriba un programa que calcule el valor de:
  1! + 2! + 3! + ... + n! (suma de factoriales)
*/
#include<iostream>
#include<conio.h>
using namespace std;

int main() {

  int elementos;
  int factorial = 1;
  int suma = 0;

  cout << "Ingrese el número de elementos a sumar: ";
  cin >> elementos;

  for (int i = 0; i <= elementos; i++) {
    
    factorial *= i;
    suma += factorial;

  }

  cout << "\nLa suma de factoriales es: " << suma << endl;
  
  getch();
  return 0;
}