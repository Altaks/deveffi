//
// Created by altaks on 24/11/23.
//

#include "time_example.h"

void countdown(){
    struct timespec startTime;

    start(&startTime);
    for(int i = 0; i < 10; i++){
        bad_sleep(1);
        printf("Temps : %f\n", stop(&startTime));
    }
}
