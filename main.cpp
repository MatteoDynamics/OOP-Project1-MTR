#include <iostream>
#include "Time.h"
#include "schedule.h"

void menu()
{
    std::cout<<"1) Type N times in schedule"<<std::endl;
    std::cout<<"2) show n times sum less than typed time"<<std::endl;
    std::cout<<"2) add n sec to choosen time"<<std::endl;
}
int main() {

    Time t1(0,5,0);
    Time t2(0,10,0);
    Time t3(0,15,0);
    Time t4(0,20,0);
    Time t5(0,30,0);
    Schedule s1;
    s1.add_time_to_schedule(t1);
    s1.add_time_to_schedule(t2);
    s1.add_time_to_schedule(t3);
    s1.add_time_to_schedule(t4);
    s1.add_time_to_schedule(t5);
    s1.show_schedule();
;

    int option;

    do{
        menu();
        std::cout<<"type option you want to chose:"<<std::endl;
        std:: cin >>option;
        switch (option) {
            //HARMONOGRAM COPY N TIMES
            case 1:
            {
                std::cout << "ile czasow chcesz wyswietlic" << std::endl;
                int n;
                std::cin >> n;
                Schedule s2 = s1.schedule_limited(n);
                s2.show_schedule();
            }
                break;
            //HARMONOGRAM COPY LOWER THAN TIME
            case 2:
            {
                std::cout << "podaj h,m,s" << std::endl;
                int h, m, s;
                std::cin >> h >> m >> s;
                Time time(h, m, s);
                time.show();
                Schedule s3 = s1.max_sum_size(time);
                s3.show_schedule();
            }
                break;
            case 3:
            {
                std::cout << "podaj o ile sekund chcesz zwiekszyc oraz ktory czas" << std::endl;
                int sek,number;
                std::cin >> sek>>number;
                s1.ref_index(0) + sek;
                s1.show_schedule();
            }break;


        }

    }while(option <=3 && option >=1);



}


