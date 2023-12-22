from time import time

start_time = 0


def start():
    global start_time
    start_time = time()


def stop() -> float:
    global start_time
    return time() - start_time
