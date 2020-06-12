#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>

class Sales_data
{
public:
	std::string isbn() const {return bookNo};
	Sales_data& combine(const Sales_data&);
	double avg_price() const;

private:
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

Sales_data add(const Sales_data&, cosnt Sales_data&);
std::ostream &print(std::ostream&, const Sanles_data&);
std::istream &read(std::istream&, Sales_data&);

#endif
