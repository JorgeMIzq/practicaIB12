/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Jorge Machado Izquierdo 0101638904@ull.edu.es
  * @date 11 de diciembre de 2023 
  * @brief un programa que that tells if the date defined by a day d, month m and year y is valid or not.
  *
  */

#include <iostream>

bool is_leap_year(int year) {
  return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
bool is_valid_date(int day, int month, int year) {
  if (year < 1800 || year > 9999 || month < 1 || month > 12 || day < 1) {
    return false;
  }
  int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if (is_leap_year(year)) {
    days_in_month[2] = 29;
  }
  if (day > days_in_month[month]) {
    return false;
  }
  return true;
}
