#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

using namespace std;


int N;
struct imobil {
        uint8_t tip;
        uint8_t nrc;
        uint32_t sup;
        uint32_t pre;
        char car[64];
        float pmp;
};

char tip[2][256]={"casa\0", "apartament\0"};



imobil li[256];
void citire(){

        FILE *fp;
        fp = fopen("./imobile.in", "r");

        FILE *fin;
        fin = fopen("imobile.in", "r");


        int k = 0;
        while( fscanf(fp, "%u %u %u %u %[^\n]s", &li[k].tip, &li[k].nrc, &li[k].sup, &li[k].pre, &li[k].car ) == 5){
                k++;
                li[k].pmp= (float)((float)li[k].pre / (float)li[k].sup);
        }
        N = k;
        printf("\nCITIREA MERE\n");
}

void swapimo(imobil a, imobil b)
{
        imobil tmp;
        tmp.tip = a.tip;
        tmp.nrc = a.nrc;
        tmp.pre = a.pre;
        strcpy(tmp.car, a.car);
        tmp.pmp = a.pmp;

        a.tip = b.tip;
        a.nrc = b.nrc;
        a.pre = b.pre;
        strcpy(a.car, b.car);
        a.pmp = b.pmp;

        b.tip = tmp.tip;
        b.nrc = tmp.nrc;
        b.pre = tmp.pre;
        strcpy(b.car, a.car);
        b.pmp = tmp.pmp;
}

void afisareA()
{
        for(int k = 0; k<N; k++ ){
                printf("%s, %u, %s %u camere, %ump(%.2fe/mp)\n", li[k].car, li[k].pre, tip[li[k].tip-1], li[k].nrc, li[k].sup, li[k].pmp);
        }
}

void sortare()
{
        for(int i=0; i<N; i++)
        {
                int imin=i;
                for(int j=i+1; j<N; j++){
                        if(strcmp(li[imin].car, li[j].car) && li[imin].pre > li[j].pre){
                                imin = j;
                        }
                }
                imobil aux=li[imin];
                while (imin>i){
                        swapimo(li[imin], li[--imin]);
                }
                swapimo(li[i], aux);
        }
}

int main()
{
        //printf("%s\n", tip[0]);
        citire();
        sortare();
        //printf("\n%d\n", N );
        afisareA();

        return 0;
}
