/*
  Archivo: main.cpp
  Autor: Oswaldo Solarte
  Fecha creación: 2023-04-24
  Fecha última modificación: 2023-04-21
  Versión: 0.1
  Licencia: GPL
*/

/**
  Utilidad para la asignatura: uso de la herencia
  
  HISTORIA: Varias figuras geométricas (Elipse, Rectangulo y Triangulo) que heredan de Figura, donde está la funcionalidad común a todas.
*/

#include"Elipse.h"
#include"Rectangulo.h"
#include"Triangulo.h"
#include <iostream>
using namespace std;

int main()
{
  Elipse elipse(0, 0, 3, 5);
  Rectangulo rectangulo(0, 0, 4, 7);
  Triangulo triangulo(0, 0, 8, 3);
  triangulo.agrandar(2);

  cout << "La elipse tiene un área de " << elipse.area() << " y un perímetro de " << elipse.perimetro() << endl;

  cout << "============================================================" << endl;
  
  cout << "Le rectángulo tiene un área de " << rectangulo.area() << " y un perímetro de " << rectangulo.perimetro() << endl;

  cout << "============================================================" << endl;
  
  cout << "El triángulo tiene un área de " << triangulo.area() << " y un perímetro de " << triangulo.perimetro() << endl;

  cout << "============================================================" << endl;
  
  triangulo.agrandar(2);

  cout << "El triángulo tiene ahora un área de " << triangulo.area() << " y un perímetro de " << triangulo.perimetro() << endl;


  return 0;
}
