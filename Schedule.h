//
// Created by Matteo on 08.03.2023.
//
#include "time.h"
#ifndef PROJECT1_SCHEDULE_H
#define PROJECT1_SCHEDULE_H


class Schedule {
Time *container = new Time[10];
int times_counter = 0;
public:
    void add_time_to_schedule(const Time t1);
    void show_schedule();
    int times_count();
};


#endif //PROJECT1_SCHEDULE_H
