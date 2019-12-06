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

int cifctrl(int n, int s)
{
        if( n == 0)
                if(s < 10)
                        return s;
                else
                        return cifctrl( s, 0);

        else
                return cifctrl( n /10, s + n %10);
}

int cifctrl2( int n)
{
        if( n %9 == 0)
                return 9;
        else
                return n%9;
}

void Ccifctrl()
{
        int N;
        scanf("%d", &N);
        printf("\n%d\n", cifctrl2(N) );
}

void Cfibb()
{
        int n;
        scanf("%d", &n );
        //printf("%d\n", n );
        printf(" %d", Rfibb(n) );
}

int cmmdc( int a, int b)
{
        if(b>0)
                return cmmdc(b, a%b);
        else return a;
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

void Ccmmdc()
{
        int a, b;
        scanf("%d %d", &a, &b);
        printf("\n%d", cmmdc(a,b) );
}

void Cprim ()
{
        int n;
        scanf("%d", &n );
        printf(" %d", prim(n,2));
}

int palindrom()
{

}

int main ()
{
char C[256];
char q='r';


printf("\n>");
while(q){
        scanf("%255s", &C);
        if (strstr(C,                    "quit")){
                q=0;
        } else if (strstr(C,            "help")){
                printf("\n cplx - calculator numere complexe\n binN - binomul lui Newton\n cifctrl - cifra de control\n fibb - al n-lea termen din sirul lui Fibbonaci\n prim - daca un nr este prima\n");
        } else if (strstr(C,            "TEST")){
                //TEST();
        } else if (strstr(C,            "cifctrl")){
                Ccifctrl();
        } else if (strstr(C,            "fibb")){
                Cfibb();
        } else if (strstr(C,            "prim")){
                Cprim();
        } else if (strstr(C,            "cmmdc")){
                Ccmmdc();
        } else if (strstr(C,            "/pol/")){
                printf("\nHitler did nothing wrong\n");
        } else
                printf("\ntype \"help\" for a list of commands\n");
        }

}
