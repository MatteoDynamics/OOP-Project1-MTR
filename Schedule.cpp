//
// Created by Matteo on 08.03.2023.
//

#include "Schedule.h"
#include "time.h"
#include <iostream>

Schedule Schedule::max_sum_size(Time& time) {
    Schedule tmp;
    int counter = 0;
    Time sum(0,0,0);
    for(int i = 0 ; i < times_counter; i++)
    {
        sum = sum +container[i];
        if(sum<=time)
        {
            counter++;
        }

    }
    tmp.times_counter = counter;
    tmp.container = new Time[counter];

    for (int i = 0; i < counter; i++) {
        tmp.container[i] = container[i];
    }

    return tmp;
}

Schedule Schedule::schedule_limited(int n) {
    Schedule s1;
    if(n>times_counter)
    {
        n = times_counter;
    }
    s1.times_counter = n;
    s1.container = new Time[times_counter];
    for (int i = 0; i < n; i++) {
        s1.container[i] = container[i];
    }
    return s1;

}

void Schedule::copy_schedule(const Schedule& s)
{
    for (int i = 0; i < times_counter; i++) {
        container[i] = s.container[i];
    }
}

Schedule&::Schedule::operator=(const Schedule &schedule) {
    if (&schedule ==this) return *this;
    delete[]container;
    times_counter = schedule.times_counter;
    container = new Time[times_counter];
    copy_schedule(schedule);
}

Schedule::Schedule(const Schedule &schedule) {
    times_counter = schedule.times_counter;
    container = new Time[times_counter];
    copy_schedule(schedule);
}

void Schedule::add_time_to_schedule(const Time&time)
{
    times_counter++;
    Time *tmp = new Time[times_counter];
    for(int i=0; i< times_counter ; i++)
    {
        tmp[i] = time;
    }
        delete[]container;
    container = tmp;
}
void Schedule::show_schedule() {
    for(int i=0; i<times_counter; i++)
    {
        std::cout<< "time "<< i <<"= ";
        container[i].show();
    }
}
int Schedule::times_count() const
{
    return times_counter;
}
Time& Schedule :: ref_index(int index) {
    return container[index];
}
Time Schedule::schedule_sum() {
    Time temp;
    for (int i =0; i<times_counter; i++)
    {
        temp = temp + container[i];
    }
    return temp;
}
