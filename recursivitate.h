#ifndef RECURSIVITATE_H_INCLUDED
#define RECURSIVITATE_H_INCLUDED

void rd_arr( int arr[], unsigned int n, FILE*)
{
        if(n>0){
                rnd_arr(arr, --n);
                scanf("%d", &arr[n]);
        }
}

void pd_arr( int arr[], unsigned int n)
{
        if(n>0){
                pd_arr(arr, --n);
                scanf("%d", &arr[n]);
        }
}

void base_rd_arr_f(int arr[], int n, fin)
{
        if( fscanf(fin, "%d", &a[n]) ){
                a[0]++;
                base_rd_arr_f(arr, n, fin)
        }
}

void rd_arr_f()
{
        
}



#endif  RECURSIVITATE_H_INCLUDED
