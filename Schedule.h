//
// Created by Matteo on 08.03.2023.
//
#include "time.h"
#ifndef PROJECT1_SCHEDULE_H
#define PROJECT1_SCHEDULE_H


class Schedule {
Time *container;
int times_counter;
public:
    Schedule(): container(nullptr), times_counter(0){};
    void add_time_to_schedule(const Time& t1);
    void show_schedule();
    int times_count() const;
    Time &ref_index(int index);
    Time schedule_sum();
    ~Schedule() {
        delete[] container;
    }
    Schedule (const Schedule& schedule);
    Schedule& operator=(const Schedule&sch_temp);
    void copy_schedule(const Schedule& s);
    Schedule schedule_limited(int n);
    Schedule max_sum_size(Time& time);
};


#endif //PROJECT1_SCHEDULE_H
