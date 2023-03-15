//
// Created by Matteo on 01.03.2023.
//

#ifndef PROJECT1_TIME_H
#define PROJECT1_TIME_H


class Time {
    int sec;
    int min;
    int h;
    void change_h(int hour);
    void change_m(int minute);
    void change_s(int s);
    void set_time(int hour=0, int minute=0, int sec=0);
public:
    Time();
    Time(int hour, int minute, int seconds);
    Time(int min, int s);
    Time(int s);
    ~Time();
    //void set_time_sm(int min=0, int sec=0);
    //void set_time_s(int s=0);
    void look()const;
    void show() const;
    //Time add_time(const Time& t1, const Time& t2);
    bool operator>(const Time& t1)const;
    bool operator==(const Time& t1)const;
    bool operator<=(const Time& t1)const;
    bool operator>=(const Time& t1)const;
    bool operator<(const Time& t1)const;
    Time operator+(const Time& other) const;
    void operator+(int sec);



};


#endif //PROJECT1_TIME_H
