#include <stdio.h>

#define NUMBER_OF_ELEMENTS 10

int     ix[NUMBER_OF_ELEMENTS];
int     x[NUMBER_OF_ELEMENTS],
        sum[NUMBER_OF_ELEMENTS],
        S,n;

void afis( int k)
{
        for(int i=1;i<=k;i++)
                printf("%d ", x[i] );
        printf("\n");
}

void citire()
{
        fscanf(fin, "%d", nr);
}

void def_ix()
{
        printf("n= " );
        int n1;
        scanf("%d", &n1);
        for(int j=1; j<=n1;  j++){
                printf("ix[%d]= ", j );
                scanf("%d", &ix[j]);
                printf("\n");
        }
}

//printf("MERE\n" );
int corect(int k)
{
        if(k> 1){
                if(x[k-1]==a[k] && g[k-1]!=g[k]){
                        return 0;
                }
        }
        else
                return 1;
}
void bt( int k)
{
        for(int i=0;i<=9;i++)
        {
                x[k]=i;
                sum[k]=sum[k-1]+i;
                if(corect(k))
                {
                        if(k==n)afis(k);
                                else bt(k+1);
                }
        }
}

void afis_apar( int  k)
{
        for(int i=1;i<=k;i++)
                if(ix[i])
                        printf("%d ", ix[i] );
        printf("\n");
}
int main()
{
        //cin>>n

}
