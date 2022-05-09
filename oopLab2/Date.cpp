//
//  Date.cpp
//  oopLab2
//
//  Created by Dima's mac on 09.05.2022.
//

#pragma once

#include <stdio.h>
#include <iostream>

using namespace std;

class Date
{
    private:
        int day;
        int month;
        int year;
    
    public:
        // three parameters
        Date(int dday, int mmonth, int yyear)
        {
            day = dday;
            month = mmonth;
            year = yyear;
        }
    
        // copying
        Date(const Date &date)
        {
            day = date.day;
            month = date.month;
            year = date.year;
        }
    
        // current date
        Date()
        {
            time_t t = time(0);
            tm *t1 = localtime(&t);
            day = t1->tm_mday;
            month = t1->tm_mon + 1;
            year = t1->tm_year + 1900;
        }
    
        // destructor
        ~Date() {};
    
        //get day
        int GetDay()
        {
            return day;
        }
    
        //get month
        int GetMonth()
        {
            return month;
        }
    
        //get year
        int GetYear()
        {
            return year;
        }
    
        //see data
        void SeeDate()
        {
            string dday;
            string mmonth;
            string yyear;
            
            if (day < 10)
                dday = "0" + to_string(day);
            else
                dday = to_string(day);
            if (month < 10)
                mmonth = "0" + to_string(month);
            else
                mmonth = to_string(month);
            if (year % 100 < 10)
                yyear = "0" + to_string(year % 100);
            else
                yyear = to_string(year % 100);
                
            cout<<"date is "<<dday<<"."<<mmonth<<"."<<yyear<<endl;
        }
    
        //modificators
        Date *NewDay(int dday)
        {
            day = dday;
            return this;
        }
        
        Date *NewMonth(int mmonth)
        {
            month = mmonth;
            return this;
        }
    
        Date *NewYear(int yyear)
        {
            year = yyear;
            return this;
        }
};
