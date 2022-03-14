/* 8. Escribe un programa que lea de la entrada estándar tres números.
Después debe leer un cuarto número e indicar si el número
coincide con alguno de los introducidos con anterioridad */

#include<iostream>
using namespace std;

int main() {
  
  int n1, n2, n3, n4;

  cout << "Ingre 3 números: ";
  cin >> n1 >> n2 >> n3;

  cout << "\nIngrese un cuarto número";
  cin >> n4;

  if ( (n1 == n4) || (n2 == n4) || (n3 == n4)) {
    cout << "\nEl cuarto número coincide con almenos 1 de los 3 anteriores" << endl;
  } else {
    cout << "\nEl cuarto número no coincide con los anteriores" << endl;
  }

  return 0;
}