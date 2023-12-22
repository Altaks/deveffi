from memory_profiler import profile


@profile
def solution1(array: list):
    for i in range(65536):
        array.append(i)
    return reversed(array)


@profile
def solution2(array: list) -> list:
    for i in range(65536):
        array.insert(0, i)
    return array


l = list()
solution1(l)

l = list()
solution2(l)
