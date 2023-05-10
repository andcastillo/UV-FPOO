/*
  Archivo: Rectangulo.h
  Autor: Oswaldo Solarte
  Fecha creación: 2023-04-24
  Fecha última modificación: 2023-04-21
  Versión: 0.1
  Licencia: GPL
*/


/**
  CLASE: Rectangulo
  INTENCIÓN: es capaz de calcular el área y el perímetro de un Rectángulo
  RELACIONES: es una Figura
*/

#ifndef RECTANGULO_H
#define RECTANGULO_H

#include"Figura.h"


class Rectangulo : public Figura
{
  protected:

  public:
  /**
   * Construye Rectangulo
   * @param x, y, ancho y alto
   * @return this
   */
  Rectangulo(double x, double y, double ancho, double alto);
  /**
   * No hace nada en especial
   */
  virtual ~Rectangulo();
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
class Rectangulo; // Declaración adelantada (guarda de Ángel GB)
#endif
