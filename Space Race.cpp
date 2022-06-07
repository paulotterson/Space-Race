// Space Race.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>
#include <ctime>
#include <cstdlib>
#include <mutex>
#include <chrono>

using namespace std;
mutex m;
//This is where the main launch sequence comes from
void launchRocket(int type_i){
   


}


int main()
{
    launchRocket(int type_i) {
        if (type_i == 1) {
            m.lock();
            printf("launching rocket from main on thread ID: %d", this_thread::get_id());
            this_thread::sleep_for(chrono::seconds(3)); //This will put into place the 3 second delay.
            m.unlock();

        }
        else {
            m.lock();
            printf("launching rocket from the launch pad on thread ID: %d", this_thread::get_id());
            //This will transition the rockets launching from the main base to the launch pad
            m.unlock();
        }
    }

}


