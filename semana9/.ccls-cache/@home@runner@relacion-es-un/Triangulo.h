/*
  Archivo: Triangulo.h
  Autor: Oswaldo Solarte
  Fecha creación: 2023-04-24
  Fecha última modificación: 2023-04-21
  Versión: 0.1
  Licencia: GPL
*/


/**
  CLASE: Triangulo
  INTENCIÓN: es capaz de calcular el área y el perímetro de un Triangulo isósceles
  RELACIONES: es una Figura
*/

#ifndef TRIANGULO_H
#define TRIANGULO_H

#include"Figura.h"


class Triangulo : public Figura
{
  protected:

  public:
  /**
   * Construye un Triangulo
   * @param x, y, ancho y alto
   * @return this
   */
  Triangulo(double x, double y, double ancho, double alto);
  /**
   * No hace nada en especial
   */
  virtual ~Triangulo();
  /**
   * @return el area
   */
  virtual double area();
  /**
   * @return el perimetro
   */
  virtual double perimetro();
};


#else
class Triangulo; // Declaración adelantada (guarda de Ángel GB)
#endif
