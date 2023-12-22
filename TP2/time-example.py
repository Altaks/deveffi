import time_profiler


def solution1(array: list):
    for i in range(65536):
        array.append(i)
    return reversed(array)


def solution2(array: list) -> list:
    for i in range(65536):
        array.insert(0, i)
    return array


l = list()
time_profiler.start()
solution1(l)
time_profiler.stop()

l = list()
time_profiler.start()
solution2(l)
time_profiler.stop()
