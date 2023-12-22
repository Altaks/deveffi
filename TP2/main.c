#include <stdio.h>
#include <unistd.h>

#include "list_v1.h"
#include "list_v2.h"

int main()
{
    printf("debut main\n");

    list_v1_p V1_l11 = list_v1_new();

    for (long long i = 0; i < 65536; i++)
    {
        list_v1_insert(V1_l11,i);
    }

    printf("main 1\n");

    list_v1_p V1_l12 = list_v1_new();

    for (long long i = 0; i < 65536; i++)
    {
        list_v1_append(V1_l12,i);
    }

    printf("main 2\n");

    list_v2_p V2_l21 = list_v2_new();

    for (long long i = 0; i < 65536; i++)
    {
        list_v2_insert(V2_l21,i);
    }

    printf("main 3\n");

    list_v2_p V2_l22 = list_v2_new();

    for (long long i = 0; i < 65536; i++)
    {
        list_v2_append(V2_l22,i);
    }
    printf("main 4\n");

    return 0;
}