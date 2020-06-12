#include "Sales_Data.h"

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

double Sales_data::avg_price()
{
	if (units_sold)
		return revenue/units_sold;
	else
		return 0.0;
}
