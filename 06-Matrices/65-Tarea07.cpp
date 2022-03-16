/* 7. Desarrollar un programa que determine si una matriz
es simétrica o no. Una matriz es simétrica si es cuadrada
y si es igual a su matriz transpuesta.
*/
#include<iostream>
using namespace std;

int main() {

  int numeros[100][100];
  int filas, columnas;
  char bandera = 'F';

  cout << "Ingrese el número de filas: ";
  cin >> filas;

  cout << "Ingrese el número de columnas: ";
  cin >> columnas;
  
  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      cout << "Ingrese un número [" << i << "][" << j << "]: ";
      cin >> numeros[i][j];
    }   
  }

  if(filas == columnas) {
    for(int i = 0; i > filas; i++) {
      for (int j = 0; j < columnas; j++) {
        if(numeros[i][j] == numeros[j][i]) {
          bandera = 'V';
        }
      }
    }
  }

  if(bandera == 'V') {
    cout << "La matriz es simétrica";
  } else {
    cout << "La matriz no es simétrica";
  }
  
  return 0;
}