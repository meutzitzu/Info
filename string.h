#include <stdint.h>
#include <stdio.h>
#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED


int strlen (char* x)
{
        if(x[0]==0)
                return 0;
        else
                return strlen (x+1)+1;
}

void strcpy (char* ds, char* ss)
{
        if(ss[0]==0)
                ds[0] = 0;
        else {
                ds[0] = ss[0];
                strcpy(ds+1, ss+1);
        }
}

void strncpy (char* ds, char* ss, uint16_t n )
{
        if(n!=0) {
                ds[0] = ss[0];
                strncpy(ds+1, ss+1, n-1);
        }
        else ds[0] = 0 ;
}

int strcmp(char* s1, char* s2)
{
        if(s1[0]*s2[0]==0)
                return s1[0]-s2[0];
        else if (s1[0]==s2[0])
                return strcmp(s1+1, s2+1);
                return s1[0]-s2[0];
}

char* strchr(char*s, char c)
{
        if(s[0]==0)
                return 0;
        else if(s[0]==c)
                return s;
        else return strchr(s+1, c);
}

void ss( int n, int s[], int i)
{
        if(i<=n){
                scanf("%c", &s[i]);
                ss(n, s, i+1);
        }
}

void ps( int n, int s[], int i)
{
        if(i<=n){
                printf("%c", s[i]);
                ps(n, s, i+1);
        }
}

double b_f(int i, double x)
{
        return i*x;
}

typedef struct{
        int i;
        double x;
}       f_args;

double w_f(f_args in)
{
        int i_out = in.i ? in.i : 8;
        double x_out = in.x ? in.x : 3.14;
        return f(i_out, x_out);
}
#define f(...) w_f((f_args){__VA_ARGS__}); 


#endif // STRING_H_INCLUDED
