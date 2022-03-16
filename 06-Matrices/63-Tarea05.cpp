/* 5. Realice un programa que lea una matriz de 3x3 y cree
su matriz traspuesta. La matriz traspuesta es aquella en la que la
columnas i era la fila i de la matriz original.
*/
#include<iostream>
using namespace std;

int main() {

  int numeros[3][3];
  
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "Ingrese un número [" << i << "][" << j << "]: ";
      cin >> numeros[i][j];
    }
  }
  
  cout << "Matriz Original\n";
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << numeros[i][j];
    }

    cout << "\n";
    
  }

  cout << "\nMatriz Transpuesta\n";
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << numeros[j][i] << " ";
    }

    cout << "\n";

  }
  
  return 0;
}