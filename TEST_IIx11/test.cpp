#include <iostream>
//#include <limits.h>
#include<cmath>
using namespace std;

void rd_arr(int arr[], int n)
{
        if(n>0){
                rd_arr(arr, --n);
                scanf("%d", &arr[n]);
        }
}

void pd_arr(int arr[], int n)
{
        if(n>0){
                pd_arr(arr, --n);
                printf("%d ", arr[n] );
        }
}

int pow(int b, int e){
        if(e==0){
                return 1;
        }
        if(e<=1){
                return b;
        } else {
                return b*pow(b, --e);
        }

}

int abs(int n){
        if(n>=0){
                return n;
        } else {
                return -n;
        }
}

int ciuf( int n)
{
        if(n<10){
                return 0;
        }

        else if( abs( n%10 - n/10%10)>2){
                return 0;
        } else if(n<100) {
                return 1;
        } else {
                return ciuf(n/10);
        }
}

int min_arr_ciuf(int arr[], int n,  int min)
{
        if(n>=0){
                if( ciuf(arr[n]) ){
                        if(min>arr[n]){
                                min=arr[n];
                        }
                }
                return min_arr_ciuf(arr, --n, min);
        }
        else return min;
}

int prim (int n, int d=2)
{
        if(n<=2){
                return 0;
        }
        else if(d>=sqrt(n)){
                return 1;
        } else if (!n%d){
                return 0;
        } else {
                return prim (n, ++d);
        }
}

int palindrom_arr(int arr[], int n, nit m=0)
{
        if(n>0){
                if(prim(arr[n])==prim(arr[m])){
                        return palindrom_arr(arr, --n, ++m)
                }
                else return 0;
        }
}

int main()
{
        uint16_t N;
        printf("n = ");
        scanf("%d\n", &N );
        int a[N];
        rd_arr( a, N);
        pd_arr( a, N);
        printf("\nminciuf =  %d\n", min_arr_ciuf(a, N, a[0]) );
        return 0;
}
