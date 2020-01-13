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

void strncpy (char* ds, char* ss, int n )
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
        else if(a[0]==c)
                return s;
        else return strchr(s+1, c);
}

#endif // STRING_H_INCLUDED
