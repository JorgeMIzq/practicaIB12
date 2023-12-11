 /**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Jorge Machado Izquierdo 0101638904@ull.edu.es
  * @date 11 de diciembre de 2023  
  * @brief un programa que permita representar y gestionar fechas.
  *
  */

#include "fecha.h"
#include <iostream>

int main(int argc, char* argv[]) {
  if (argc != 4) {
    std::cerr << "Uso: " << argv[0] << " <dia> <mes> <año>" << std::endl;
    return 1;
  }
  int day = std::stoi(argv[1]);
  int month = std::stoi(argv[2]);
  int year = std::stoi(argv[3]);
  Fecha fecha(day, month, year);
  if (fecha.is_valid_date()) {
    fecha.print_date();
  } else {
    std::cerr << "Fecha no válida." << std::endl;
    return 1;
  }
  return 0;
}
