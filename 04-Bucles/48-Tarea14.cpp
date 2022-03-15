/* 14. En una clase de 5 alumnos se han realizado 3 exámenes y
se requiere determinar el número de: 
  A) Alumnos que aprobaron todos los exámenes.
  B) Alumnos que aprobaron al menos un examen.
  C) Alumnos que aprobaron únicamente el último examen.

Realice un programa que permita la lectura de los datos y el cálculo
de las estadísticas.
*/
#include<iostream>
#include<conio.h>
using namespace std;

int main() {

  float ex1, ex2, ex3;
  int aprobadosTodos = 0;
  int aprobadosUno = 0;
  int aprobadosUltimo = 0;

  for (int i = 0; i <= 5; i++) {
    cout << i << ". Ingrese la nota del primer examen: ";
    cin >> ex1;

    cout << i << ". Ingrese la nota del segundo examen: ";
    cin >> ex2;

    cout << i << ". Ingrese la nota del tercer examen: ";
    cin >> ex3;

    cout << "\n";

    if( (ex1 > 10.5) && (ex2 > 10.5) && (ex3 > 10.5) ) {
      aprobadosTodos++;
    } else if ( (ex1 > 10.5) || (ex2 > 10.5) || (ex3 > 10.5) ) {
      aprobadosUno++;
    } else if ( (ex1 < 10.5) && (ex2 < 10.5) && (ex3 > 10.5) ) {
      aprobadosUltimo++;
    }
  }

  cout << "\nAlumnos que aprobaron todos los exámenes: " << aprobadosTodos << endl;
  cout << "Alumnos que aprobaron al menos un examen: " << aprobadosUno << endl;
  cout << "Alumnos que aprobaron únicamente el último examen: " << aprobadosUltimo << endl;
 
  getch();
  return 0;
}