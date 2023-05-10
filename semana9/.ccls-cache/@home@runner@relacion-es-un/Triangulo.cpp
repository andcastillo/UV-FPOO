/*
  Archivo: Triangulo.cpp
  Autor: Oswaldo Solarte
  Fecha creación: 2023-04-24
  Fecha última modificación: 2023-04-21
  Versión: 0.1
  Licencia: GPL
*/

#include "Triangulo.h"

Triangulo::Triangulo(double x, double y, double ancho, double alto) : Figura(x, y, ancho, alto)
{
}


Triangulo::~Triangulo()
{
  // No hay que hacer nada
}


double Triangulo::area()
{
  return ancho * alto / 2;
}


double Triangulo::perimetro()
{
  return ancho + 2 * sqrt((ancho/2)*(ancho/2) + alto*alto);
}
