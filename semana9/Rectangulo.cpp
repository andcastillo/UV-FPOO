/*
  Archivo: Rectangulo.cpp
  Autor: Oswaldo Solarte
  Fecha creación: 2023-04-24
  Fecha última modificación: 2023-04-21
  Versión: 0.1
  Licencia: GPL
*/

#include "Rectangulo.h"

Rectangulo::Rectangulo(double x, double y, double ancho, double alto) : Figura(x, y, ancho, alto)
{
}


Rectangulo::~Rectangulo()
{
  // No hace nada
}


double Rectangulo::area()
{
  return ancho * alto;
}


double Rectangulo::perimetro()
{
  return 2 * (ancho + alto);
}
