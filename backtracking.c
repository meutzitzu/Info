

#include <stdio.h>
#include <string.h>

#define NUMBER_OF_ELEMENTS      20
#define STRING_LENGTH           32

int     n,
        x[NUMBER_OF_ELEMENTS],
        y[NUMBER_OF_ELEMENTS],
        kmax;

        struct cub {
                char culoare[STRING_LENGTH];
                int l;
        }a[NUMBER_OF_ELEMENTS];
        

void citire (){
    FILE* fin;
    fin = fopen("date.in", "r");

    fscanf( fin,"%d", n );
    for( int i= 1; i<= n; i++ )
        fscanf(fin, "%s %d", a[i].culoare, a[i].l );
    for( int i= 1; i< n; i++ )
        for ( int j = i + 1; j <= n; j++ )
        if ( a[i].l < a[j].l )
            swap(a[i],a[j]);
}

int k;
void afisare ( int k ){
    for ( int i = 1; i <= k; i++ )
        cout << "( " << a[x[i]].culoare << " , " << a[x[i]].l << " )";
    cout << endl;
    if ( k > kmax )
    {
        kmax = k;
        for ( int i = 1; i <= k; i++ )
            y[i] = x[i];
    }
}

int corect ( int k )
{
    if ( k > 1 )
        if ( strcmp(a[x[k]].culoare, a[x[k-1]].culoare) == 0 )
        return 0;
    return 1;
}

void bt ( int k )
{
    for ( int i = x[k-1] + 1; i <= n; i++ )
    {
        x[k] = i;
        if ( corect(k))
        {
            afisare(k);
            if ( k < n )
                bt(k+1);
        }
    }
}

int main()
{
    citire();
    bt(1);
    cout << " Solutia optima este: ";
    for ( int i = 1; i <= kmax; i++ )
        cout << "( " << a[y[i]].culoare << " , " << a[y[i]].l << " )";
    return 0;
}
