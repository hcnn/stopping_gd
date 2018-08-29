#include <stdio.h>  // printf
#include "stopping_gd.h"

int main()
{
    double tolfun, f0, f1;
    bool res;
    
    f1 = 1.15;
    f0 = 1.18;
    tolfun = 0.02;
    res = stopping_gd(f1, f0, tolfun);
    printf("%s\n", res ? "true -> stop" : "false -> proceed");

    f1 = 1.15;
    f0 = 1.17;
    tolfun = 0.02;
    res = stopping_gd(f1, f0, tolfun);
    printf("%s\n", res ? "true -> stop" : "false -> proceed");

    f1 = 1.15;
    f0 = 1.16;
    tolfun = 0.02;
    res = stopping_gd(f1, f0, tolfun);
    printf("%s\n", res ? "true -> stop" : "false -> proceed");
}
