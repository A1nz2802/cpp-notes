/* 6. Escriba un programa que calcule x^y, donde
tanto x como y son enteros positivos, sin utilizar la función pow */
#include<iostream>
#include<conio.h>
using namespace std;

int main() {

  int x, y;
  int elevacion = 1;

  cout << "Ingrese el valor de x: ";
  cin >> x;
  cout << "Ingrese el valor de y: ";
  cin >> y;

  for (int i = 1; i <= y; i++ ) {
    elevacion *= x;
  }

  cout << "\nEl resultado de la elevación es: " << elevacion << endl;

  getch();
  return 0;
}