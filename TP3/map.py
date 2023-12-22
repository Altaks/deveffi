import random
import string


def get_random_name(length: int) -> str:
    return "".join(random.choice(string.ascii_uppercase) for _ in range(length))


def get_random_mark():
    return random.randint(0, 20)


def map_new() -> list[dict]:
    return [{} for _ in range(2 ** 16)]


def map_hash(name: str) -> int:
    # on récupère le hash du nom
    h = hash(name)
    # si le hash est négatif, on le rend positif
    if h < 0:
        h = 2 ** 64 + h
    # on renvoie la valeur des 16 premiers bits du hash
    return h & 0b1111_1111_1111_1111


def map_insert(map: list[dict], name: str, mark: int) -> None:
    map[map_hash(name)][name] = mark


m = map_new()
d = dict()


def insert_both(name: str, mark: int) -> None:
    global m, d
    map_insert(m, name, mark)
    d[name] = mark


for _ in range(40_000):
    insert_both(get_random_name(8), get_random_mark())

print(f"Taille de la liste m : {len(m)}")
print(f"Taille du dict d : {len(d)}")


def search_dict(name: str) -> int:
    global d
    return d[name]


def search_map(name: str) -> int:
    global m
    return m[map_hash(name)][name]


import time_profiler

time_profiler.start()

for name in d.keys():
    note1 = search_map(name)
    note2 = search_dict(name)

    assert note1 == note2

time_profiler.stop()
