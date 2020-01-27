#include <stdio.h>
#include "recursivitate.h"


int main()
{
        int n;
        int arr[256];
        scanf("%d", &n);

        rd_arr(arr, n);
        pd_arr(arr, n);



        return 0;
}
