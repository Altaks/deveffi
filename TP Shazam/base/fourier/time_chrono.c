#include "time_chrono.h"

void bad_sleep(int s){

    struct timespec before, after;

    clock_gettime(CLOCK_REALTIME, &before);

    while(1){ /* Attente active */

        clock_gettime(CLOCK_REALTIME, &after);

        double elapsed_secs = (after.tv_sec - before.tv_sec) + (after.tv_nsec - before.tv_nsec) * 1e-9;

        if(elapsed_secs > s) break;

    }
}

void good_sleep(int s){
    sleep(s);
}

struct timespec before;

void time_chrono_start(){
    clock_gettime(CLOCK_REALTIME, &before);
}

double time_chrono_stop(){
    struct timespec after;
    clock_gettime(CLOCK_REALTIME, &after);
    return (after.tv_sec - before.tv_sec) + (after.tv_nsec - before.tv_nsec) * 1e-9;
}