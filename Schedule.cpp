//
// Created by Matteo on 08.03.2023.
//

#include "Schedule.h"
#include "time.h"
#include <iostream>

void Schedule::add_time_to_schedule(const Time&time)
{
    if(times_counter<10) {
        for (int i = times_counter; i < 10; i++) {
            container[i] = time;
        }
        times_counter++;
    }else return;
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
Time& Schedule :: ref(int index) {
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
