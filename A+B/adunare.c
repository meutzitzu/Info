#include <stdio.h>

int main()
{
        int a,b;

        FILE *fin;
        fin = fopen( "adunare.in", "r");
        FILE *fout;
        fout = fopen( "adunare.out", "w");

        fscanf(fin, "%d %d", &a, &b);
        fprintf(fout, "%d", a+b );
        return 0;
}
