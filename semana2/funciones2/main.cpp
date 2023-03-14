// Programa que utiliza funciones para suma de enteros
#include <iostream>
using namespace std;

// Se declara la funcion sumar
int sumar(int, int);

// Funcion main
int main() {
  int entero1 = 0, entero2 = 0;

  cout << "Suma de enteros" << endl;
  cout << "Digite el primer número entero: ";
  cin >> entero1;

  cout << "Digite el segundo número entero: ";
  cin >> entero2;

  int suma = sumar(entero1, entero2);

  cout << "Suma: " << suma << endl;
  return (0);
}

/*
Aqui se implementa la
función sumar
*/

int sumar(int x, int y) {
  int resultado = x + y;
  return resultado;
}
