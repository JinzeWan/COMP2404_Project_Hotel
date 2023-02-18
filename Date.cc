#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Date.h"

Date::Date(int d, int m, int y)
{
  cout<<"in default ctor"<<endl;
  setDate(d, m, y);
}

Date::~Date()
{
  cout<<"in dtor"<<endl;
}

void Date::setDate(int d,int m,int y)
{
  year  = ( ( y > 0) ? y : 0 );
  month = ( ( m > 0 && m <= 12) ? m : 0 );
  day   = ( ( d > 0 && d <= lastDayInMonth() ) ? d : 0 );
}

void Date::print() 
{
	if(month >=10 && day >=10){
	cout<<year<<":"<<month<<":"<<day<<endl;
	}
	else if(month < 10 && day >= 10){
	cout<<year<<":0"<<month<<":"<<day<<endl;
	}
	else if(month >= 10 && day < 10){
	cout<<year<<":"<<month<<":0"<<day<<endl;
	}
	else{
	cout<<year<<":0"<<month<<":0"<<day<<endl;
	}
}

int Date::lastDayInMonth()
{
  switch(month)
  {
    case 2:
      if (leapYear())
        return 29;
      else
        return 28;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      return 31;
    default:
      return 30;
  }
}

bool Date::leapYear()
{
  if ( year%400 == 0 ||
       (year%4 == 0 && year%100 != 0) )
    return true;
  else
    return false;
}

string Date::getMonthStr() const
{
  string monthStrings[] = { 
    "January", "Februrary", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December" };

  if ( month >= 1 && month <= 12 )
    return monthStrings[month-1];
  else
    return "Unknown";
}

bool Date::lessThan(Date* date)
{
	bool result = true;
	if (year < date->year)
		return result;
	else if (year == date->year && month < date->month)
		return result;
	else if (year == date->year && month == date->month && day < date->day)
		return result;
	else {
		result = false;
		return result;
	}
}

bool Date::equal(Date* date)
{
	bool result = true;
	if (year == date->year && month == date->month && day == date->day)
		return result;
	else {
		result = false;
		return result;
	}
}

void Date::add(int duration)
{
	if(duration > 31)
		return;
	
	if(lastDayInMonth() - day < duration)
		day += duration;
	else{
		if(month == 12){
			day += lastDayInMonth() - duration;
			month = 1;
			year += 1;
		}
		else{
			day += lastDayInMonth() - duration;
			month += 1;
		}
	
	}

}
