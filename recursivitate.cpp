#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

using namespace std;

int Rfibb( int n )
{
        if( n>=0 && n<2 ){
                return n;
        } else {
                return (Rfibb(n-1) + Rfibb(n-2));
                printf("MERE");
        }
}

void Cfibb()
{
        int n;
        scanf("%d", &n );
        //printf("%d\n", n );
        printf("%d", Rfibb(n) );
}

int prim(int n, int d)
{
        //printf("MERE");
        if( n%d==0 || n<2 ){
                return 0;
        }
        if( d<=n/2 ){
                return prim(n,d+1);
        //        printf("%d ", d );
        } else {
                return 1;
        }
}

void Cprim ()
{
        int n;
        scanf("%d", &n );
        printf("%d", prim(n,2));
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
                //TEST();
        } else if (strstr(C,            "fibb")){
                Cfibb();
        } else if (strstr(C,            "prim")){
                Cprim();
        } else if (strstr(C,            "mrara")){
                //Mrara();
        } else if (strstr(C,            "/pol/")){
                printf("Hitler did nothing wrong");
        } else
                printf("type \"help\" for a list of commands");
        }

}
