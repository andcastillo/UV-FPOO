/*
  Archivo: Figura.h
  Autor: Oswaldo Solarte
  Fecha creación: 2023-04-24
  Fecha última modificación: 2023-04-21
  Versión: 0.1
  Licencia: GPL
*/


/**
  CLASE: Figura
  INTENCIÓN: es una clase abstracta que proporciona como funcionalidad básica de una figura,
  las coordenadas de la esquina superior izquierda, el ancho y alto de una figura geométrica
   (x, y, ancho, alto)
  RELACIONES: es una clase abstracta. Hay que derivar de ella e implementar algunas funciones.
*/

#ifndef FIGURA_H
#define FIGURA_H

#include <cmath>
using namespace std;

class Figura
{
  protected:
  double x;
  double y;
  double ancho;
  double alto;
  const double PI;

  public:
  /**
   * Construye una Figura con unas coordenadas x,y, un ancho y un alto
   * @param x
   * @param y
   * @param ancho
   * @param alto
   */
  Figura(double x, double y, double ancho, double alto);
  /**
   * No hace nada en especial
   */
  virtual ~Figura();
  /**
   * @return el ancho
   */
  virtual double cualEsElAncho();
  /**
   * @return el alto
   */
  virtual double cualEsElAlto();
  /**
   * Agranda la figura multiplicando el ancho y el alto por un factor
   * @param factor
   */
  virtual void agrandar(double factor);
  /**
   * Es una función virtual pura
   * @return el area
   */
  virtual double area() = 0;
  /**
   * Es una función virtual pura
   * @return el perimetro
   */
  virtual double perimetro() = 0;
};


#else
class Figura; // Declaración adelantada (guarda de Ángel GB)
#endif
