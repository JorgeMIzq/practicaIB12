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

int main(int argc, char* argv[]) {
  if (argc != 5) {
    std::cout << "Uso: " << argv[0] << " <x1> <y1> <x2> <y2>" << std::endl;
    return 1;
  }
  double x1 = std::stod(argv[1]);
  double y1 = std::stod(argv[2]);
  double x2 = std::stod(argv[3]);
  double y2 = std::stod(argv[4]);
  Point2D point1(x1, y1);
  Point2D point2(x2, y2);
  std::cout << "Point 1: ";
  point1.Show();
  std::cout << "Point 2: ";
  point2.Show(); 
  std::cout << "Distance between points: " << point1.Distance(point2) << std::endl;
  std::cout << "Middle point: ";
  point1.Middle(point2).Show();
  std::cout << std::endl;
 return 0;
}
