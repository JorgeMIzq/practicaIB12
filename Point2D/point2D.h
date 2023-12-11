/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Jorge Machado Izquierdo 0101638904@ull.edu.es
  * @date 10 de diciembre de 2023 
  * @brief un programa que representa puntos en el espacio bidimensional a través de sus coordenadas.
  *
  */

#include<iostream>
#include<cmath>

class Point2D {
 public:
  Point2D(double x, double y);
  void Show() const;
  void Move(double delta_x, double delta_y);
  double Distance(const Point2D& other) const;
  Point2D Middle(const Point2D& other) const;
 private:
  double x_;
  double y_;
};
