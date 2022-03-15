/* 15. Realice un programa que solicite al usuario que piense
en un numero entero entre el 1 y el 100. El programa debe
generar un número aleatorio en ese mismo rango[1-100],
e indicarle al usuario si el número que digito es menor
o mayor al numero aleatorio, así hasta que lo adiviné y 
por último mostrarle el número de intentos que le llevo.

variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior);
*/
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main() {

  int numero, dato, contador = 0;

  srand(time(NULL));
  dato = 1 + rand() % (100);

  do{
    cout << "Ingrese un número: ";
    cin >> numero;

    if(numero > dato) {
      cout << "Ingrese un número memor\n";
    } else if ( numero < dato ) {
      cout << "\nIngrese un número mayor\n";
    }
    contador++;

  }while(numero != dato);
  
  cout << "\nFELICIDADES ADINIVASTE EL NÚMERO\n";
  cout << "Número de intentos: " << contador << endl;

  system("pause");
  return 0;
}