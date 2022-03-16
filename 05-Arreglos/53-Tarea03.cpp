/* 3. Escribe un programa que lea de la entrada estándar
un vector de números y muestre en la salida estándar los
números del vector con sus índices asociados.
*/
#include<iostream>
using namespace std;

int main() {

  int numeros[100];
  int n;

  cout << "Ingres el número de elementos que va a tener el arreglo: ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    cout << "Ingrese un número: ";
    cin >> numeros[i]; // Guardar todos los elementos del vector
  }

  for (int i = 0; i < n; i++) {
    cout << i << " => " << numeros[i];
  }
  
  return 0;
}