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

Fecha::Fecha(int day, int month, int year) : day_(day), month_(month), year_(year) {
  update_days_in_month();
}
bool Fecha::is_leap_year(int year) const {
  return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
bool Fecha::is_valid_date() const {
  if (year_ < 1800 || year_ > 9999 || month_ < 1 || month_ > 12 || day_ < 1) {
    return false;
  }
  if (day_ > days_in_month_[month_]) {
    return false;
  }
  return true;
}
void Fecha::update_days_in_month() {
  days_in_month_[1] = 31;
  days_in_month_[2] = 28;
  days_in_month_[3] = 31;
  days_in_month_[4] = 30;
  days_in_month_[5] = 31;
  days_in_month_[6] = 30;
  days_in_month_[7] = 31;
  days_in_month_[8] = 31;
  days_in_month_[9] = 30;
  days_in_month_[10] = 31;
  days_in_month_[11] = 30;
  days_in_month_[12] = 31;
  if (is_leap_year(year_)) {
    days_in_month_[2] = 29;
  }
}
void Fecha::print_date() const {
  std::cout << day_ << '/' << month_ << '/' << year_ << std::endl;
}
