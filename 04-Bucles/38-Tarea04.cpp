/* 4. Escriba un programa que tome cada 4 horas la temperatura
exterior, leyendola durante un periodo de 24 horas.
Es decir, debe leer 6 temperaturas. Calcule la temperatura media del día 
la temperatura más alta y más baja */
#include<iostream>
#include<conio.h>
using namespace std;

int main() {

  float temperatura;
  float mayor = 0;
  float menor = 9999999;
  float sumaTotal = 0;
  float promedio = 0;

  for (int i = 0; i < 24; i++) {
    cout << "Ingrese la temperatura de la hora " << i << ": ";
    cin >> temperatura;
  
    sumaTotal += temperatura;

    if( temperatura > mayor ) {
      mayor = temperatura;
    } else if( temperatura < menor ) {
      menor = temperatura;
    }

  }

  promedio = sumaTotal/6;

  cout << "\nTemperatura promedio: " << promedio <<endl;
  cout << "\nTemperatura más alta: " << mayor <<endl;
  cout << "\nTemperatura más baja: " << menor <<endl;

  getch();
  return 0;
}