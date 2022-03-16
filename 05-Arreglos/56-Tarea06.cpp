/* 6. Escribe un programa que defina un vector de
números y calcule si existe algún número en el vector
cuyo valor equivale a la suma del resto de números del vector.
*/
#include<iostream>
using namespace std;

int main() {

  int numeros[5] = {1,4,3,10,2};
  int suma = 0, mayor = 0;

  for (int i = 0; i < 5; i++) {
    suma += numeros[i];

    if(numeros[i] > mayor) {
      mayor = numeros[i];
    }
  }

  if(mayor == suma - mayor) {
    cout << "El número " << mayor << " equivale a la suma de los demas";
  } else {
    cout << "No existe ningún número que sea igual a la suma de los demas";
  }
  
  return 0;
}