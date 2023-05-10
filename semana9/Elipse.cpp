/*
  Archivo: Elipse.cpp
  Autor: Oswaldo Solarte
  Fecha creación: 2023-04-24
  Fecha última modificación: 2023-04-21
  Versión: 0.1
  Licencia: GPL
*/

#include "Elipse.h"

Elipse::Elipse(double x, double y, double ancho, double alto) : Figura(x, y, ancho, alto)
{
}


Elipse::~Elipse()
{
  // No hace nada
}


double Elipse::area()
{
  return PI * (ancho / 2) * (alto / 2);  // Fórmula de calcular el area de un elipse.
}


double Elipse::perimetro()
{
  return 2 * PI * sqrt(((ancho/2)*(ancho/2) + (alto/2)*(alto/2))/2);  // Fórmula calcular perimetro de un elipse.  
}



