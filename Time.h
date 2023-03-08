//
// Created by Matteo on 01.03.2023.
//

#ifndef PROJECT1_TIME_H
#define PROJECT1_TIME_H


class Time {
    int sec;
    int min;
    int h;
    void change_h();
    void change_m();
    void change_s();

public:
    Time();
    Time(int h, int min, int s);
    Time(int min, int s);
    Time(int s);
    ~Time();
    void set_time();
    void set_time_sm();
    void set_time_s();
    void look();
    void show();
    Time add_time(const Time& t1, const Time& t2);
    bool cmp_time(const Time& t1, const Time& t2);
};


#endif //PROJECT1_TIME_H
