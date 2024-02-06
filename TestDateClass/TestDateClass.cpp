#include <iostream>
#include "Date.h"

int main()
{
	Date today;

	today.setDate(2, 5, 2024);

	std::cout << "Today is " << today.toString() << "\n";

}
