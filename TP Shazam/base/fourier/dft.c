#include <math.h>

#include "dft.h"

void dft(frame s, spectrum S)
{
  for (int m=0; m < NH ; m++)
    {
      S[m] = 0;

      for (int n=0; n<N; n++)
        {
          S[m] += s[n] * cexp(-2*M_PI*I*m*n/N);
        }
    }
}