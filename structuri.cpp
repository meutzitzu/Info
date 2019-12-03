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
struct Vuud {
        uint8_t i;
        uint8_t j;
        int v;
};

struct tranz {
        char n[256];
        int32_t q;
        float p;
        uint8_t z;
        double v;
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


void TEST()
{

}




void binN(){



        //struct

        //printf("%d ", T0.N );
}


void tranz ()
{
        FILE *fin;
        fin = fopen("./date.in", "r");
        tranz arr [256];
        int k = 0;
        while (fscanf( fin, "%255s %d %f %u ", &arr[k].n, &arr[k].q, &arr[k].p, &arr[k].z ) == 4) {
                printf("%255s %d %f %u ", &arr[k].n, &arr[k].q, &arr[k].p, &arr[k].z );
                k++;
        }

}

void Mrara()
{
        FILE *fin;
        fin = fopen("./date.in", "r");
        Vuud arr [256];
        char buffer[8];
        uint32_t N, k=0;
        uint8_t  i, j;
        uint8_t maxi = 0 , maxj = 0;

        while(fscanf(fin, "%u %u %d\n", &arr[k].i, &arr[k].j, &arr[k].v ) == 3){
                k++;
        }
        N = k;
        for( k = 0; k < N; k++){
                maxi = max( arr[k].i, maxi);
                maxj = max( arr[k].j, maxj);
        }
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
        }
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

        if (strstr(C,                    "quit")){
                q=0;
        } else if (strstr(C,            "help")){
                printf("\n cplx - calculator numere complexe \n binN - binomul lui Newton \n");
        } else if (strstr(C,            "TEST")){
                TEST();
        } else if (strstr(C,            "tranz")){
                tranz();
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
