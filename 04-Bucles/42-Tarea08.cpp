/* 8. Escriba un programa que calcule el
valor de: 1+3+5+...+2n-1
*/
#include<iostream>
#include<conio.h>
using namespace std;

int main() {

  int elementos;
  int sumaTotal = 0;

  cout << "Ingrese el número de elementos a sumar: ";
  cin >> elementos;

  for(int i = 1; i <= 2*elementos-1; i += 2) {
    sumaTotal += i;
  }

  cout << "\nLa suma es: " << sumaTotal << endl;

  getch();
  return 0;
}