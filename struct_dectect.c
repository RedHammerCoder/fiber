#include "./inc/def.h"
#include <stdio.h>

struct Content T;
int main()
{
    printf("%d ", sizeof(struct Content));
}


// p /x *(char*)($rsp+16)