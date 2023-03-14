// Programa que utiliza funciones para suma de enteros
#include <iostream>
using namespace std;

// Se declara la funcion sumar
void imprimirResultado(int, int);

// Funcion main
int main() {
  int entero1 = 0, entero2 = 0;

  cout << "Suma de enteros" << endl;
  cout << "Digite el primer número entero: ";
  cin >> entero1;

  cout << "Digite el segundo número entero: ";
  cin >> entero2;

  imprimirResultado(entero1, entero2);

  return (0);
}//end main

/*
Funcion imprimirResultados:
Recibe dos numeros enteros
e imprimer el resultado de las
4 operaciones
*/

void imprimirResultado(int x, int y) {
  cout << "\n Resultados de las 4 operaciones básicas" <<endl;
  cout << "\n Numeros enteros de entrada:" << x << ", "<< y <<endl;

  int suma=  x + y;
  cout << "Suma: " << suma << endl;
  
  int resta = x - y;
  cout << "Resta: " << resta << endl;
  
  int multiplicacion = x * y;
  cout << "Multiplicacion: " << resta << endl;
  

  if (y!=0){
    double division = x/y;
    cout << "División: " << division << endl;
  }
  else{
    cout << "No es posible dividir por 0 " << endl;
  }
  
  
}// end function
