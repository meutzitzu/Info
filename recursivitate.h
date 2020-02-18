#ifndef RECURSIVITATE_H_INCLUDED
#define RECURSIVITATE_H_INCLUDED


void rd_arr( int arr[], unsigned int n)
{
        if(n>0){
                rd_arr(arr, --n);
                scanf("%d", &arr[n]);
        }
}

void pd_arr( int arr[], unsigned int n)
{
        if(n>0){
                pd_arr(arr, --n);
                printf("%d ", &arr[n]);
        }
}

void base_rd_arr_f(int arr[], char fname[32])
{
        FILE* fin;
        fin = fopen(fname, "r");
        rd_arr_f(arr, 1, fin);

}

void rd_arr_f(int arr[], unsigned int n, FILE *fin)
{
        int x;
        if(fscanf(fin, "%d", &x)==1){
                arr[n] = x;
                rd_arr_f(arr, ++n, fin);
        }
        else arr[0]=n;
}




#endif
