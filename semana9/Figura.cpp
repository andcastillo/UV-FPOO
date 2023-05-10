/*
  Archivo: Figura.cpp
  Autor: Oswaldo Solarte
  Fecha creación: 2023-04-24
  Fecha última modificación: 2023-04-21
  Versión: 0.1
  Licencia: GPL
*/

#include "Figura.h"

Figura::Figura(double x, double y, double ancho, double alto)
  : x(x), y(y), ancho(ancho), alto(alto), PI(3.1416)
{
}


Figura::~Figura()
{
  // No hace nada
}


double Figura::cualEsElAncho()
{
  return ancho;
}


double Figura::cualEsElAlto()
{
  return alto;
}


void Figura::agrandar(double factor)
{
  alto = alto * factor;
  ancho = ancho * factor;
}
