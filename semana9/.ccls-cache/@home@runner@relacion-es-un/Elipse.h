/*
  Archivo: Elipse.h
  Autor: Oswaldo Solarte
  Fecha creación: 2023-04-24
  Fecha última modificación: 2023-04-21
  Versión: 0.1
  Licencia: GPL
*/


/**
  CLASE: Elipse
  INTENCIÓN: es capaz de calcular el área y el perímetro (aprox) de una Elipse
  RELACIONES: es una Figura
*/

#ifndef ELIPSE_H
#define ELIPSE_H

#include"Figura.h"


class Elipse : public Figura
{
  protected:

  public:
  /**
   * Construye una Elipse
   * @param x, y, ancho y alto
   * @return this
   */
  Elipse(double x, double y, double ancho, double alto);
  /**
   * No hace nada en especial
   */
  virtual ~Elipse();
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
class Elipse; // Declaración adelantada (guarda de Ángel GB)
#endif
