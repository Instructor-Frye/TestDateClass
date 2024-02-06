#pragma once
#include <string>

class Date
{
   private:
       int month;
       int day;
       int year;
       void setMonth(int newMonth);
       void setYear(int newYear);
       void setDay(int newDay);
   public:
       Date();
       int getMonth();
       int getDay();
       int getYear();
       void setDate(int newMonth, int newDay, int newYear);
       std::string toString();
};