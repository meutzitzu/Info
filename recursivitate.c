#include <stdio.h>
#include <string.h>
#include "recursivitate.h"


int main()
{
        int n;
        int arr[256];
        scanf("%d", &n);
        char s[] = "date.in";
        base_rd_arr(arr, s);
        pd_arr(arr, arr[0]);



        return 0;
}
