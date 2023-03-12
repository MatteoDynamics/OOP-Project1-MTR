#include <iostream>
#include "Time.h"
#include "schedule.h"
int main() {
    Time t1(1,25,40);
    Time t2(0,50,30);
   // t1.set_time(1,25,40);
    //t2.set_time(0,50,30);

    //t1.look();
    t1.show();
    t2.show();
    if (t1 > t2) {
        std::cout << "c1 jest wieksze od c2" << std::endl;
    }
    if (t1 >= t2) {
        std::cout << "c1 jest wieksze||rowne od c2" << std::endl;
    }
    if (t1 == t2) {
        std::cout << "c1 jest tskie same jak c2" << std::endl;
    }
    if (t1 < t2) {
        std::cout << "c1 jest mniejsze od c2" << std::endl;
    }
    if (t1 <= t2) {
        std::cout << "c1 jest mniejsze||rowne od c2" << std::endl;
    }
    Time t3 = t1 + t2; // corrected line
    t3 + 90;
    t3.show(); // corrected line
    Schedule s1;
    s1.add_time_to_schedule(t3);
    s1.add_time_to_schedule(t1);
    s1.add_time_to_schedule(t2);
    s1.add_time_to_schedule(t2);
    s1.add_time_to_schedule(t2);
     Time t4 = s1.schedule_sum();
     t4.show();
    s1.show_schedule();
    std::cout<<std::endl<< "counter == "<< s1.times_count()<<std::endl;
    s1.ref(0) = t2;
    s1.ref(1) = t2;
    s1.show_schedule();

}


