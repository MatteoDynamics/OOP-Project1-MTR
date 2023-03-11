//
// Created by Matteo on 08.03.2023.
//

#include "Schedule.h"
#include "time.h"
#include <iostream>

void Schedule::add_time_to_schedule(const Time&t1)
{
    if(times_counter<10)
    times_counter++;
    for(int i=0; i<times_counter; i++)
    {
        container[i] = Time(5,3,1);
    }
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
