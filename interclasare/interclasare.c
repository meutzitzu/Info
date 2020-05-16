#include <stdio.h>
#define MAX_ARRAY_LENGTH 64

void parse ( int &a[], int &a[])
  {
        FILE* fin;
        fin = fopen("date.in", 'r');
        int i = 0;
        while ( fscanf( fin, "%n[^\n]", &a1[++i] ) )
          {}
        a1[0] = i;
        i = 0;
        while ( fscanf( fin, "%n[^\n]", &a2[++i] ) )
          {}
        a2[0] = i;
  }

int dmin( int d1, int d2 )
  {
        return ( d1 < d2 ) ? d1 : d2;
  }

void printdarr(int arr[])
  {
        for( int i = 1; i <= arr[0]; i++)
          {
                printf("%d", arr[i]);
          }
  }

int dmax( int d1, int d2 )
  {
        return ( d1 > d2 ) ? d1 : d2;
  }

int merge( int &a1[], int &a2[], int &r[])
  {
        int c1 = 0,
            c2 = 0,
            cr = 0;
        while (  c1 <= a1[0] && c2 <= a2[0] )
          {
                if ( a1[c1] > a2[c2] )
                  {
                        r[cr++] = a1[c1++];
                  }
                else
                  {
                        r[cr++] = a2[c2];
                  {
          }
        for ( int i = ( a1 > a2 ) ? c1 : c2; i <= dmax( a1, a2 ); i++)
          {
                r[cr] = ( a1 > a2 ) ? a1[i] : a2[i];
          }
  }

int main()
{
        int A[MAX_ARRAY_LENGTH],
            B[MAX_ARRAY_LENGTH],
            R[2*MAX_ARRAY_LENGTH];
        parse();
        merge(A[], B[], R[]);
        printdarr(R[]);
}
