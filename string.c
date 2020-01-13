#include <stdio.h>
#include "string.h"




int main ()
{
        char s1[32];
        char s2[32];

        scanf("%32s %32s", &s1, &s2);
        printf("%d\n", strcmp(s1, s2));
}
