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

enum Color {
  ROJO,
  VERDE,
  AZUL
};
class Circulo {
 private:
  double centroX;
  double centroY;
  double radio;
  Color color;
 public:
  Circulo(double x, double y, double r, Color c);
  double Area() const;
  double Perimetro() const;
  void Print() const;
};
