#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <cmath>

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

int cifctrl(int n, int s =0 )
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

int cmmdc( int a, int b)
{
        if(b>0)
                return cmmdc(b, a%b);
        else return a;
}

int max2cif(int n, int nr){
        if(n%10>=n/10%10)
                nr = max(nr, n%100);
        //printf("\n%d %d",n, nr );
        if(n<9)
                return nr;
        else
                return max2cif(n/10, nr);
}



int prim(int n, int d=2)
{
        if( n%d==0 || n<2 ){
                return 0;
        }
        if( d<=sqrt(n) ){
                return prim(n,d+1);
        } else {
                return 1;
        }
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
                cifctrl();
        } else if (strstr(C,            "fibb")){
                fibb();
        } else if (strstr(C,            "prim")){
                prim();
        } else if (strstr(C,            "max2cif")){
                max2cif();
        } else if (strstr(C,            "cmmdc")){
                cmmdc();
        } else if (strstr(C,            "/pol/")){
                printf("\nHitler did nothing wrong\n");
        } else
                printf("\ntype \"help\" for a list of commands\n");
        }

}
