/* 13. Hacer un programa que realice la serie Fibonacci
  Fibonacci -> 1,1,2,3,5,8,13,..,n
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {

  int n;
  int x = 0, y = 1;
  int z = 1;
  
  cout << "Ingrese el número de elementos: ";
  cin >> n;

  cout << "1 ";

  for (int i = 0; i < n; i++) {
    z = x + y;
    cout << z << " ";
    x = y;
    y = z;
  }

  cout << "\n";
  system("pause");
  
  return 0;
}