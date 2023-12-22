//
// Created by altaks on 24/11/23.
//

#include <stdio.h>
#include <unistd.h>
#include <time.h>

#ifndef TP1_TIME_CHRONO_H
#define TP1_TIME_CHRONO_H

void bad_sleep(int s);
void good_sleep(int s);

void time_chrono_start();
double time_chrono_stop();


#endif //TP1_TIME_CHRONO_H
