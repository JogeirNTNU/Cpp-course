#include <string>

class Commodity {
public:
  Commodity(const std::string name, int id, double price);
  const std::string get_name() const;
  int get_id() const;
  double get_price() const;
  double get_price(double quantity) const;
  double get_price_with_sales_tax(double quantity) const;
  void set_price(double price);

private:
  std::string name_;
  int id_;
  double price_;
};
