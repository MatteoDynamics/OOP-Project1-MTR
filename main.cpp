#include <iostream>
#include "Time.h"
#include "schedule.h"
int main() {
    Time t1,t2;
    t1.set_time();
    t2.set_time();
    t1.look();
    t1.show();
    t2.show();
    t1.cmp_time(t1,t2);
    std::cout << "added time:   ";
    Time t3 = t1.add_time(t1, t2); // corrected line
    t3.show(); // corrected line
    Schedule s1;
    s1.add_time_to_schedule(t3);
    s1.add_time_to_schedule(t2);
    std::cout<< "counter == "<< s1.times_count()<<std::endl;
    s1.show_schedule();
}


