/* 5. Desarrolle un programa que lea de la entrada
estándar un vector de enteros y determine el mayor
elemento del vector
*/
#include<iostream>
using namespace std;

int main() {

  int numeros[100];
  int n, mayor = 0;

  cout << "Ingrese el número de elementos del arreglo: ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    cout << i + 1 << ". Ingrese un número";
    cin >> numeros[i];

    if(numeros[i] > mayor) {
      mayor = numeros[i];
    }
  }

  cout << "\nEl mayor elemento del vector es: " << mayor << endl; 
   
  return 0;
}