#ifndef RECURSIVITATE_H_INCLUDED
#define RECURSIVITATE_H_INCLUDED

void merge(int st, int m, int dr)
{
        int b[100];
        int k=0;
        int i= st;,j= m +1;
        while(i<= m && j<= dr)
                if(a[i]<a[j])
                        b[++k]= a[i++];
                else
                        b[++k]= a[j++];
        while(i<= m )
                b[++k]= a[i++];
        while(j<= dr)
                b[++k]= a[j++];
        for(i= 1; i<= k; i++)
                a[st++]= b[i];
}

void Msort(int st, int dr)
{
        Msort(st,dr);
        Msort(m+1, dr);
        merge(st, m, dr);
}

#endif
