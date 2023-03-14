// Programa que utiliza funciones para suma de enteros
#include <iostream>
#include <cstdlib>
#include<time.h>
using namespace std;

// Funcion main
int main() { 
  int matriz[3][3];   
  int filas = 3;
  int cols = 3;
  srand(time(0));
  
  // Insertar datos en la matriz  
  for (int i=0; i<filas; i++) {
    for (int j=0; j<cols; j++) {
       int numero = rand() % 100 + 1; 
       matriz[i][j]= numero;
    }
  }


  
  cout <<"Imprimir matriz" << endl;  
  for (int i=0; i<filas; i++) {
    for (int j=0; j<cols; j++) {      
     cout << matriz[i][j] << " ";
     if (j==2){
       cout <<"\n";
     }//if
    }//for
  }//for
 
  
 
  return (0);
  
}//end main


 

  
  
