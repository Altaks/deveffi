//
// Created by altaks on 24/11/23.
//
#include "time_example.h"

int main(){
    struct timespec startTime;

    start(&startTime);
    countdown();
    printf("Temps total écoulé : %f\n", stop(&startTime));
}