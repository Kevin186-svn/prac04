#include "RealOrder.h"

RealOrder::RealOrder(std::string name, int date, int price)
{
 o_name = name;
 o_price = price;
 o_date = date;
}

int RealOrder::get_price()
{
 int num = c_date-o_date;  //the beyond days
 if (num <= 20)
 {
  return o_price;
 }else
 {
  return o_price-num+20;
 }
}

void RealOrder::set_current_date(int date)
{
 c_date = date;
}