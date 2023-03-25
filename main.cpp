#include <iostream>
#include "Time.h"
#include "schedule.h"


int main() {
    Time t1(1,25,40);
    Time t2(0,50,30);
    Time t9(4,5,30);

    t1.show();
    t2.show();
    if (t1 > t2) {
        std::cout << "c1 jest wieksze od c2" << std::endl;
    }
    if (t1 >= t2) {
        std::cout << "c1 jest wieksze || równe od c2" << std::endl;
    }
    if (t1 == t2) {
        std::cout << "c1 jest takie same jak c2" << std::endl;
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
    s1.show_schedule();
    t4.show();
    std::cout<<std::endl<< "counter == "<< s1.times_count()<<std::endl;
    s1.ref_index(0) = t3;
    s1.ref_index(1) = t2;
    s1.show_schedule();
    Time t5 = s1.schedule_sum();
    t5.show();

   Schedule s2 = s1;
   // Schedule s3;
   // s3 = s1;
  //  s2.ref_index(2) = Time(10);
  //  s1.show_schedule();
    s2.show_schedule();
    std::cout<<std::endl;
    Schedule s3 = s2.schedule_limited(3);
    s3.show_schedule();
    std::cout<<std::endl;
    s2.show_schedule();
    std::cout<<"test"<<std::endl;
    Schedule s4 = s2.max_sum_size(t9);
    s4.show_schedule();
}


