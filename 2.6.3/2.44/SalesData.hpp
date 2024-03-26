#ifndef SALES_DATA_HPP
#define SALES_DATA_HPP
#include <iostream>
#include <string>

struct SalesData
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
#endif