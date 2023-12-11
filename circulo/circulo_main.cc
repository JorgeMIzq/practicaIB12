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

int main(int argc, char* argv[]) {
  if (argc != 5) {
    std::cout << "Uso: " << argv[0] << " <centroX> <centroY> <radio> <color>" << std::endl;
    return 1;
    }
  double centroX = std::stod(argv[1]);
  double centroY = std::stod(argv[2]);
  double radio = std::stod(argv[3]);
  Color color;
  if (std::string(argv[4]) == "ROJO") {
    color = ROJO;
  } else if (std::string(argv[4]) == "VERDE") {
      color = VERDE;
    } else if (std::string(argv[4]) == "AZUL") {
        color = AZUL;
      } else {
          std::cout << "Color no válido. Use ROJO, VERDE o AZUL." << std::endl;
          return 1;
        } 
  Circulo miCirculo(centroX, centroY, radio, ROJO);
  miCirculo.Print();
  std::cout << "Area: " << miCirculo.Area() << std::endl;
  std::cout << "Perimetro: " << miCirculo.Perimetro() << std::endl;
  return 0;
}
