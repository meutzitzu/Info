#include <stdio.h>

#define NUMBER_OF_ELEMENTS 10

int     ix[NUMBER_OF_ELEMENTS];
int     x[NUMBER_OF_ELEMENTS],
        sum[NUMBER_OF_ELEMENTS],
        S,n;
int b[NUMBER_OF_ELEMENTS];

void afis( int k)
{
        for(int i=1;i<=k;i++)
                printf("%d ", b[i] );
        printf("\n");
}

void citire()
{
        FILE* fin;
        fin = fopen("date.in", "r");
        fscanf(fin, "%d", S);
        int i=0;
        while( fscanf(fin, "%d[^\n]", b[i])==1 ){
                i++;
        }
        n=i;
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

}
void bt( int k)
{
        for(int i=0; i<= (S-sum[k-1] )/b[k]; i++)
        {
                x[k]=i;
                sum[k]=sum[k-1]+i*b[k];
                if(k==nr)
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
