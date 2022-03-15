/* 9. Escriba un programa que calcule el valor de:
  1*2*3*...*n (factorial)
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {

  int numero;
  int factorial = 1;

  cout << "Ingrese un número: ";
  cin >> numero;

  for(int i = 1; i <= numero; i++) {
    factorial *= i;
  }

  cout << "\nEl factorial del número es: " << factorial << endl;
  
  system("pause");
  return 0;
}