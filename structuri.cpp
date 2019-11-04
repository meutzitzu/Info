#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

void TEST()
{

}

void cplxcalc()
{
        struct cplx {
                double r;
                double i;
        } z1;
        cplx z2, zr;
        char op;
        printf("Z1= ");
        scanf("%lf %lf", z1.r, z1.i );
        printf("Z2= ");
        printf("%lf %lf", z1.r, z1.i );
        //scanf("%c", op );
        //scanf("%d", z1.r);
        //if()
        printf();
}


int main ()
{
char C[256];
char q='r';
while(q){
        printf("\n>");
        scanf("%s", C);

        if (strstr(C,                    "Q!")){
                q=0;
        } else if (strstr(C,            "TEST")){
                TEST();
        } else if (strstr(C,            "cplx")){
                cplxcalc();
        } else if (strstr(C,            "/pol/")){
                printf("Hitler did nothing wrong");
        } else
                printf("type \"help\" for a list of commands");
        }

}
