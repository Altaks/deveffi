from time import sleep
import time_chrono
import time_profiler


def countdown():
    time_chrono.start()
    for i in range(10):
        sleep(1)
        print("Temps : ", time_chrono.stop())
    print("Temps total écoulé : ", time_chrono.stop())


time_profiler.start()
countdown()
time_profiler.stop()
