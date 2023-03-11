//
// Created by Matteo on 01.03.2023.
//
#include <iostream>
#include "Time.h"

using namespace std;

Time::Time(int hour, int minute, int seconds) {
    h = hour;
    min = minute;
    sec = seconds;
}

Time::Time(int minutes, int seconds) {
    h = 0;
    min = minutes;
    sec = seconds;
}

Time::Time(int seconds) {
    h =0;
    min = 0;
    sec = seconds;
}
Time::Time(){
cout <<"Konstruktor"<<endl;
}

Time::~Time()
{
    cout<< "destructor"<<endl;
};

void Time::change_h(int hour) {

    do {
            h = hour;

            if (h < 0 || h > 24)
            {
                cout << "wrong format of time type again:"<< endl;
            }
        } while (h < 0 || h > 24);
    }
void Time::change_m(int minute) {

    do {
        min = minute;
        if ( min < 0 || min > 60)
        {
            cout << "wrong format of time type again:"<< endl;
        }
    } while (min < 0 || min > 60);
}

void Time::change_s(int s) {

    do {

        sec = s;
        if (sec < 0 || sec > 60)
        {
            cout << "wrong format of time type again:"<< endl;
        }
    } while (sec < 0 || sec > 60);
}

void Time::look() const{
    cout << h << endl;
    cout << sec << endl;
    cout << min << endl;
}

void Time::show() const{
    cout << "Czas: " << h << ":"<< min << ":" << sec << endl;
}

void Time::set_time(int hour, int min, int sec)
{
    change_h(hour);
    change_m(min);
    change_s(sec);
}
void Time::set_time_sm(int min, int sec)
{
    change_m(min);
    change_s(sec);
}
void Time::set_time_s(int s)
{
    change_s(s);
}

Time Time :: operator+(const Time& other) const{
    Time result;
    result.sec = sec + other.sec;
    result.min = min + other.min;
    result.h = h + other.h;

    if (result.sec >= 60) {
        result.min += result.sec / 60;
        result.sec %= 60;
    }
    if (result.min >= 60) {
        result.h += result.min / 60;
        result.min %= 60;
    }
    if (result.h >= 24) {
        result.h %= 24;
    }

    return result;
}
bool Time::operator<(const Time &t1) const {
    if((t1.h>h) || (t1.h>=h)  &&  (t1.min>min) ||  (t1.h>=h)  &&  (t1.min>=min) &&   (t1.sec>sec))
    {
        //cout << "t1 is higher than t2"<<endl;
        return true;
    }
    else //cout << "t2 is higher than t1"<<endl;
    return false;
}
bool Time::operator>(const Time &t1) const {
    if((t1.h<h) || (t1.h<=h)  &&  (t1.min<min) ||  (t1.h<=h)  &&  (t1.min<=min) &&   (t1.sec<sec))
    {
        //cout << "t1 is higher than t2"<<endl;
        return true;
    }
    else //cout << "t2 is higher than t1"<<endl;
        return false;
}
bool Time :: operator==(const Time& t1)const
{
    if(t1.h==h && t1.min == min && t1.sec == sec)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Time :: operator<=(const Time& t1)const
{
    if(!(*this >t1) || *this == t1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Time :: operator>=(const Time& t1)const
{
    if((*this >t1) || *this == t1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Time::operator+(int sec) {
        this->sec += sec;
        if(sec>59)
        {
            this->sec = this->sec%60;
            this->min += 1;
        }
}

