/* 4. Hacer una matriz preguntando al usuario el número
de filas y columnas, llenar números aleatorios, copiar
el contenido a otra matriz y por último mostrarla en
pantalla.
*/
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main() {

  int numeros[100][100];
  int numeros2[100][100];
  int dato, nfilas, ncol;

  cout << "Ingrese el número de filas: ";
  cin >> nfilas;

  cout << "Ingrese el número de columnas: ";
  cin >> ncol;

  srand(time(NULL));

  for (int i = 0; i < nfilas; i++) {
    for (int j = 0; j < ncol; j++) {
      dato = 1 + rand() % (100);
      numeros[i][j] = dato;
    }
  }

  for (int i = 0; i < nfilas; i++) {
    for (int j = 0; j < ncol; j++) {
      numeros2[i][j] = numeros[i][j];
    }
  }

  for (int i = 0; i < nfilas; i++) {
    for (int j = 0; j < ncol; j++) {
      cout << numeros2[i][j] << " ";
    }

    cout << "\n";
    
  }

  return 0;
}