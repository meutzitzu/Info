#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

using namespace std;

struct fr{
        int n;
        int d;
};
struct cplx {
        double r;
        double i;
};
struct comanda {
        char cod[256];
        int greutate;
        int pret;
        int cantitate;
        int valoare;
        int greutate_totala;
};

int cmmdc(int a, int b)
{
        int r;
        while(b>0){
                r = a % b;
                a = b;
                b = r;
        }
        return b;
}

fr frRed(struct fr F)
{
        F.n /= cmmdc(F.n, F.d);
        F.d /= cmmdc(F.n, F.d);
}


void TEST()
{

}

void cplxcalc()
{
        cplx z1;
        cplx z2, zr;
        char op, c;
        printf("Z1= ");
        scanf("%.2f %c %.2f", &z1.r, &c, &z1.i );
        printf("Z2= ");
        printf("%.2f %c %.2f", &z1.r, &c, &z1.i );
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
        char buffer[8];
        uint32_t N, k;
        uint8_t  i, j;
        uint8_t maxi = 0 , maxj = 0;
        scanf("%u", &N);
        /*
        for( k = 0; k < N; k++){
                fscanf(fin, "%u %u %d\n", &arr[k].i, &arr[k].j, &arr[k].v );
                arr[k].i--;
                arr[k].j--;
                //printf("%u %u %d\n", arr[k].i, arr[k].j, arr[k].v );
        }
        */
        while (fscanf(fin, "%u %u %d", &arr[++k].i, &arr[k].j, &arr[k].v ) == 1)
        {
                printf("parsing ... %s\n", buffer);
                getc(fin);
        }
        for( k = 0; k < N; k++){
                ///*
                maxi = max( arr[k].i, maxi);
                maxj = max( arr[k].j, maxj);
                //*/
        }
        //printf("maxi = %u \nmaxj = %u \n", maxi, maxj );
        int m[maxi ++][maxj ++];
        for( i =0; i < maxi; i++){
                for( j =0; j < maxj; j++){
                        m[i][j] = 0;
                }
        }
        for( k = 0; k < N; k++ ){
                i = arr[k].i;
                j = arr[k].j;
                m[i][j] = arr[k].v;
                //printf("%u %u\n", i, j );
        }
        //printf("MERE\n");
        printf("\n");
        for( i =0; i < maxi; i++){
                for( j =0; j < maxj; j++){
                        printf("%d ", m[i][j]);
                }
                printf("\n");
        }
}





int main ()
{
char C[256];
char q='r';

while(q){
        printf("\n>");
        scanf("%s", &C);

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
        } else if (strstr(C,            "/pol/")){
                printf("Hitler did nothing wrong");
        } else
                printf("type \"help\" for a list of commands");
        }

}
