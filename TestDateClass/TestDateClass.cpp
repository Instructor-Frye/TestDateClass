#include <iostream>
#include "Date.h"

int main()
{
	Date today;
	Date deadline(2, 5, 2024);

	today.setDate(2, 7, 2024);

	if (today > deadline)
	{
		std::cout << "The deadline passed.\n";
	}
	else
	{
		std::cout << "The deadline has not passed\n";
	}
	

}
