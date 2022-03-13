#include<iostream>
using namespace std;

/* 2. Escribe un programa que lea de la entrada estándar
 el precio de un producto y muestre en la salida estándar
el precio del producto al aplicarle el IVA */

int main() {

  float precio;
  float iva = 0.18;
  float precioFinal;

  cout << "Ingre el precio del producto: ";
  cin >> precio;

  precioFinal = precio + ( precio * iva );

  cout << "\nEl precio final es: " << precioFinal << endl;

  return 0;
}