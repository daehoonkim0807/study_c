#include <iostream>
using namespace std;

class Date
{
    int year;
    int month;
    int day;
    
public : 
    void set_date(int _year, int _month, int _day);
    void add_day(int inc);
    void add_month(int inc);
    void add_year(int inc);
    void show_data();
}
    
void Date::set_date(int _year, int _month, int _day)
{
    year = _year;
    month = _month;
    day = _day;
    
}
void Date::add_day(int inc)
{
    int month_day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31{
    int i = month;
    
//    if(month_day[i - 1] - day >= inc )
    
//    }
        
}

