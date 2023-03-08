//
// Created by Matteo on 01.03.2023.
//
#include <iostream>
#include "Time.h"

using namespace std;

Time::Time(int hour, int minutes, int seconds) {
    h = hour;
    min = minutes;
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

}

Time::~Time()
{
};

void Time::change_h() {

    do {
            cin >> h;

            if (h < 0 || h > 24)
            {
                cout << "wrong format of time type again:"<< endl;
            }
        } while (h < 0 || h > 24);
    }
void Time::change_m() {

    do {
        cin >> min;
        if ( min < 0 || min > 60)
        {
            cout << "wrong format of time type again:"<< endl;
        }
    } while (min < 0 || min > 60);
}

void Time::change_s() {

    do {

        cin >> sec;
        if (sec < 0 || sec > 60)
        {
            cout << "wrong format of time type again:"<< endl;
        }
    } while (sec < 0 || sec > 60);
}

void Time::look() {
    cout << h << endl;
    cout << sec << endl;
    cout << min << endl;
}

void Time::show() {
    cout << "Czas: " << h << ":"<< min << ":" << sec << endl;
}

void Time::set_time()
{
    change_h();
    change_m();
    change_s();
}
void Time::set_time_sm()
{
    change_m();
    change_s();
}
void Time::set_time_s()
{
    change_s();
}

Time Time::add_time(const Time& t1, const Time& t2) 
{
    Time t3;
    t3.sec = t1.sec + t2.sec;
    t3.min = t1.min + t2.min;
    t3.h = t2.h + t1.h;

    if (t3.sec >= 60) {
        t3.min += t3.sec / 60;
        t3.sec %= 60;
    }
    if (t3.min >= 60) {
        t3.h += t3.min / 60;
        t3.min %= 60;
    }
    if (t3.h >= 24) {
        t3.h %= 24;
    }
    return t3;
}
bool Time::cmp_time(const Time& t1, const Time& t2) {
    if((t1.h>t2.h) || (t1.h>=t2.h)  &&  (t1.min>t2.min) ||  (t1.h>=t2.h)  &&  (t1.min>=t2.min) &&   (t1.sec>t2.sec))
    {
        cout << "t1 is higher than t2"<<endl;
        return true;
    }
    else if(t1.h == t2.h && t1.min == t2.min && t1.sec == t2.sec)
    {
    cout << "they are the same"<<endl;
    }
    else cout << "t2 is higher than t1"<<endl;
    return false;
}

