#include <stdio.h>

#define NUMBER_OF_ELEMENTS 10

int       y[NUMBER_OF_ELEMENTS];
int       x[NUMBER_OF_ELEMENTS],
        sum[NUMBER_OF_ELEMENTS],
        S,n;
int       b[NUMBER_OF_ELEMENTS];

struct cub {
        char culoare[10];
        int l;
} a[NUMBER_OF_ELEMENTS];


void afis( int k)
{
        for ( int i = 1; i <= k; i++ )
                printf("( %s, %d )", a[x[i]].culoare, a[x[i]].l );
        printf("\n");

        if ( k > kmax ){
                kmax = k;
                for ( int i = 1; i <= k; i++ )
                        y[i] = x[i];
        }


}

void citire()
{
        FILE* fin;
        fin = fopen("date.in", "r");
        fscanf(fin, "%d", n);
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
        if ( k > 1 )
                if ( strcmp(a[x[k]].culoare, a[x[k-1]].culoare) == 0 )
                        return 0;
        return 1;

}

void bt(int k)
{
        for ( int i = x[k-1] + 1; i <= n; i++ ){
                x[k] = i;
                if ( corect(k)){
                        afisare(k);
                        if ( k < n )
                                bt(k+1);
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
        citire();
        bt(1);



}
