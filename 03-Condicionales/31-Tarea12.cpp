/* 12. Hacer un menú que considere las siguientes opciones:
  - Caso 1: Cubo de un número
  - Case 2: Número par o impar
  - Caso 3: Salir
*/

#include<iostream>
#include<math.h>
using namespace std;

int main() {

  int opcion, num;
  float numero, cubo;

  cout << "\t.:MENU:." << endl;
  cout << "1. Cubo de un número" << endl;
  cout << "2. Número par o impar" << endl;
  cout << "3. Salir" << endl;
  cout << "Opción: ";

  cin >> opcion;

  switch( opcion ) {
    case 1:
      cout << "\nIngrese un número: ";
      cin >> numero;
      cubo = pow( numero, 3);
      cout << "\nEl cubo del número es: " << cubo << endl;
      break;
    case 2:
      cout << "\nIngrese un número: ";
      cin >> num;
      if ( num % 2 == 0 ) {
        cout << "\nEl número es par" << endl;
      } else {
        cout << "\nEl numero es impar" << endl;
      }
      break;
    case 3:
      break;
  }
  
  return 0;
}