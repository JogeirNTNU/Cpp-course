#include "commodity.hpp"
#include <string>

const double moms = 1.335;

Commodity::Commodity(const std::string name, int id, double price)
    : name_(name), id_(id), price_(price) {}
const std::string Commodity::get_name() const { return name_; }
int Commodity::get_id() const { return id_; }
double Commodity::get_price() const { return this->price_; }
double Commodity::get_price(double quantity) const { return price_ * quantity; }
double Commodity::get_price_with_sales_tax(double quantity) const {
  return price_ * quantity * moms;
};
void Commodity::set_price(double newPrice) { price_ = newPrice; }
