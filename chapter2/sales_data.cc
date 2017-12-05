#include <iostream>
#include <string>
#include "Sales_data.h"
/*
struct Sales_data{
	std::string bookNo;
	unsigned 	units_sold;
	double		revenue;
};
*/
int main()
{
	sales_data data1, data2;


	double price;

	std::cin >> data1.bookNo  >> data1.units_sold >> price;
	data1.revenue = price * data1.units_sold;
	
	std::cin >> data2.bookNo  >> data2.units_sold >> price;
	data2.revenue = price * data2.units_sold;
	
	
	if(data1.bookNo == data2.bookNo){
		
		unsigned totalCnt = data1.units_sold + data2.units_sold;
		double   totalRev = data1.revenue + data2.revenue;
		
		std::cout << data1.bookNo << " " << totalCnt
			  << " " << totalRev << " ";
		if(totalCnt != 0)
			std::cout << totalRev / totalCnt << std::endl;
		else
			std::cout << "no sales" << std::endl;
	}
	else{
		std::cerr << "data must refer to the same ISBN" << std::endl;
		return -1;
	}
	return 0;
}
