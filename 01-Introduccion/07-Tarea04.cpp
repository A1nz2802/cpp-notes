#include<iostream>
using namespace std;

/* 4. Ejecute el programa del ejercicio anterior con entradas erróneas
y observe los resultados. Por ejemplo, introduzca un dato
de tipo carácter cuando se espera un dato de tipo entero.
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