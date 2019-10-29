#include <iostream>
#include <fstream>
#include <string.h>

/// L A Z A R   M I H A I ///

using namespace std ;

/// Calculati valoarea expresiei

void P1()
{
        int i,j,k;
        char s[256], r[512];
        printf("s= ");
        scanf("%[^\n]", s);
        printf("\n");


        for( i = 0; i <= strlen(s); i++)
          {
                //strcpy
                if(isalpha(s[i]))
                  {
                        while(j = strchr(s +i +1, s[i]))
                          {
                                strcpy( p, p+1);
                          }
                        //strcpy(s +i, strchr(s +i +1, s[i]));
                  }
          }

        for( i = 0; i <= strlen(s); i++)
          {
                r[2 * i]=s[i];
                r[2*i+1]=' ';
          }

        printf("\n %s ", s);
}

void P2()
{
        char a[256];
        char b[256];
        char r[256];
        printf("a= ");
        scanf("%s", a);
        printf("a= %s\n", a);
        int N=strlen(a);
        printf("n= %d\n", N );
        int k=0, i=0;
        bool eq;
        while(isalpha(a[k]))
          {
                b[k]=a[k];
                k++;
          }
        b[k]=0;
        for( i= 0; i<N; i++ )
          {
                k=0;
                //printf("%d ", k );
                while(isalpha(a[i]))
                  {
                          r[k++]=a[i++];
                  }
                r[k]=0; //NULL TERMINATOR
                if(strcmp(r, b)==0)
                  {
                        strcpy(a+i-k,a+i);
                        i-=k;
                  }
          }
        printf("rez= %s\n", a );
}

int main()
{
        char c;
        printf("NR PROBLEMA: (1/2)");
        scanf("%c", c);
        switch (c) {
                case '1': {
                        P1;
                        break;
                }
                case '2' : {
                        P2;
                        break;
                }
        }
        P1();



        return 0;
}
