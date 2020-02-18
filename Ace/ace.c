#include <stdio.h>
#include <math.h>
#define N_MAX 1000
#define M_MAX 1000


double tg(int a, int b, int h)
{
        double d = sqrt((a*a)+(b*b));
        return d/h;
}

int main()
{
        int n,m;
        int p;
        int i,j;

        FILE *fin;
        fin = fopen("ace.in", "r");
        FILE *fout;
        fout = fopen("ace.out", "w");
        fscanf(fin, "%d %d %d", &p, &n, &m );
        int h[n-1][m-1];
        double a[n-1][m-1];
        double x;
        printf("MERE\n");
        for( i=n-1; i>=0; i--)
                {
                for(j=m-1; j>=0; j--)
                        {
                        fscanf(fin, "%d", &h[i][j]);

                        a[i][j]=tg(i,j,h[i][j]);
                        }
                }

        for( i=0; i<n; i++)
                {
                for(j=0; j<m; j++)
                        {
                        fprintf(fout, "%.2f ", a[i][j]);
                        }
                fprintf(fout, "\n");
                }
        //printf("MERE");


        return 0;
}
