#include <stdio.h>


int x[10],sum[10],S,n;
void afis( int k)
{
        for(int i=1;i<=k;i++)
                printf("%d ", x[i] );
        printf("\n");
}
int corect(int k)
{
        if(x[1]==0)
                return 0;
        if(sum[k]>S)
                return 0;
        if(k==n&&sum[k]!=S)
                return 0;
        return 1;
}
void bt( int k)
{
        for(int i=0;i<=9;i++){
                x[k]=i;
                sum[k]=sum[k-1]+i;
                if(corect(k)){
                        if(k==n)afis(k);
                                else bt(k+1);
                }
        }
}
int main()
{
        int     x[10],
                sum[10];
        scanf("%d %d", &n, &S );

        bt(1);

        return 0;
}
