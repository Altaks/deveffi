# import time_profiler

import numpy
from math import pi, sin
from cmath import exp
from fourier import fourier
import time_profiler


def dft(frame):
    spectrum = list()
    N = len(frame)
    for k in range(N):
        value = 0
        for n in range(N):
            value = value + frame[n] * exp(-2 * pi * 1j * k * n / N)
        spectrum.append(value)
    return numpy.array(spectrum)


def essai(N):
    signal = list()
    for n in range(N):
        signal.append(sin(2 * pi * 440 * n / 44100))
    return numpy.array(signal)


s = essai(1024)
# s = essai(1024*2)

time_profiler.start()

S = dft(s)

S = fourier(s)

time_profiler.stop()

# print(abs(S))

# End Of File
