// Programa que utiliza operaciones con arreglos
#include <iostream>
using namespace std;

// Se declara la funcion sumar
void imprimirArreglos(int[], string[]);

// Funcion main
int main() { 
  double notas[5] = {4.5,  3.0, 4.0, 4.3, 3.7};
  string nombres [5] = {"Juan", "Luis", "Diego", "Ana", "Sophia"};
    
  int tamanoArreglo= end(notas)- begin(notas);
  double promedio =0.0;
  double suma=0.0;
  
  for (int i=0; i<tamanoArreglo; i++) {
    suma = suma + notas[i];
  }  
  promedio = suma/tamanoArreglo;
  cout <<"\n Promedio: " << promedio;
 
  return (0);
  
}//end main


 

  
  
