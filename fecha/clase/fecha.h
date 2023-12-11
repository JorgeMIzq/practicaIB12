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

#include<iostream>

class Fecha {
 public:
  Fecha(int day, int month, int year);
  bool is_leap_year(int year) const;
  bool is_valid_date() const;
  void print_date() const;
 private:
  int day_;
  int month_;
  int year_;
  int days_in_month_[13];
  void update_days_in_month();
};
