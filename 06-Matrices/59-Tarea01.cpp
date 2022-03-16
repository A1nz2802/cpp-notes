/* 1. Hacer un programa para rellenar una matriz
pidiendo al usuario el número de filas y columnas,
Posteriormente mostrar la matriz en pantalla
*/
#include<iostream>
using namespace std;

int main() {

  int numeros[100][100];
  int filas, columnas;

  cout << "Ingrese el número de filas: ";
  cin >> filas;

  cout << "Ingrese el número de columnas: ";
  cin >> columnas;

  for(int i = 0; i < filas; i++) {
    for(int j = 0; j < columnas; j++) {
      cout << "Ingrese un número [" << i << "][" << j << "] ";
      cin >> numeros[i][j];
    }
    
  }

  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      cout << numeros[i][j];
    }
    cout << "\n";
  }
  
  
  return 0;
}