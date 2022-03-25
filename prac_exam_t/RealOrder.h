#ifndef REALORDER_H
#define REALORDER_H
#include "Order.h"

class RealOrder: public Order
{
public:
 RealOrder(std::string name, int date, int price);
 int get_price();
 void set_current_date(int date); //get the current date
protected:
 int c_date;
};
#endif