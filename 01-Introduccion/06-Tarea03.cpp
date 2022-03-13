#include<iostream>
using namespace std;

/* 3. Realice un programa que lea de la entrada
estándar los siguientes datos de una persona: 
  - Edad: dato de tipo entero.
  - Sexo: dato de tipo caracter.
  - Altura en metros: dato de tipo real.
Tras ller los datos, el programa debe mostrarlos
en la salida estándar.
*/

int main() {

  int edad;
  char sexo[10];
  float altura;

  cout << "Ingrese su edad: ";
  cin >> edad;

  cout << "Ingrese su sexo: ";
  cin >> sexo;

  cout << "Ingrese su altura en metros: ";
  cin >> altura;

  cout << "\nSu edad es: " << edad << endl;
  cout << "Su sexo es: " << sexo << endl;
  cout << "Su altura es: " << altura << endl;

  return 0;
}