/* 7. La calificación final de un estudiante es la media
ponderada de 3 notas:

 - Nota de prácticas que cuenta un 30% del total
 - Nota teórica que cuenta un 60%
 - Nota participación que cuenta el 10% restantee

Escriba un programa que lea la entrada estándar de las tres notas
de un alumno y escriba la salida estándar de su nota final.
*/

#include<iostream>
using namespace std;

int main() {

  float practica, teorica, participacion;
  float nota_final = 0;

  cout << "Digite la nota de práctica";
  cin >> practica;

  cout << "Digite la nota teórica";
  cin >> teorica;

  cout << "Digite la nota de participación";
  cin >> participacion;

  practica *= 0.3;
  teorica *= 0.6;
  participacion *= 0.1;

  nota_final = practica + teorica + participacion;

  cout << "\nLa nota final es: " << nota_final << endl;

  return 0;
}