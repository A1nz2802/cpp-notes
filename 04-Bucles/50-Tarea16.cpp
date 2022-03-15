/* 16. Realice un programa que calcule la descomposición en factores
primos de un número entero.
 Ej: 20 = 2*2*5
*/
#include<iostream>
#include<conio.h>
using namespace std;

int main() {

  int numero;

  cout << "Ingrese un número: ";
  cin >> numero;

  for (int i = 2; numero > 1; i++) {
    while( numero % 1 == 0 ) {
      cout << i << " ";
      numero /= 1;
    }
  }
  
  getch();
  return 0;
}