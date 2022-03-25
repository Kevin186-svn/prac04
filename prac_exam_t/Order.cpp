#include "Order.h"

Order::Order(){}

Order::Order(std::string name, int date, int price)
{
 o_name = name;
 o_date = date;
 o_price = price;
}

int Order::get_price()
{
 return o_price;
}

std::string Order::get_name()
{
 return o_name;
}

int Order::get_date()
{
 return o_date;
}