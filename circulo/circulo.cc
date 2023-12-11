/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Jorge Machado Izquierdo 0101638904@ull.edu.es
  * @date 10 de diciembre de 2023  
  * @brief un programa que que permita representar círculos utilizando como 
           atributos el centro, el radio y el color del círculo.
  *
  */

#include<cmath>
#include<iostream>
#include"circulo.h"

Circulo::Circulo(double x, double y, double r, Color c)
  : centroX(x), centroY(y), radio(r), color(c) {}
double Circulo::Area() const {
  return M_PI * pow(radio, 2);
}
double Circulo::Perimetro() const {
  return 2 * M_PI * radio;
}
void Circulo::Print() const {
  std::cout << "Circulo: Centro(" << centroX << ", " << centroY << "), Radio: " << radio
            << ", Color: " << color << std::endl;
}
