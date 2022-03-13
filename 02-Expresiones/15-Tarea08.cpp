/* 8. Escriba un programa que lea de la entrada
estándar los datos catetos de un triángulo reactángulo y escriba
en la salida estándar su hipotenusa.
*/

#include<iostream>
#include<math.h>
using namespace std;

int main() {

  float cateto1, cateto2;
  float hipotenusa;

  cout << "Ingrese el cateto 1: ";
  cin >> cateto1;

  cout << "Ingrese el cateto 2: ";
  cin >> cateto2;

  hipotenusa = sqrt(pow( cateto1, 2 ) + pow( cateto2, 2 ));

  cout.precision(2);
  cout << "\nLa hipotenusa del triángulo es: " << hipotenusa << endl;

  return 0;
}