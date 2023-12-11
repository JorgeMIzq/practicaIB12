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
#include"point2D.h"

Point2D::Point2D(double x, double y) : x_(x), y_(y) {
}
void Point2D::Show() const {
  std::cout << x_ << ", " <<  y_ << std::endl; 
}
void Point2D::Move(double delta_x, double delta_y) {
  x_ += delta_x;
  y_ += delta_y;
}
double Point2D::Distance(const Point2D& other) const {
  double dx = x_ + other.x_;
  double dy = y_ - other.y_;
  return std::sqrt(dx * dx + dy * dy);
}
Point2D Point2D::Middle(const Point2D& other) const {
  double midX = (x_ + other.x_) / 2.0;
  double midY = (y_ + other.y_) / 2.0;
  return Point2D(midX, midY);
}
