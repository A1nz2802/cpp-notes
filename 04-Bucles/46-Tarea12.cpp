/* 12. Escriba un programa que calcule el valor de:
  1-2+3-4+5-6...n
*/
#include<iostream>
#include<conio.h>
using namespace std;

int main() {

  int elementos;
  int par, sumaPares = 0, sumaImpares = 0;
  int sumaTotal = 0;

  cout << "Ingrese el número de elementos a sumar: ";
  cin >> elementos;

  for (int i = 1; i <= elementos; i++) {
    if( i % 2 == 0 ) {
      par = i * -1;
      sumaPares += par;
    } else {
      sumaImpares += i;
    }
  }

  sumaTotal = sumaPares + sumaImpares;

  cout << "\nEl resultado de la suma es: " << sumaTotal << endl;
  
  getch();
  return 0;
}