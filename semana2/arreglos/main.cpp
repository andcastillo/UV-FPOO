// Programa que utiliza arreglos de enteros
#include <iostream>
using namespace std;

// Se declara la funcion sumar
void imprimirArreglos(int[], string[]);

// Funcion main
int main() { 
  double notas[5] = {4.5,  3.0, 4.0, 4.3, 3.7};
  string nombres [5] = {"Juan", "Luis", "Diego", "Ana", "Sophia"};

  cout<< "Primer nombre: " << nombres[0]<< endl;
  cout<< "Primera nota: " << notas[0]<< endl;

  
  // Ahora vamos a cambiar el valor de la nota de Sophia (Ultima posición del arreglo)
  notas[4]=4.0;
  cout<< "Ultima nota: " << notas[4]<< endl;

 
  // Ahora vamos a recorrer el arreglo de nombres y notas para imprimir sus valores  
  cout <<"\n=========== Valores en los arreglos ===========\n";
  int tamanoArreglo= end(notas)- begin(notas);
  
  for (int i=0; i<tamanoArreglo; i++)
  {
    cout <<nombres[i]<<" : " << notas[i]<<endl;
  }
  
  return (0);
}//end main


 

  
  
