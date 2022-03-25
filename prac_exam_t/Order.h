#ifndef ORDER_H
#define ORDER_H
#include <string>

class Order
{
public:
 Order();
 Order(std::string name, int date, int price);
 virtual int get_price(); //returns the price of the order
 std::string get_name();  //gets the name of the person who made the order
 int get_date();    //returns the date of the order.
protected:
 std::string o_name;
 int o_date;
 int o_price;
};
#endif