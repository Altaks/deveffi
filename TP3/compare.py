import random
import string
import time_profiler

ln = list()
lm = list()

ln.append("superpro")
lm.append(20)


def search_list(name: str) -> int:
    global lm, ln
    return lm[ln.index(name)]


d = dict()
d["superpro"] = 20


def search_dict(name: str) -> int:
    return d[name]


def insert_both(name: str, mark: int) -> None:
    ln.append(name)
    lm.append(mark)

    d[name] = mark


def get_random_name(length: int) -> str:
    return "".join(random.choice(string.ascii_uppercase) for _ in range(length))


def get_random_mark():
    return random.randint(0, 20)


for _ in range(20_000):
    name = get_random_name(8)
    mark = get_random_mark()
    insert_both(name, mark)

time_profiler.start()

for name in ln:
    note1 = search_list(name)
    note2 = search_dict(name)
    assert note1 == note2

time_profiler.stop()
