#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

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
        char op, c;
        printf("Z1= ");
         scanf("%lf %c %lf", z1.r, c, z1.i );
        printf("Z2= ");
        printf("%lf %c %lf", z1.r, c, z1.i );
        //scanf("%c", op );
        //scanf("%d", z1.r);
        //if()
        printf("%2f", z1.r);
}

void binN(){



        //struct

        //printf("%d ", T0.N );
}

struct V2 {
        uint8_t i;
        uint8_t j;
        int v;
};

void Mrara(){
        FILE *fin;
        fin = fopen("./date.in", "r");
        V2 arr [256];
        char s[256];
        uint32 N, k;
        uint32 maxi = 0 , maxj = 0;
        scanf("%d", N);
        for( k = 0; k < N; k++){
                scanf("%d %d %d", &arr[0].i, &arr[0].j, &arr[0].v );
        }
        for( k = 0; k < N; k++){
                maxi = max(arr[0].i, maxi);
                maxj = max(arr[0].j, maxj);
        }


}



void TzCap()
{

}


int main ()
{
char C[256];
char q='r';

while(q){
        printf("\n>");
        scanf("%s", C);

        if (strstr(C,                    "Q!")){
                //q=0;
        } else if (strstr(C,            "help")){
                printf("\n cplx - calculator numere complexe \n binN - binomul lui Newton \n");
        } else if (strstr(C,            "TEST")){
                TEST();
        } else if (strstr(C,            "cplx")){
                cplxcalc();
        } else if (strstr(C,            "binn")){
                binN();
        } else if (strstr(C,            "mrara")){
                Mrara();
        } else if (strstr(C,            "tzcap")){
                TzCap();
        } else if (strstr(C,            "/pol/")){
                printf("Hitler did nothing wrong");
        } else
                printf("type \"help\" for a list of commands");
        }

}
