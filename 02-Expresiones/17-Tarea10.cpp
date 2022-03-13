/* 10. Escriba un programa que calcule las soluciones de una
ecuación de segundo grado de la forma ax^2 + bx + c
*/

#include<iostream>
#include<math.h>
using namespace std;

int main() {
  
  float a,b,c;
  float resultado1 = 0;
  float resultado2 = 0;

  cout << "Ingrese el valor de a: ";
  cin >> a;

  cout << "Ingrese el valor de b: ";
  cin >> b;

  cout << "Ingrese el valor de c: ";
  cin >> c;

  resultado1 = (-b + (sqrt(pow(b,2) - (4 * a * c)))) / (2 * a);
  resultado2 = (-b - (sqrt(pow(b,2) - (4 * a * c)))) / (2 * a);

  cout << "\nEl resultado 1 es: " << resultado1 << endl;
  cout << "\nEl resultado 2 es: " << resultado2 << endl;

  return 0;
}

// Probar con a: 1, b: 3 y c: -4
// resultado1: 1, resultado2: -4