#include <stdint.h>
#include <stdio.h>
#ifndef MATRICI_H_INCLUDED
#define MATRICI_H_INCLUDED

void pmat( void *array0, int SIZE)
{
        char (*array)[SIZE] = array0;
        int i, j;
        for( j= 0; j< SIZE; i++){
                for(i= 0; i< SIZE; i++){
                        printf( "%c ", array[j][i] );
                }
                printf( "\n");
        }
}
