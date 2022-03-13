/* 6. Escriba un programa que lea las 3 notas de un
alumno y calcule la nota final media de dicho alumno */

#include<iostream>
using namespace std;

int main() {

  float nota1, nota2, nota3;
  float promedio;

  cout << "Ingrese la primera nota: ";
  cin >> nota1;

  cout << "Ingrese la segunda nota: ";
  cin >> nota2;

  cout << "Ingrese la tercera nota: ";
  cin >> nota3;

  promedio = (nota1 + nota2 + nota3) / 3;

  cout.precision(2);

  cout << "\nEl promedio de las 3 notas es: " << promedio << endl;

  return 0;
}